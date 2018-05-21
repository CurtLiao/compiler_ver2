/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yaccpro2.y" /* yacc.c:339  */
  
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

#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 20 "yaccpro2.y" /* yacc.c:355  */

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

#line 274 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    76,    82,    83,    86,    87,    88,    91,
      92,    95,    95,   110,   115,   119,   124,   127,   134,   144,
     150,   156,   174,   201,   220,   247,   275,   279,   283,   287,
     291,   296,   300,   305,   335,   366,   369,   372,   375,   378,
     381,   384,   387,   392,   402,   405,   408,   411,   414,   417,
     420,   423,   426,   429,   432,   435,   438,   443,   448,   453,
     456,   459,   462,   465,   468,   471,   474,   477,   480,   483,
     488,   493,   498,   502,   507,   507,   517,   521,   526,   531,
     535,   539,   543
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONTINUE", "BREAK", "DO", "ELSE",
  "ENUM", "EXTERN", "FOR", "FN", "IF", "IN", "LET", "LOOP", "MATCH", "MUT",
  "PRINT", "PRINTLN", "PUB", "RETURN", "SELF", "STATIC", "USE", "WHERE",
  "WHILE", "STRUCT", "CHAR", "RIGHT_BRACE", "LEFT_BRACE", "RIGHT_BRACK",
  "LEFT_BRACK", "RIGHT_PARENT", "LEFT_PARENT", "COMMA", "COLON",
  "SEMICOLON", "DIVIDE", "MUTI", "MINUS", "PLUS", "MOD", "MMINUS", "ADD",
  "NOTEQ", "LARGEREQ", "LESSEQ", "LARGER", "LESS", "EQ", "LOGICAL_AND",
  "LOGICAL_OR", "LOGICAL_NOT", "ASSIGN", "DIVIDE_ASSIGN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "TIMES_ASSIGN", "IDENTIFIER", "INTEGER", "REAL",
  "STRING", "TRUE", "FALSE", "STR", "INT", "BOOL", "FLOAT", "UMINUS",
  "$accept", "program", "normal_declared", "declared", "func_declared",
  "func_dec", "$@1", "func_scope", "func_type", "formal_argu",
  "var_declared", "const_declared", "arr_declared", "content",
  "statements", "statement", "exp", "interger_exp", "real_exp", "bool_exp",
  "string_exp", "func_invoke", "parameters", "block", "$@2", "conditionl",
  "loop", "type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,   -56,     1,     6,     5,    13,  -100,     5,  -100,  -100,
    -100,     0,    -4,   -17,  -100,  -100,  -100,  -100,  -100,    75,
     316,    29,    17,   316,   316,  -100,    29,  -100,  -100,  -100,
    -100,   -19,    29,    29,    29,    52,  -100,  -100,  -100,  -100,
    -100,   131,  -100,  -100,  -100,  -100,  -100,    28,    65,    50,
     -26,   148,    29,    95,  -100,   331,    46,    29,  -100,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,   316,    68,    46,  -100,    29,  -100,   165,  -100,
      78,   114,    80,  -100,  -100,    88,    88,  -100,    81,    81,
      81,    81,    81,   315,   299,   331,    79,    76,    86,    94,
     182,  -100,  -100,    29,  -100,    17,   316,     3,  -100,   101,
    -100,  -100,  -100,  -100,    83,    29,    29,    41,    97,  -100,
     -24,     3,   103,     3,    40,  -100,  -100,  -100,  -100,  -100,
      29,   199,   216,  -100,   233,    29,     3,    46,    29,  -100,
    -100,  -100,  -100,   283,   112,  -100,  -100,  -100,   117,   122,
     126,   250,   128,   128,  -100,   110,  -100,   167,  -100,    29,
     128,   267,  -100,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     5,     3,     9,     7,     6,
       8,     0,     0,     0,     1,     2,     4,    10,    11,     0,
       0,     0,    16,     0,     0,    19,     0,    81,    80,    79,
      82,     0,     0,     0,     0,    55,    57,    58,    70,    59,
      60,     0,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,     0,    43,    61,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,    20,     0,    21,     0,    49,
       0,    73,     0,    47,    46,    45,    44,    48,    69,    67,
      68,    63,    62,    64,    65,    66,    18,     0,     0,     0,
       0,    24,    56,     0,    71,    16,     0,    30,    12,     0,
      22,    72,    17,    14,     0,     0,     0,     0,     0,    74,
       0,    28,     0,    29,    32,    42,    39,    40,    41,    25,
       0,     0,     0,    38,     0,     0,    30,     0,     0,    26,
      13,    27,    31,     0,    52,    35,    36,    37,    52,     0,
       0,     0,     0,     0,    75,     0,    33,    76,    78,     0,
       0,     0,    77,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,   169,    30,    69,  -100,  -100,  -100,  -100,    85,
    -100,  -100,  -100,   -57,    56,  -100,   -21,   -55,  -100,   -63,
    -100,   -99,   104,   -82,  -100,  -100,  -100,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   121,     6,     7,    22,   108,    98,    48,
       8,     9,    10,   122,   123,   124,    81,    42,    43,    44,
      45,    46,    82,   126,   136,   127,   128,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    80,    11,    49,    50,    51,    14,   137,   125,    57,
      75,    53,    54,    55,   114,     1,     2,    12,    20,    99,
     115,   116,   125,   117,   125,   125,     2,    76,   118,   138,
       5,    78,   119,    18,    52,     5,    21,   125,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   114,    96,     1,    19,   100,     2,   115,   116,    13,
     117,   120,    32,    72,   139,   118,   141,   144,    33,   119,
     157,   158,   148,    15,    32,    47,    17,   133,   162,   149,
      33,    34,   150,    56,    74,    57,   113,    35,    36,    37,
      38,    39,    40,    34,   131,   132,   134,    73,   120,    35,
      36,    37,    38,    39,    40,    36,    23,    97,   102,   143,
      24,    25,   104,   105,   143,   107,   130,   151,    59,    60,
      61,    62,    63,   106,   109,    59,    60,    79,    26,    63,
     135,   140,    59,    60,    61,    62,    63,   129,   161,    64,
      65,    66,    67,    68,   152,    69,    70,    71,   103,   153,
     154,    59,    60,    61,    62,    63,   155,   119,    64,    65,
      66,    67,    68,   159,    69,    70,    71,    58,    59,    60,
      61,    62,    63,   160,    16,    64,    65,    66,    67,    68,
     142,    69,    70,    71,    77,    59,    60,    61,    62,    63,
     112,     0,    64,    65,    66,    67,    68,     0,    69,    70,
      71,   101,    59,    60,    61,    62,    63,   111,     0,    64,
      65,    66,    67,    68,     0,    69,    70,    71,   110,    59,
      60,    61,    62,    63,     0,     0,    64,    65,    66,    67,
      68,     0,    69,    70,    71,   145,    59,    60,    61,    62,
      63,     0,     0,    64,    65,    66,    67,    68,     0,    69,
      70,    71,   146,    59,    60,    61,    62,    63,     0,     0,
      64,    65,    66,    67,    68,     0,    69,    70,    71,   147,
      59,    60,    61,    62,    63,     0,     0,    64,    65,    66,
      67,    68,     0,    69,    70,    71,   156,    59,    60,    61,
      62,    63,     0,     0,    64,    65,    66,    67,    68,     0,
      69,    70,    71,   163,    59,    60,    61,    62,    63,     0,
       0,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      59,    60,    61,    62,    63,     0,     0,    64,    65,    66,
      67,    68,     0,    69,    70,    71,    59,    60,    61,    62,
      63,     0,     0,    64,    65,    66,    67,    68,     0,    69,
       0,    71,    59,    60,    61,    62,    63,     0,     0,    64,
      65,    66,    67,    68,     0,     0,     0,    71,    59,    60,
      61,    62,    63,     0,     0,    64,    65,    66,    67,    68,
      27,    28,    29,    30
};

static const yytype_int16 yycheck[] =
{
      21,    56,    58,    23,    24,    26,     0,    31,   107,    33,
      36,    32,    33,    34,    11,    10,    13,    16,    35,    74,
      17,    18,   121,    20,   123,   124,    13,    53,    25,    53,
       0,    52,    29,    33,    53,     5,    53,   136,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    11,    72,    10,    58,    76,    13,    17,    18,    58,
      20,    58,    33,    35,   121,    25,   123,   130,    39,    29,
     152,   153,   135,     4,    33,    58,     7,    36,   160,   136,
      39,    52,   137,    31,    34,    33,   106,    58,    59,    60,
      61,    62,    63,    52,   115,   116,   117,    32,    58,    58,
      59,    60,    61,    62,    63,    59,    31,    39,    30,   130,
      35,    36,    32,    34,   135,    29,    33,   138,    37,    38,
      39,    40,    41,    47,    30,    37,    38,    32,    53,    41,
      33,    28,    37,    38,    39,    40,    41,    36,   159,    44,
      45,    46,    47,    48,    32,    50,    51,    52,    34,    32,
      28,    37,    38,    39,    40,    41,    30,    29,    44,    45,
      46,    47,    48,    53,    50,    51,    52,    36,    37,    38,
      39,    40,    41,     6,     5,    44,    45,    46,    47,    48,
     124,    50,    51,    52,    36,    37,    38,    39,    40,    41,
     105,    -1,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    36,    37,    38,    39,    40,    41,   103,    -1,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    -1,    50,
      -1,    52,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    52,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    46,    47,    48,
      64,    65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    13,    70,    71,    72,    73,    74,    79,    80,
      81,    58,    16,    58,     0,    73,    71,    73,    33,    58,
      35,    53,    75,    31,    35,    36,    53,    64,    65,    66,
      67,    96,    33,    39,    52,    58,    59,    60,    61,    62,
      63,    85,    86,    87,    88,    89,    90,    58,    78,    96,
      96,    85,    53,    85,    85,    85,    31,    33,    36,    37,
      38,    39,    40,    41,    44,    45,    46,    47,    48,    50,
      51,    52,    35,    32,    34,    36,    53,    36,    85,    32,
      86,    85,    91,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    96,    39,    77,    86,
      85,    36,    30,    34,    32,    34,    47,    29,    76,    30,
      36,    91,    78,    96,    11,    17,    18,    20,    25,    29,
      58,    72,    82,    83,    84,    90,    92,    94,    95,    36,
      33,    85,    85,    36,    85,    33,    93,    31,    53,    82,
      28,    82,    83,    85,    88,    36,    36,    36,    88,    82,
      86,    85,    32,    32,    28,    30,    36,    92,    92,    53,
       6,    85,    92,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    75,    74,    76,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    81,    82,    82,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    90,    91,    91,    93,    92,    94,    94,    95,    96,
      96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       2,     0,     8,     3,     3,     0,     0,     5,     3,     4,
       6,     6,     8,     5,     7,     9,     2,     2,     1,     1,
       0,     2,     1,     4,     7,     3,     3,     3,     2,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     4,     3,     1,     0,     4,     5,     7,     5,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 72 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to program\n");
			symt.popStack();
		}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to program\n");
			symt.popStack();
		}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to normal_declared\n");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to normal_declared\n");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to declared\n");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to declared\n");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 88 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to declared\n");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to func_declared\n");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "yaccpro2.y" /* yacc.c:1646  */
    {Trace("Reducing to func_declared\n");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "yaccpro2.y" /* yacc.c:1646  */
    { 
										Trace("Reducing to funct_dec\n");
										varentry v = func((yyvsp[-1].Token).sval,T_NO);
										if(!symt.addvar(v)){
											yyerror("Error: redefined");
										} 
										symt.pushStack((yyvsp[-1].Token).sval);
			}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "yaccpro2.y" /* yacc.c:1646  */
    { 
				Trace("Reducing to funct_dec\n");
				symt.popStack(); 
			}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to func scope\n");
		}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 115 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to func type -> type\n");
			symt.funcIn((yyvsp[0].Token).token_type);
		}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 119 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to func type\n");
		}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 124 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to formal argu\n");
		}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 127 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to formal argu\n");
			varentry v = varNormal((yyvsp[-4].Token).sval,(yyvsp[-2].Token).token_type,false);
			if(!symt.addvar(v)){
				yyerror("Error: redefined");
			}
		}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 134 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to formal argu 1\n");
			varentry v = varNormal((yyvsp[-2].Token).sval,(yyvsp[0].Token).token_type,false);
			if(!symt.addvar(v)){
				yyerror("Error: redefined");
			}
		}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n((yyvsp[-1].Token).sval,T_NO,false);
			if(!symt.addvar(v))
				yyerror("Error : redefined");
		}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 150 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n((yyvsp[-3].Token).sval,(yyvsp[-1].Token).token_type,false);
			if(!symt.addvar(v))
				yyerror("Error : redefined");
		}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to var_declared\n");
			varentry v = varNormal_n((yyvsp[-3].Token).sval,(yyvsp[-1].Token).token_type,false);
			if((yyvsp[-1].Token).token_type==T_INT){
				v.data.ival = (yyvsp[-1].Token).ival;
			}
			else if((yyvsp[-1].Token).token_type==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).fval;
			}
			else if((yyvsp[-1].Token).token_type==T_STR){
				v.data.sval = (yyvsp[-1].Token).sval;
			}
			else if((yyvsp[-1].Token).token_type==T_BOOL){
				v.data.bval = (yyvsp[-1].Token).bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 174 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to var_declared\n");
			varentry v = varNormal((yyvsp[-5].Token).sval,(yyvsp[-3].Token).token_type,false);

			if((yyvsp[-1].Token).token_type==T_INT && (yyvsp[-3].Token).token_type==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).fval;
			}
			else if((yyvsp[-3].Token).token_type != (yyvsp[-1].Token).token_type){
				yyerror("Error : exp type not same");
			}
			else if((yyvsp[-1].Token).token_type==T_INT){
				v.data.ival = (yyvsp[-1].Token).ival;
			}
			else if((yyvsp[-1].Token).token_type==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).fval;
			}
			else if((yyvsp[-1].Token).token_type==T_STR){
				v.data.sval = (yyvsp[-1].Token).sval;
			}
			else if((yyvsp[-1].Token).token_type==T_BOOL){
				v.data.bval = (yyvsp[-1].Token).bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 201 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to const_declared\n");
			varentry v = varNormal((yyvsp[-3].Token).sval,(yyvsp[-1].Token).token_type,true);
			if((yyvsp[-1].Token).token_type ==T_INT){
				v.data.ival = (yyvsp[-1].Token).ival;
			}
			else if((yyvsp[-1].Token).token_type ==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).fval;
			}
			else if((yyvsp[-1].Token).token_type ==T_STR){
				v.data.sval = (yyvsp[-1].Token).sval;
			}
			else if((yyvsp[-1].Token).token_type ==T_BOOL){
				v.data.bval = (yyvsp[-1].Token).bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 220 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to const_declared\n");
			varentry v = varNormal((yyvsp[-5].Token).sval,(yyvsp[-3].Token).token_type,true);

			if((yyvsp[-1].Token).token_type==T_INT && (yyvsp[-3].Token).token_type==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).ival;
			}
			else if((yyvsp[-3].Token).token_type != (yyvsp[-1].Token).token_type){
				yyerror("Error : exp type not same");
			}
			else if((yyvsp[-1].Token).token_type==T_INT){
				v.data.ival = (yyvsp[-1].Token).ival;
			}
			else if((yyvsp[-1].Token).token_type==T_FLOAT){
				v.data.fval = (yyvsp[-1].Token).fval;
			}
			else if((yyvsp[-1].Token).token_type==T_STR){
				v.data.sval = (yyvsp[-1].Token).sval;
			}
			else if((yyvsp[-1].Token).token_type==T_BOOL){
				v.data.bval = (yyvsp[-1].Token).bval;
			}
			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 247 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to arr_declared\n");
			varentry v = varArr((yyvsp[-6].Token).sval,(yyvsp[-4].Token).token_type,false,(yyvsp[-2].Token).ival);
			int arrIndex = (yyvsp[-2].Token).ival;
			if((yyvsp[-2].Token).token_type!=T_INT){
				yyerror("Error array index type error");
			}
			if((yyvsp[-4].Token).token_type==T_INT){
				v.data.inArr = new int[arrIndex];
			}
			else if((yyvsp[-4].Token).token_type==T_FLOAT){
				v.data.flArr = new float[arrIndex];
			}
			else if((yyvsp[-4].Token).token_type==T_STR){
				v.data.stArr = new char*[arrIndex];
				for(int i =0;i<arrIndex;i++){
					v.data.stArr[i][0] = '0';
				}
			}
			else if((yyvsp[-4].Token).token_type==T_BOOL){
				v.data.boArr = new bool[arrIndex];
			}

			if(!symt.addvar(v))
				yyerror("Error: redefined");
		}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 275 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to content\n");
		}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 279 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to content\n");
		}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 283 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to content\n");
		}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 287 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to content\n");
		}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 291 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to content empty\n");
		}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 296 "yaccpro2.y" /* yacc.c:1646  */
    {
				Trace("Reducing to statements\n");
			}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 300 "yaccpro2.y" /* yacc.c:1646  */
    {
				Trace("Reducing to statements\n");
			}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 305 "yaccpro2.y" /* yacc.c:1646  */
    {
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
		}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 335 "yaccpro2.y" /* yacc.c:1646  */
    {
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
		}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 366 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 369 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 372 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 375 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 378 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 381 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 384 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 387 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to statement\n");
		}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 392 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
		/*$$=$2;
		if($2.token_type==T_INT)
			$2.ival = $2.ival*(-1);
		else if($2.token_type==T_FLOAT)
			$2.fval = $2.fval*(-1);
		else	
			yyerror("minus arg type error");*/
	}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 402 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 405 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 408 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 411 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 414 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 417 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 420 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 423 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 426 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 429 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 432 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 435 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 438 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to exp\n");
	}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 443 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to interger_exp\n");
		}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 448 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to real_exp\n");
		}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 453 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 456 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 459 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 462 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 465 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 468 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 471 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 474 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 477 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp larger eq\n");
		}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 480 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to  less eq\n");
		}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 483 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to bool_exp\n");
		}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 488 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to string_exp\n");
		}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 493 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to func_invoke\n");
		}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 498 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to parameters\n");
		}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 502 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to parameters\n");
		}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 507 "yaccpro2.y" /* yacc.c:1646  */
    {
				Trace("Reducing to block\n");
				symt.pushStack("nowScope");
	 			}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 511 "yaccpro2.y" /* yacc.c:1646  */
    {
				Trace("Reducing to block\n");
				symt.popStack();
	 }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 517 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to conditionl\n");
	}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 521 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to conditionl\n");
	}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 526 "yaccpro2.y" /* yacc.c:1646  */
    {
		Trace("Reducing to loop\n");
	}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 531 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to type\n");
			(yyval.Token).token_type =T_BOOL;
		}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 535 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to type\n");
			(yyval.Token).token_type =T_INT;
		}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 539 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to type\n");
			(yyval.Token).token_type =T_STR;
		}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 543 "yaccpro2.y" /* yacc.c:1646  */
    {
			Trace("Reducing to type\n");
			(yyval.Token).token_type =T_FLOAT;
		}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2355 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 548 "yaccpro2.y" /* yacc.c:1906  */



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
