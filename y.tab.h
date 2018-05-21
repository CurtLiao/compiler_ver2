/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONTINUE = 258,
    BREAK = 259,
    DO = 260,
    ELSE = 261,
    ENUM = 262,
    EXTERN = 263,
    FOR = 264,
    FN = 265,
    IF = 266,
    IN = 267,
    LET = 268,
    LOOP = 269,
    MATCH = 270,
    MUT = 271,
    PRINT = 272,
    PRINTLN = 273,
    PUB = 274,
    RETURN = 275,
    SELF = 276,
    STATIC = 277,
    USE = 278,
    WHERE = 279,
    WHILE = 280,
    STRUCT = 281,
    CHAR = 282,
    RIGHT_BRACE = 283,
    LEFT_BRACE = 284,
    RIGHT_BRACK = 285,
    LEFT_BRACK = 286,
    RIGHT_PARENT = 287,
    LEFT_PARENT = 288,
    COMMA = 289,
    COLON = 290,
    SEMICOLON = 291,
    DIVIDE = 292,
    MUTI = 293,
    MINUS = 294,
    PLUS = 295,
    MOD = 296,
    MMINUS = 297,
    ADD = 298,
    NOTEQ = 299,
    LARGEREQ = 300,
    LESSEQ = 301,
    LARGER = 302,
    LESS = 303,
    EQ = 304,
    LOGICAL_AND = 305,
    LOGICAL_OR = 306,
    LOGICAL_NOT = 307,
    ASSIGN = 308,
    DIVIDE_ASSIGN = 309,
    PLUS_ASSIGN = 310,
    MINUS_ASSIGN = 311,
    TIMES_ASSIGN = 312,
    IDENTIFIER = 313,
    INTEGER = 314,
    REAL = 315,
    STRING = 316,
    TRUE = 317,
    FALSE = 318,
    STR = 319,
    INT = 320,
    BOOL = 321,
    FLOAT = 322,
    UMINUS = 323
  };
#endif
/* Tokens.  */
#define CONTINUE 258
#define BREAK 259
#define DO 260
#define ELSE 261
#define ENUM 262
#define EXTERN 263
#define FOR 264
#define FN 265
#define IF 266
#define IN 267
#define LET 268
#define LOOP 269
#define MATCH 270
#define MUT 271
#define PRINT 272
#define PRINTLN 273
#define PUB 274
#define RETURN 275
#define SELF 276
#define STATIC 277
#define USE 278
#define WHERE 279
#define WHILE 280
#define STRUCT 281
#define CHAR 282
#define RIGHT_BRACE 283
#define LEFT_BRACE 284
#define RIGHT_BRACK 285
#define LEFT_BRACK 286
#define RIGHT_PARENT 287
#define LEFT_PARENT 288
#define COMMA 289
#define COLON 290
#define SEMICOLON 291
#define DIVIDE 292
#define MUTI 293
#define MINUS 294
#define PLUS 295
#define MOD 296
#define MMINUS 297
#define ADD 298
#define NOTEQ 299
#define LARGEREQ 300
#define LESSEQ 301
#define LARGER 302
#define LESS 303
#define EQ 304
#define LOGICAL_AND 305
#define LOGICAL_OR 306
#define LOGICAL_NOT 307
#define ASSIGN 308
#define DIVIDE_ASSIGN 309
#define PLUS_ASSIGN 310
#define MINUS_ASSIGN 311
#define TIMES_ASSIGN 312
#define IDENTIFIER 313
#define INTEGER 314
#define REAL 315
#define STRING 316
#define TRUE 317
#define FALSE 318
#define STR 319
#define INT 320
#define BOOL 321
#define FLOAT 322
#define UMINUS 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "yaccpro2.y" /* yacc.c:1909  */

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

#line 204 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
