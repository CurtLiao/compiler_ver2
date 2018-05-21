%{  
#define Trace(t)        printf(t)
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "symbols.h"
#include<iostream>
#include<vector>
#include<string>

extern "C" {
	int yyerror(const char *s);
	extern int yylex();
}

SymbolTables symt = SymbolTables();
%}

%union
{
	struct
	{
		union
		{
			int ival;
			bool bval;
			char *sval;
			float fval;
		};
		int token_type;
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

%type<Token> exp arr_declared type interger_exp real_exp string_exp bool_exp func_invoke




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
		normal_declared func_declared {
			Trace("Reducing to program\n");
			symt.popStack();
		} |
		func_declared{
			Trace("Reducing to program\n");
			symt.popStack();
		}
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
			FN IDENTIFIER LEFT_PARENT { 
										Trace("Reducing to funct_dec\n");
										varentry v = func($2.sval,T_NO);
										if(!symt.addvar(v)){
											yyerror("Error: redefined");
										} 
										symt.pushStack($2.sval);
			}
			formal_argu RIGHT_PARENT func_type
			func_scope	{ 
				Trace("Reducing to funct_dec\n");
				symt.popStack(); 
			}
			;
func_scope:
		LEFT_BRACE content RIGHT_BRACE{
			Trace("Reducing to func scope\n");
		}
		;
func_type:
		MINUS LARGER type{
			Trace("Reducing to func type -> type\n");
			symt.funcIn($3.token_type);
		} |
		%empty{
			Trace("Reducing to func type\n");
		}
		;
formal_argu:
		%empty{
			Trace("Reducing to formal argu\n");
		} |
		IDENTIFIER COLON type COMMA formal_argu{
			Trace("Reducing to formal argu\n");
			varentry v = varNormal($1.sval,$3.token_type,false);
			if(!symt.addvar(v)){
				yyerror("Error: redefined");
			}
		} |
		IDENTIFIER COLON type{
			Trace("Reducing to formal argu 1\n");
			varentry v = varNormal($1.sval,$3.token_type,false);
			if(!symt.addvar(v)){
				yyerror("Error: redefined");
			}
		}
		;

var_declared:
		LET MUT IDENTIFIER SEMICOLON{
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n($3.sval,T_NO,false);
			if(!symt.addvar(v))
				yyerror("Error : redefined");
		} |
		LET MUT IDENTIFIER COLON type SEMICOLON{
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n($3.sval,$5.token_type,false);
			if(!symt.addvar(v))
				yyerror("Error : redefined");
		} |
		LET MUT IDENTIFIER ASSIGN exp SEMICOLON{
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n($3.sval,$5.token_type,false);
			if($5.token_type==T_INT){
				v.data.ival = $5.ival;
			}
			else if($5.token_type==T_FLOAT){
				v.data.fval = $5.fval;
			}
			else if($5.token_type==T_STR){
				v.data.sval = $5.sval;
			}
			else if($5.token_type==T_BOOL){
				v.data.bval = $5.bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		} |
		LET MUT IDENTIFIER COLON type ASSIGN exp SEMICOLON{
			Trace("Reducing to var_declared\n");
			varentry v = varNormal($3.sval,$5.token_type,false);

			if($7.token_type==T_INT && $5.token_type==T_FLOAT){
				v.data.fval = $7.fval;
			}
			else if($5.token_type != $7.token_type){
				yyerror("Error : exp type not same");
			}
			else if($7.token_type==T_INT){
				v.data.ival = $7.ival;
			}
			else if($7.token_type==T_FLOAT){
				v.data.fval = $7.fval;
			}
			else if($7.token_type==T_STR){
				v.data.sval = $7.sval;
			}
			else if($7.token_type==T_BOOL){
				v.data.bval = $7.bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
		;
const_declared:
		LET IDENTIFIER ASSIGN exp SEMICOLON{
			Trace("Reducing to const_declared\n");
			varentry v = varNormal($2.sval,$4.token_type,true);
			if($4.token_type ==T_INT){
				v.data.ival = $4.ival;
			}
			else if($4.token_type ==T_FLOAT){
				v.data.fval = $4.fval;
			}
			else if($4.token_type ==T_STR){
				v.data.sval = $4.sval;
			}
			else if($4.token_type ==T_BOOL){
				v.data.bval = $4.bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
		|
		LET IDENTIFIER COLON type ASSIGN exp SEMICOLON{
			Trace("Reducing to const_declared\n");
			varentry v = varNormal($2.sval,$4.token_type,true);

			if($6.token_type==T_INT && $4.token_type==T_FLOAT){
				v.data.fval = $6.ival;
			}
			else if($4.token_type != $6.token_type){
				yyerror("Error : exp type not same");
			}
			else if($6.token_type==T_INT){
				v.data.ival = $6.ival;
			}
			else if($6.token_type==T_FLOAT){
				v.data.fval = $6.fval;
			}
			else if($6.token_type==T_STR){
				v.data.sval = $6.sval;
			}
			else if($6.token_type==T_BOOL){
				v.data.bval = $6.bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
		;
arr_declared:
		LET MUT IDENTIFIER LEFT_BRACK type COMMA interger_exp RIGHT_BRACK SEMICOLON{
			Trace("Reducing to arr_declared\n");
			varentry v = varArr($3.sval,$5.token_type,false,$7.ival);
			int arrIndex = $7.ival;
			if($7.token_type!=T_INT){
				yyerror("Error array index type error");
			}
			if($5.token_type==T_INT){
				v.data.inArr = new int[arrIndex];
			}
			else if($5.token_type==T_FLOAT){
				v.data.flArr = new float[arrIndex];
			}
			else if($5.token_type==T_STR){
				v.data.stArr = new char*[arrIndex];
				for(int i =0;i<arrIndex;i++){
					v.data.stArr[i][0] = '0';
				}
			}
			else if($5.token_type==T_BOOL){
				v.data.boArr = new bool[arrIndex];
			}

			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
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
		|
		%empty{
			Trace("Reducing to content empty\n");
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
			/*varentry v = symt.lookup($1.sval);
			v.isInit = true;
			if(v.type==T_WRONG){
				yyerror("Error identifier not exist");
			}
			else if(v.type==T_INT){
				v.data.ival = $3.ival;
			}
			else if(v.type==T_FLOAT && $3.token_type==T_INT){
				v.data.fval = $3.ival;
			}
			else if(v.type!=$3.token_type){
				yyerror("type not the same");
			}
			else if(v.type==T_BOOL){
				v.data.bval = $3.bval;
			}
			else if(v.type==T_STR){
				v.data.sval = $3.sval;
			}
			else if(v.type==T_FLOAT){
				v.data.fval = $3.fval;
			}
			else if(v.type==T_NO){
				v.type = $3.token_type;
			}
			symt.revVar(v);*/
		} |
		IDENTIFIER LEFT_BRACK interger_exp RIGHT_BRACK ASSIGN exp SEMICOLON{
			Trace("Reducing to statement\n");
			/*varentry v = symt.lookup($1.sval);
			int index = $3.ival;
			if($3.token_type!=T_INT){
				yyerror("array index type wrong");
			}
			
			if(v.type==T_WRONG)
				yyerror("Error identifier not exist");
			else if(!v.isArr)
				yyerror("Error not array");
			else if(index>=v.arrSize)
				yyerror("Error out of range");
			else{
				v.isInit = ture;
				if(v.type==T_FLOAT && $6.token_type==T_INT)
					v.data.flArr[index]=$6.ival;
				else if(v.type!=$6.token_type)
					yyerror("type not the same");
				else if(v.type==T_INT)
					v.data.inArr[index]=$6.ival;
				else if(v.type==T_STR)
					v.data.stArr[index]=$6.sval;
				else if(v.type==T_FLOAT)
					v.data.flArr[index]=$6.fval;
				else if(v.type==T_BOOL)
					v.data.boArr[index]=$6.bval;
				symt.revVar(v);
			}*/
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
		/*$$=$2;
		if($2.token_type==T_INT)
			$2.ival = $2.ival*(-1);
		else if($2.token_type==T_FLOAT)
			$2.fval = $2.fval*(-1);
		else	
			yyerror("minus arg type error");*/
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
		exp LARGEREQ exp{
			Trace("Reducing to bool_exp larger eq\n");
		} |
		exp LESSEQ exp{
			Trace("Reducing to  less eq\n");
		} |
		exp NOTEQ exp{
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
	 LEFT_BRACE{
				Trace("Reducing to block\n");
				symt.pushStack("nowScope");
	 			} 
	 content RIGHT_BRACE{
				Trace("Reducing to block\n");
				symt.popStack();
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
			$$.token_type =T_BOOL;
		} |
		INT{
			Trace("Reducing to type\n");
			$$.token_type =T_INT;
		} |
		STR{
			Trace("Reducing to type\n");
			$$.token_type =T_STR;
		} |
		FLOAT{
			Trace("Reducing to type\n");
			$$.token_type =T_FLOAT;
		}
		;
%%


int yyerror(const char *s){
	//fprintf("%s\n",yytext);
    fprintf(stderr, "Error: %s\n", s);
	exit(0);
	return 0;
}

int main(void)
{
    yyparse();

	return 0;
}
