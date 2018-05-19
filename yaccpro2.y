%{  
#define Trace(t)        printf(t)
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "symbols.h"

enum TypeE{T_INT=0,T_REAL=1,T_STR=2,T_BOOL=3};

%}

%union
{
	struct
	{
		union{
			int ival;
			bool bval;
			char *sval;
			float fval;
		};
		int token_type; // 0:int 1:float 2:bool 3:string
		int isarr;
		int conVar;
	}Token;
}


/* tokens */
%token CONTINUE BREAK DO ELSE ENUM EXTERN FOR FN IF IN  LET LOOP MATCH MUT PRINT PRINTLN PUB RETURN SELF STATIC USE WHERE WHILE
%token STRUCT CHAR  
%token RIGHT_BRACE LEFT_BRACE RIGHT_BRACK LEFT_BRACK RIGHT_PARENT LEFT_PARENT COMMA COLON SEMICOLON            
%token DIVIDE MUTI MINUS PLUS MOD MMINUS ADD NOTEQ LARGEREQ LESSEQ LARGER LESS EQ
%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT ASSIGN DIVIDE_ASSIGN PLUS_ASSIGN MINUS_ASSIGN TIMES_ASSIGN
 
%token<Token> IDENTIFIER
%token<Token> INTEGER
%token<Token> REAL
%token<Token> STRING
%token TRUE
%token FALSE
%token STR
%token INT
%token BOOL
%token FLOAT



//%token<vinfo> exp number int_exp bool_exp num_exp func_exp array_exp constant variable constant_exp declaration simple

%start program
%left LOGICAL_OR
%left LOGICAL_AND
%left LOGICAL_NOT
%left NOTEQ LARGEREQ LESSEQ LARGER LESS EQ
%left PLUS MINUS
%left MUTI DIVIDE MOD
%nonassoc UMINUS

 
%%
program:	
		normal_declared func_declared {Trace("Reducing to program\n");} |
		func_declared{Trace("Reducing to program\n");}
		;
normal_declared:
		 declared normal_declared{Trace("Reducing to normal_declared\n");} |
		 declared{Trace("Reducing to normal_declared\n");}
		 ;
declared:
		const_declared{Trace("Reducing to declared\n");} |
		var_declared{Trace("Reducing to declared\n");} |
		arr_declared{Trace("Reducing to declared\n");}
		;
func_declared:
			func_dec{Trace("Reducing to func_declared\n");} |
			func_dec func_declared{Trace("Reducing to func_declared\n");}
			;
func_dec:
			FN IDENTIFIER LEFT_PARENT  RIGHT_PARENT scope								{ Trace("Reducing to funct_dec\n"); }
			|	FN IDENTIFIER LEFT_PARENT formal_argu RIGHT_PARENT scope					{ Trace("Reducing to funct_dec\n"); }
			|	FN IDENTIFIER LEFT_PARENT  RIGHT_PARENT MINUS LARGER type	scope				{ Trace("Reducing to funct_dec\n"); }
			|	FN IDENTIFIER LEFT_PARENT formal_argu RIGHT_PARENT MINUS LARGER type	scope		{ Trace("Reducing to funct_dec\n"); }
		;
formal_argu:
		IDENTIFIER COLON type COMMA formal_argu |
		IDENTIFIER COLON type
		;

var_declared:
		LET MUT IDENTIFIER SEMICOLON{
			Trace("Reducing to var_declared\n");
		} |
		LET MUT IDENTIFIER COLON type SEMICOLON{
			Trace("Reducing to var_declared\n");
		} |
		LET MUT IDENTIFIER ASSIGN exp SEMICOLON{
			Trace("Reducing to var_declared\n");
		} |
		LET MUT IDENTIFIER COLON type ASSIGN exp SEMICOLON{
			Trace("Reducing to var_declared\n");
		}
		;
const_declared:
		LET IDENTIFIER ASSIGN exp SEMICOLON{
			Trace("Reducing to const_declared\n");
		}
		|
		LET IDENTIFIER COLON type ASSIGN exp SEMICOLON{
			Trace("Reducing to const_declared\n");
		}
		;
arr_declared:
		LET MUT IDENTIFIER LEFT_BRACK type COMMA interger_exp RIGHT_BRACK SEMICOLON{Trace("Reducing to arr_declared\n");}
		;
scope:		
		LEFT_BRACE content RIGHT_BRACE{
			Trace("Reducing to scope\n");
		} |
		LEFT_BRACE  RIGHT_BRACE{Trace("Reducing to scope\n");}
		;
content:
		declared content{
			Trace("Reducing to content\n");
		}
		|
		statements content{
			Trace("Reducing to content\n");
		}
		|
		declared{
			Trace("Reducing to content\n");
		}
		|
		statements{
			Trace("Reducing to content\n");
		}
		;
statements:
			statement statements{
				Trace("Reducing to statements\n");
			}
			|
			statement{
				Trace("Reducing to statements\n");
			}
			;
statement:
		IDENTIFIER ASSIGN exp SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		IDENTIFIER LEFT_BRACK interger_exp RIGHT_BRACK ASSIGN exp SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		PRINT exp SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		PRINTLN exp SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		RETURN exp SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		RETURN SEMICOLON{
			Trace("Reducing to statement\n");
		} |
		block{
			Trace("Reducing to statement\n");
		} |
		conditionl{
			Trace("Reducing to statement\n");
		} |
		loop{
			Trace("Reducing to statement\n");
		} |
		func_invoke{
			Trace("Reducing to statement\n");
		}
		;
exp:
	MINUS exp %prec UMINUS{
		Trace("Reducing to exp\n");
	} |
	exp PLUS exp{
		Trace("Reducing to exp\n");
	} |
	exp MINUS exp{
		Trace("Reducing to exp\n");
	} |
	exp MUTI exp{
		Trace("Reducing to exp\n");
	} |
	exp DIVIDE exp{
		Trace("Reducing to exp\n");
	} |
	exp MOD exp{
		Trace("Reducing to exp\n");
	} |
	LEFT_PARENT exp RIGHT_PARENT{
		Trace("Reducing to exp\n");
	} |
	interger_exp{
		Trace("Reducing to exp\n");
	} |
	real_exp{
		Trace("Reducing to exp\n");
	} |
	bool_exp{
		Trace("Reducing to exp\n");
	} |
	string_exp{
		Trace("Reducing to exp\n");
	} |
	func_invoke{
		Trace("Reducing to exp\n");
	} |
	IDENTIFIER{
		Trace("Reducing to exp\n");
	} |
	IDENTIFIER LEFT_BRACK interger_exp RIGHT_BRACK{
		Trace("Reducing to exp\n");
	}
	;
interger_exp:	
		INTEGER{
			Trace("Reducing to interger_exp\n");
		}
		;
real_exp:
		REAL{
			Trace("Reducing to real_exp\n");
		}
		;
bool_exp:	
		TRUE{
			Trace("Reducing to bool_exp\n");
		} |
		FALSE{
			Trace("Reducing to bool_exp\n");
		} |
		LOGICAL_NOT exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LESS exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LARGER exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LOGICAL_AND exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LOGICAL_OR exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LOGICAL_NOT exp{
			Trace("Reducing to bool_exp\n");
		} |
		exp LARGEREQ{
			Trace("Reducing to bool_exp\n");
		} |
		exp LESSEQ{
			Trace("Reducing to bool_exp\n");
		} |
		exp NOTEQ{
			Trace("Reducing to bool_exp\n");
		} 
		;
string_exp:
		STRING{
			Trace("Reducing to string_exp\n");
		}
		;
func_invoke:
		IDENTIFIER LEFT_PARENT parameters RIGHT_PARENT{
			Trace("Reducing to func_invoke\n");
		}
		;
parameters:
		exp COMMA parameters{
			Trace("Reducing to parameters\n");
		}
		|
		exp{
			Trace("Reducing to parameters\n");
		}
		;
block:
	 LEFT_BRACE statements RIGHT_BRACE{
		 Trace("Reducing to block\n");
	 }
	 ;
conditionl:
	IF LEFT_PARENT bool_exp RIGHT_PARENT block{
		Trace("Reducing to conditionl\n");
	}
	|
	IF LEFT_PARENT bool_exp RIGHT_PARENT block ELSE block{
		Trace("Reducing to conditionl\n");
	}
	;
loop:
	WHILE LEFT_PARENT bool_exp RIGHT_PARENT block{
		Trace("Reducing to loop\n");
	}
	;
type:		
		BOOL{
			Trace("Reducing to type\n");
		} |
		INT{
			Trace("Reducing to type\n");
		} |
		STR{
			Trace("Reducing to type\n");
		} |
		FLOAT{
			Trace("Reducing to type\n");
		}
		;
%%

#include "lex.yy.c"

yyerror(msg)
char *msg;
{
    fprintf(stderr, "%s\n", msg);
}
allSymTab *SymbolTable = NULL;
main(int argc,char **argv)
{
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */

    SymbolTable = CreateSt();
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
}
