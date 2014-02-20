/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Tokens.  */
#define IDENTIFIER 258
#define TYPENAME 259
#define SCSPEC 260
#define TYPESPEC 261
#define TYPE_QUAL 262
#define CONSTANT 263
#define STRING 264
#define ELLIPSIS 265
#define SIZEOF 266
#define ENUM 267
#define STRUCT 268
#define UNION 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define FOR 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BREAK 278
#define CONTINUE 279
#define RETURN 280
#define GOTO 281
#define ASM_KEYWORD 282
#define TYPEOF 283
#define ALIGNOF 284
#define ATTRIBUTE 285
#define EXTENSION 286
#define LABEL 287
#define REALPART 288
#define IMAGPART 289
#define CHOOSE_EXPR 290
#define TYPES_COMPATIBLE_P 291
#define ASSIGN 292
#define OROR 293
#define ANDAND 294
#define EQCOMPARE 295
#define ARITHCOMPARE 296
#define RSHIFT 297
#define LSHIFT 298
#define MINUSMINUS 299
#define PLUSPLUS 300
#define UNARY 301
#define HYPERUNARY 302
#define POINTSAT 303
#define INTERFACE 304
#define IMPLEMENTATION 305
#define END 306
#define SELECTOR 307
#define DEFS 308
#define ENCODE 309
#define CLASSNAME 310
#define PUBLIC 311
#define PRIVATE 312
#define PROTECTED 313
#define PROTOCOL 314
#define OBJECTNAME 315
#define CLASS 316
#define ALIAS 317
#define OBJC_STRING 318




/* Copy the first part of user declarations.  */
#line 56 "c-parse.y"

#include "config.h"
#include "system.h"
#include <setjmp.h>

#include "tree.h"
#include "input.h"
#include "c-lex.h"
#include "c-tree.h"
#include "flags.h"
#include "output.h"
#include "toplev.h"

#ifdef MULTIBYTE_CHARS
#include <locale.h>
#endif


/* Since parsers are distinct for each language, put the language string
   definition here.  */
char *language_string = "GNU C";

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 87 "c-parse.y"
typedef union YYSTYPE {long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 233 "c-parse.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 204 "c-parse.y"

/* Number of statements (loosely speaking) and compound statements 
   seen so far.  */
static int stmt_count;
static int compstmt_count;
  
/* Input file and line number of the end of the body of last simple_if;
   used by the stmt-rule immediately after simple_if returns.  */
static char *if_stmt_file;
static int if_stmt_line;

/* List of types and structure classes of the current declaration.  */
static tree current_declspecs = NULL_TREE;
static tree prefix_attributes = NULL_TREE;

/* Stack of saved values of current_declspecs and prefix_attributes.  */
static tree declspec_stack;

/* 1 if we explained undeclared var errors.  */
static int undeclared_variable_notice;


/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)
extern void yyprint			PROTO ((FILE *, int, YYSTYPE));


/* Line 214 of yacc.c.  */
#line 272 "c-parse.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2546

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  158
/* YYNRULES -- Number of rules. */
#define YYNRULES  407
/* YYNRULES -- Number of states. */
#define YYNSTATES  706

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,     2,     2,    54,    45,     2,
      60,    78,    52,    50,    83,    51,    59,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    79,
       2,    37,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    85,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    43,    80,    81,     2,     2,     2,
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
      35,    36,    38,    41,    42,    46,    47,    48,    49,    55,
      56,    57,    58,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     6,     7,    10,    11,    15,    17,
      19,    25,    28,    32,    37,    42,    45,    48,    51,    54,
      56,    57,    58,    66,    71,    72,    73,    81,    86,    87,
      88,    95,    99,   101,   103,   105,   107,   109,   111,   113,
     115,   117,   119,   120,   122,   124,   128,   130,   133,   136,
     139,   142,   145,   150,   153,   158,   161,   164,   166,   168,
     170,   175,   176,   184,   186,   190,   194,   198,   202,   206,
     210,   214,   218,   222,   226,   230,   234,   235,   240,   241,
     246,   247,   248,   256,   257,   263,   267,   271,   273,   275,
     277,   281,   285,   286,   291,   296,   305,   312,   317,   321,
     325,   328,   331,   333,   336,   337,   339,   342,   346,   348,
     350,   353,   356,   361,   366,   369,   372,   376,   378,   380,
     383,   386,   387,   388,   393,   398,   402,   406,   409,   412,
     415,   418,   422,   423,   426,   429,   432,   435,   439,   440,
     443,   446,   448,   450,   453,   456,   458,   460,   463,   466,
     469,   473,   474,   477,   479,   481,   483,   488,   493,   495,
     497,   499,   501,   505,   507,   511,   512,   517,   518,   525,
     529,   530,   537,   541,   542,   544,   546,   549,   556,   558,
     562,   563,   565,   570,   577,   582,   584,   586,   588,   590,
     592,   593,   598,   600,   601,   604,   606,   610,   614,   617,
     618,   623,   625,   626,   631,   633,   635,   637,   640,   643,
     649,   653,   654,   655,   661,   662,   663,   669,   671,   673,
     677,   681,   686,   690,   694,   698,   700,   704,   709,   714,
     718,   722,   726,   728,   732,   736,   740,   745,   750,   754,
     758,   760,   762,   765,   767,   770,   772,   775,   776,   784,
     790,   793,   794,   802,   808,   811,   812,   821,   822,   830,
     833,   834,   836,   837,   839,   841,   844,   845,   849,   852,
     856,   858,   862,   864,   866,   869,   871,   875,   880,   887,
     893,   895,   899,   901,   903,   907,   910,   913,   914,   916,
     918,   921,   922,   925,   929,   933,   936,   940,   945,   949,
     952,   956,   959,   963,   965,   967,   970,   973,   974,   976,
     979,   980,   981,   983,   985,   988,   992,   994,   997,   999,
    1002,  1009,  1015,  1021,  1024,  1027,  1032,  1033,  1038,  1039,
    1040,  1044,  1049,  1053,  1055,  1057,  1059,  1061,  1064,  1065,
    1070,  1072,  1076,  1077,  1078,  1086,  1092,  1095,  1096,  1097,
    1098,  1111,  1112,  1119,  1122,  1125,  1128,  1132,  1139,  1148,
    1159,  1172,  1176,  1181,  1183,  1185,  1186,  1193,  1197,  1203,
    1206,  1210,  1211,  1213,  1214,  1216,  1217,  1219,  1221,  1225,
    1230,  1232,  1236,  1237,  1240,  1243,  1244,  1249,  1252,  1253,
    1255,  1257,  1261,  1263,  1267,  1272,  1277,  1282,  1287,  1292,
    1293,  1296,  1298,  1301,  1303,  1307,  1309,  1313
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      87,     0,    -1,    -1,    88,    -1,    -1,    89,    91,    -1,
      -1,    88,    90,    91,    -1,    93,    -1,    92,    -1,    27,
      60,   102,    78,    79,    -1,   243,    91,    -1,   125,   139,
      79,    -1,   132,   125,   139,    79,    -1,   128,   125,   138,
      79,    -1,   132,    79,    -1,   128,    79,    -1,     1,    79,
      -1,     1,    80,    -1,    79,    -1,    -1,    -1,   128,   125,
     167,    94,   119,    95,   201,    -1,   128,   125,   167,     1,
      -1,    -1,    -1,   132,   125,   170,    96,   119,    97,   201,
      -1,   132,   125,   170,     1,    -1,    -1,    -1,   125,   170,
      98,   119,    99,   201,    -1,   125,   170,     1,    -1,     3,
      -1,     4,    -1,    45,    -1,    51,    -1,    50,    -1,    56,
      -1,    55,    -1,    81,    -1,    82,    -1,   104,    -1,    -1,
     104,    -1,   110,    -1,   104,    83,   110,    -1,   116,    -1,
      52,   108,    -1,   243,   108,    -1,   101,   108,    -1,    42,
     100,    -1,   106,   105,    -1,   106,    60,   188,    78,    -1,
     107,   105,    -1,   107,    60,   188,    78,    -1,    33,   108,
      -1,    34,   108,    -1,    11,    -1,    29,    -1,   105,    -1,
      60,   188,    78,   108,    -1,    -1,    60,   188,    78,    84,
     109,   153,    80,    -1,   108,    -1,   110,    50,   110,    -1,
     110,    51,   110,    -1,   110,    52,   110,    -1,   110,    53,
     110,    -1,   110,    54,   110,    -1,   110,    49,   110,    -1,
     110,    48,   110,    -1,   110,    47,   110,    -1,   110,    46,
     110,    -1,   110,    45,   110,    -1,   110,    43,   110,    -1,
     110,    44,   110,    -1,    -1,   110,    42,   111,   110,    -1,
      -1,   110,    41,   112,   110,    -1,    -1,    -1,   110,    39,
     113,   102,    40,   114,   110,    -1,    -1,   110,    39,   115,
      40,   110,    -1,   110,    37,   110,    -1,   110,    38,   110,
      -1,     3,    -1,     8,    -1,   118,    -1,    60,   102,    78,
      -1,    60,     1,    78,    -1,    -1,    60,   117,   203,    78,
      -1,   116,    60,   103,    78,    -1,    35,    60,   110,    83,
     110,    83,   110,    78,    -1,    36,    60,   188,    83,   188,
      78,    -1,   116,    61,   102,    85,    -1,   116,    59,   100,
      -1,   116,    62,   100,    -1,   116,    56,    -1,   116,    55,
      -1,     9,    -1,   118,     9,    -1,    -1,   121,    -1,   121,
      10,    -1,   208,   209,   122,    -1,   120,    -1,   196,    -1,
     121,   120,    -1,   120,   196,    -1,   130,   125,   138,    79,
      -1,   133,   125,   139,    79,    -1,   130,    79,    -1,   133,
      79,    -1,   208,   209,   127,    -1,   123,    -1,   196,    -1,
     124,   123,    -1,   123,   196,    -1,    -1,    -1,   128,   125,
     138,    79,    -1,   132,   125,   139,    79,    -1,   128,   125,
     161,    -1,   132,   125,   164,    -1,   128,    79,    -1,   132,
      79,    -1,   243,   127,    -1,   136,   129,    -1,   132,   136,
     129,    -1,    -1,   129,   137,    -1,   129,     5,    -1,   129,
     146,    -1,   136,   131,    -1,   133,   136,   131,    -1,    -1,
     131,   137,    -1,   131,     5,    -1,   133,    -1,   146,    -1,
     132,   133,    -1,   132,   146,    -1,     7,    -1,     5,    -1,
     133,     7,    -1,   133,     5,    -1,   136,   135,    -1,   190,
     136,   135,    -1,    -1,   135,   137,    -1,     6,    -1,   174,
      -1,     4,    -1,    28,    60,   102,    78,    -1,    28,    60,
     188,    78,    -1,     6,    -1,     7,    -1,   174,    -1,   141,
      -1,   138,    83,   141,    -1,   143,    -1,   139,    83,   141,
      -1,    -1,    27,    60,   118,    78,    -1,    -1,   167,   140,
     145,    37,   142,   151,    -1,   167,   140,   145,    -1,    -1,
     170,   140,   145,    37,   144,   151,    -1,   170,   140,   145,
      -1,    -1,   146,    -1,   147,    -1,   146,   147,    -1,    30,
      60,    60,   148,    78,    78,    -1,   149,    -1,   148,    83,
     149,    -1,    -1,   150,    -1,   150,    60,     3,    78,    -1,
     150,    60,     3,    83,   104,    78,    -1,   150,    60,   103,
      78,    -1,   100,    -1,     5,    -1,     6,    -1,     7,    -1,
     110,    -1,    -1,    84,   152,   153,    80,    -1,     1,    -1,
      -1,   154,   179,    -1,   155,    -1,   154,    83,   155,    -1,
     159,    37,   157,    -1,   160,   157,    -1,    -1,   100,    40,
     156,   157,    -1,   157,    -1,    -1,    84,   158,   153,    80,
      -1,   110,    -1,     1,    -1,   160,    -1,   159,   160,    -1,
      59,   100,    -1,    61,   110,    10,   110,    85,    -1,    61,
     110,    85,    -1,    -1,    -1,   167,   162,   119,   163,   203,
      -1,    -1,    -1,   170,   165,   119,   166,   203,    -1,   168,
      -1,   170,    -1,    60,   168,    78,    -1,   168,    60,   238,
      -1,   168,    61,   102,    85,    -1,   168,    61,    85,    -1,
      52,   191,   168,    -1,   146,   126,   168,    -1,     4,    -1,
     169,    60,   238,    -1,   169,    61,    52,    85,    -1,   169,
      61,   102,    85,    -1,   169,    61,    85,    -1,    52,   191,
     169,    -1,   146,   126,   169,    -1,     4,    -1,   170,    60,
     238,    -1,    60,   170,    78,    -1,    52,   191,   170,    -1,
     170,    61,    52,    85,    -1,   170,    61,   102,    85,    -1,
     170,    61,    85,    -1,   146,   126,   170,    -1,     3,    -1,
      13,    -1,    13,   146,    -1,    14,    -1,    14,   146,    -1,
      12,    -1,    12,   146,    -1,    -1,   171,   100,    84,   175,
     181,    80,   145,    -1,   171,    84,   181,    80,   145,    -1,
     171,   100,    -1,    -1,   172,   100,    84,   176,   181,    80,
     145,    -1,   172,    84,   181,    80,   145,    -1,   172,   100,
      -1,    -1,   173,   100,    84,   177,   186,   180,    80,   145,
      -1,    -1,   173,    84,   178,   186,   180,    80,   145,    -1,
     173,   100,    -1,    -1,    83,    -1,    -1,    83,    -1,   182,
      -1,   182,   183,    -1,    -1,   182,   183,    79,    -1,   182,
      79,    -1,   134,   125,   184,    -1,   134,    -1,   190,   125,
     184,    -1,   190,    -1,     1,    -1,   243,   183,    -1,   185,
      -1,   184,    83,   185,    -1,   208,   209,   167,   145,    -1,
     208,   209,   167,    40,   110,   145,    -1,   208,   209,    40,
     110,   145,    -1,   187,    -1,   186,    83,   187,    -1,     1,
      -1,   100,    -1,   100,    37,   110,    -1,   134,   189,    -1,
     190,   189,    -1,    -1,   192,    -1,     7,    -1,   190,     7,
      -1,    -1,   191,     7,    -1,    60,   192,    78,    -1,    52,
     191,   192,    -1,    52,   191,    -1,   192,    60,   231,    -1,
     192,    61,   102,    85,    -1,   192,    61,    85,    -1,    60,
     231,    -1,    61,   102,    85,    -1,    61,    85,    -1,   146,
     126,   192,    -1,   194,    -1,   211,    -1,   194,   211,    -1,
     194,   196,    -1,    -1,   193,    -1,     1,    79,    -1,    -1,
      -1,   199,    -1,   200,    -1,   199,   200,    -1,    32,   242,
      79,    -1,   203,    -1,     1,   203,    -1,    84,    -1,   202,
      80,    -1,   202,   197,   198,   124,   195,    80,    -1,   202,
     197,   198,     1,    80,    -1,   202,   197,   198,   193,    80,
      -1,   205,   210,    -1,   205,     1,    -1,    15,    60,   102,
      78,    -1,    -1,    18,   207,   210,    17,    -1,    -1,    -1,
     208,   209,   213,    -1,   208,   209,   224,   210,    -1,   208,
     209,   212,    -1,   213,    -1,   224,    -1,   203,    -1,   221,
      -1,   102,    79,    -1,    -1,   204,    16,   214,   210,    -1,
     204,    -1,   204,    16,     1,    -1,    -1,    -1,    17,   215,
      60,   102,    78,   216,   210,    -1,   206,    60,   102,    78,
      79,    -1,   206,     1,    -1,    -1,    -1,    -1,    19,    60,
     226,    79,   217,   226,    79,   218,   226,    78,   219,   210,
      -1,    -1,    20,    60,   102,    78,   220,   210,    -1,    23,
      79,    -1,    24,    79,    -1,    25,    79,    -1,    25,   102,
      79,    -1,    27,   225,    60,   102,    78,    79,    -1,    27,
     225,    60,   102,    40,   227,    78,    79,    -1,    27,   225,
      60,   102,    40,   227,    40,   227,    78,    79,    -1,    27,
     225,    60,   102,    40,   227,    40,   227,    40,   230,    78,
      79,    -1,    26,   100,    79,    -1,    26,    52,   102,    79,
      -1,    79,    -1,   222,    -1,    -1,    19,    60,   116,    78,
     223,   210,    -1,    21,   110,    40,    -1,    21,   110,    10,
     110,    40,    -1,    22,    40,    -1,   100,    40,   145,    -1,
      -1,     7,    -1,    -1,   102,    -1,    -1,   228,    -1,   229,
      -1,   228,    83,   229,    -1,     9,    60,   102,    78,    -1,
     118,    -1,   230,    83,   118,    -1,    -1,   232,   233,    -1,
     235,    78,    -1,    -1,   236,    79,   234,   233,    -1,     1,
      78,    -1,    -1,    10,    -1,   236,    -1,   236,    83,    10,
      -1,   237,    -1,   236,    83,   237,    -1,   128,   125,   169,
     145,    -1,   128,   125,   170,   145,    -1,   128,   125,   189,
     145,    -1,   132,   125,   170,   145,    -1,   132,   125,   189,
     145,    -1,    -1,   239,   240,    -1,   233,    -1,   241,    78,
      -1,     3,    -1,   241,    83,     3,    -1,   100,    -1,   242,
      83,   100,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   234,   234,   238,   253,   253,   254,   254,   258,   259,
     260,   268,   273,   283,   288,   293,   295,   297,   298,   299,
     306,   311,   305,   318,   324,   329,   323,   336,   342,   347,
     341,   354,   362,   363,   366,   368,   370,   372,   374,   376,
     378,   382,   388,   389,   393,   395,   400,   401,   404,   407,
     411,   439,   445,   448,   451,   454,   456,   461,   465,   469,
     470,   474,   473,   505,   506,   508,   510,   512,   514,   516,
     518,   520,   522,   524,   526,   528,   531,   530,   537,   536,
     543,   546,   542,   552,   551,   561,   569,   581,   679,   680,
     682,   688,   691,   690,   727,   729,   739,   748,   750,   754,
     760,   762,   768,   769,   774,   776,   777,   788,   793,   794,
     795,   796,   804,   809,   814,   817,   826,   831,   832,   833,
     834,   842,   853,   857,   862,   867,   872,   877,   879,   881,
     891,   893,   898,   899,   901,   906,   911,   913,   919,   920,
     922,   935,   937,   939,   941,   946,   949,   951,   954,   968,
     970,   975,   976,   984,   985,   986,   990,   992,   998,   999,
    1000,  1004,  1005,  1009,  1010,  1015,  1016,  1024,  1023,  1031,
    1040,  1039,  1048,  1057,  1058,  1063,  1065,  1070,  1075,  1077,
    1083,  1084,  1086,  1088,  1090,  1098,  1099,  1100,  1101,  1107,
    1109,  1108,  1121,  1128,  1130,  1134,  1135,  1141,  1142,  1144,
    1143,  1146,  1151,  1150,  1154,  1156,  1160,  1161,  1165,  1170,
    1172,  1178,  1187,  1177,  1201,  1210,  1200,  1226,  1227,  1233,
    1235,  1240,  1242,  1244,  1251,  1253,  1262,  1267,  1272,  1274,
    1276,  1283,  1285,  1292,  1297,  1299,  1301,  1306,  1308,  1315,
    1317,  1321,  1323,  1328,  1330,  1335,  1337,  1343,  1342,  1348,
    1352,  1355,  1354,  1358,  1362,  1365,  1364,  1371,  1370,  1376,
    1380,  1382,  1385,  1387,  1393,  1395,  1401,  1402,  1404,  1419,
    1425,  1430,  1436,  1441,  1443,  1449,  1450,  1455,  1458,  1462,
    1473,  1474,  1479,  1485,  1487,  1492,  1494,  1500,  1501,  1505,
    1507,  1513,  1514,  1519,  1522,  1524,  1526,  1528,  1530,  1532,
    1534,  1536,  1540,  1549,  1557,  1558,  1560,  1564,  1566,  1569,
    1573,  1583,  1585,  1591,  1592,  1596,  1610,  1612,  1615,  1617,
    1619,  1627,  1635,  1647,  1651,  1655,  1670,  1669,  1682,  1686,
    1690,  1695,  1700,  1705,  1707,  1713,  1715,  1716,  1734,  1733,
    1741,  1753,  1756,  1766,  1755,  1776,  1784,  1789,  1801,  1804,
    1787,  1831,  1830,  1844,  1849,  1854,  1858,  1862,  1873,  1880,
    1887,  1894,  1905,  1911,  1915,  1921,  1920,  1976,  2007,  2038,
    2053,  2069,  2071,  2077,  2078,  2084,  2085,  2089,  2090,  2095,
    2100,  2102,  2109,  2109,  2119,  2121,  2120,  2130,  2137,  2138,
    2148,  2150,  2155,  2157,  2164,  2173,  2182,  2191,  2201,  2216,
    2216,  2226,  2227,  2237,  2239,  2245,  2247,  2252
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPENAME", "SCSPEC", 
  "TYPESPEC", "TYPE_QUAL", "CONSTANT", "STRING", "ELLIPSIS", "SIZEOF", 
  "ENUM", "STRUCT", "UNION", "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH", 
  "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN", "GOTO", "ASM_KEYWORD", 
  "TYPEOF", "ALIGNOF", "ATTRIBUTE", "EXTENSION", "LABEL", "REALPART", 
  "IMAGPART", "CHOOSE_EXPR", "TYPES_COMPATIBLE_P", "'='", "ASSIGN", "'?'", 
  "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "EQCOMPARE", 
  "ARITHCOMPARE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "MINUSMINUS", "PLUSPLUS", "UNARY", "HYPERUNARY", "'.'", "'('", "'['", 
  "POINTSAT", "INTERFACE", "IMPLEMENTATION", "END", "SELECTOR", "DEFS", 
  "ENCODE", "CLASSNAME", "PUBLIC", "PRIVATE", "PROTECTED", "PROTOCOL", 
  "OBJECTNAME", "CLASS", "ALIAS", "OBJC_STRING", "')'", "';'", "'}'", 
  "'~'", "'!'", "','", "'{'", "']'", "$accept", "program", "extdefs", 
  "@1", "@2", "extdef", "datadef", "fndef", "@3", "@4", "@5", "@6", "@7", 
  "@8", "identifier", "unop", "expr", "exprlist", "nonnull_exprlist", 
  "unary_expr", "sizeof", "alignof", "cast_expr", "@9", "expr_no_commas", 
  "@10", "@11", "@12", "@13", "@14", "primary", "@15", "string", 
  "old_style_parm_decls", "lineno_datadecl", "datadecls", "datadecl", 
  "lineno_decl", "decls", "setspecs", "setattrs", "decl", 
  "typed_declspecs", "reserved_declspecs", 
  "typed_declspecs_no_prefix_attr", "reserved_declspecs_no_prefix_attr", 
  "declmods", "declmods_no_prefix_attr", "typed_typespecs", 
  "reserved_typespecquals", "typespec", "typespecqual_reserved", 
  "initdecls", "notype_initdecls", "maybeasm", "initdcl", "@16", 
  "notype_initdcl", "@17", "maybe_attribute", "attributes", "attribute", 
  "attribute_list", "attrib", "any_word", "init", "@18", 
  "initlist_maybe_comma", "initlist1", "initelt", "@19", "initval", "@20", 
  "designator_list", "designator", "nested_function", "@21", "@22", 
  "notype_nested_function", "@23", "@24", "declarator", 
  "after_type_declarator", "parm_declarator", "notype_declarator", 
  "struct_head", "union_head", "enum_head", "structsp", "@25", "@26", 
  "@27", "@28", "maybecomma", "maybecomma_warn", "component_decl_list", 
  "component_decl_list2", "component_decl", "components", 
  "component_declarator", "enumlist", "enumerator", "typename", "absdcl", 
  "nonempty_type_quals", "type_quals", "absdcl1", "stmts", 
  "lineno_stmt_or_labels", "xstmts", "errstmt", "pushlevel", 
  "maybe_label_decls", "label_decls", "label_decl", "compstmt_or_error", 
  "compstmt_start", "compstmt", "simple_if", "if_prefix", "do_stmt_start", 
  "@29", "save_filename", "save_lineno", "lineno_labeled_stmt", 
  "lineno_stmt_or_label", "stmt_or_label", "stmt", "@30", "@31", "@32", 
  "@33", "@34", "@35", "@36", "all_iter_stmt", "all_iter_stmt_simple", 
  "@37", "label", "maybe_type_qual", "xexpr", "asm_operands", 
  "nonnull_asm_operands", "asm_operand", "asm_clobbers", "parmlist", 
  "@38", "parmlist_1", "@39", "parmlist_2", "parms", "parm", 
  "parmlist_or_identifiers", "@40", "parmlist_or_identifiers_1", 
  "identifiers", "identifiers_or_typenames", "extension", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    61,   292,    63,
      58,   293,   294,   124,    94,    38,   295,   296,   297,   298,
      43,    45,    42,    47,    37,   299,   300,   301,   302,    46,
      40,    91,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    41,    59,
     125,   126,    33,    44,   123,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    86,    87,    87,    89,    88,    90,    88,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      94,    95,    93,    93,    96,    97,    93,    93,    98,    99,
      93,    93,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   107,   108,
     108,   109,   108,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   110,   112,   110,
     113,   114,   110,   115,   110,   110,   110,   116,   116,   116,
     116,   116,   117,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   118,   118,   119,   119,   119,   120,   121,   121,
     121,   121,   122,   122,   122,   122,   123,   124,   124,   124,
     124,   125,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   132,   132,   133,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   142,   141,   141,
     144,   143,   143,   145,   145,   146,   146,   147,   148,   148,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   151,
     152,   151,   151,   153,   153,   154,   154,   155,   155,   156,
     155,   155,   158,   157,   157,   157,   159,   159,   160,   160,
     160,   162,   163,   161,   165,   166,   164,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   169,   169,   169,   169,
     169,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   171,   171,   172,   172,   173,   173,   175,   174,   174,
     174,   176,   174,   174,   174,   177,   174,   178,   174,   174,
     179,   179,   180,   180,   181,   181,   182,   182,   182,   183,
     183,   183,   183,   183,   183,   184,   184,   185,   185,   185,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   194,   194,   194,   195,   195,   196,
     197,   198,   198,   199,   199,   200,   201,   201,   202,   203,
     203,   203,   203,   204,   204,   205,   207,   206,   208,   209,
     210,   210,   211,   212,   212,   213,   213,   213,   214,   213,
     213,   213,   215,   216,   213,   213,   213,   217,   218,   219,
     213,   220,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   221,   223,   222,   224,   224,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   229,
     230,   230,   232,   231,   233,   234,   233,   233,   235,   235,
     235,   235,   236,   236,   237,   237,   237,   237,   237,   239,
     238,   240,   240,   241,   241,   242,   242,   243
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     0,     2,     0,     3,     1,     1,
       5,     2,     3,     4,     4,     2,     2,     2,     2,     1,
       0,     0,     7,     4,     0,     0,     7,     4,     0,     0,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     3,     1,     2,     2,     2,
       2,     2,     4,     2,     4,     2,     2,     1,     1,     1,
       4,     0,     7,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     0,     7,     0,     5,     3,     3,     1,     1,     1,
       3,     3,     0,     4,     4,     8,     6,     4,     3,     3,
       2,     2,     1,     2,     0,     1,     2,     3,     1,     1,
       2,     2,     4,     4,     2,     2,     3,     1,     1,     2,
       2,     0,     0,     4,     4,     3,     3,     2,     2,     2,
       2,     3,     0,     2,     2,     2,     2,     3,     0,     2,
       2,     1,     1,     2,     2,     1,     1,     2,     2,     2,
       3,     0,     2,     1,     1,     1,     4,     4,     1,     1,
       1,     1,     3,     1,     3,     0,     4,     0,     6,     3,
       0,     6,     3,     0,     1,     1,     2,     6,     1,     3,
       0,     1,     4,     6,     4,     1,     1,     1,     1,     1,
       0,     4,     1,     0,     2,     1,     3,     3,     2,     0,
       4,     1,     0,     4,     1,     1,     1,     2,     2,     5,
       3,     0,     0,     5,     0,     0,     5,     1,     1,     3,
       3,     4,     3,     3,     3,     1,     3,     4,     4,     3,
       3,     3,     1,     3,     3,     3,     4,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     2,     0,     7,     5,
       2,     0,     7,     5,     2,     0,     8,     0,     7,     2,
       0,     1,     0,     1,     1,     2,     0,     3,     2,     3,
       1,     3,     1,     1,     2,     1,     3,     4,     6,     5,
       1,     3,     1,     1,     3,     2,     2,     0,     1,     1,
       2,     0,     2,     3,     3,     2,     3,     4,     3,     2,
       3,     2,     3,     1,     1,     2,     2,     0,     1,     2,
       0,     0,     1,     1,     2,     3,     1,     2,     1,     2,
       6,     5,     5,     2,     2,     4,     0,     4,     0,     0,
       3,     4,     3,     1,     1,     1,     1,     2,     0,     4,
       1,     3,     0,     0,     7,     5,     2,     0,     0,     0,
      12,     0,     6,     2,     2,     2,     3,     6,     8,    10,
      12,     3,     4,     1,     1,     0,     6,     3,     5,     2,
       3,     0,     1,     0,     1,     0,     1,     1,     3,     4,
       1,     3,     0,     2,     2,     0,     4,     2,     0,     1,
       1,     3,     1,     3,     4,     4,     4,     4,     4,     0,
       2,     1,     2,     1,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   155,   146,   153,
     145,   245,   241,   243,     0,     0,     0,   407,    19,     5,
       9,     8,     0,   121,   121,   141,   132,   142,   175,     0,
       0,     0,   154,     0,     7,    17,    18,   246,   242,   244,
       0,     0,     0,   240,   291,     0,     0,   163,   122,     0,
      16,     0,    15,     0,   143,   132,   144,   148,   147,   130,
     176,    32,    33,   266,   250,   266,   254,   257,   259,    11,
      87,    88,   102,    57,    58,     0,     0,     0,     0,     0,
      34,    36,    35,     0,    38,    37,     0,    39,    40,     0,
       0,    41,    59,     0,     0,    63,    44,    46,    89,     0,
     289,     0,   287,   151,     0,   287,   180,     0,     0,    12,
       0,     0,    31,     0,   399,     0,     0,   173,   225,   291,
       0,     0,   161,   122,     0,   217,   218,     0,     0,   131,
     134,   158,   159,   133,   135,   160,     0,     0,   247,     0,
     251,     0,   255,    55,    56,     0,     0,    50,    47,     0,
       0,     0,     0,    49,     0,     0,     0,    51,     0,    53,
       0,     0,    80,    78,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   100,     0,
      42,     0,     0,   103,    48,   156,   291,   382,     0,   122,
     285,   288,   149,   157,   290,   151,   286,   186,   187,   188,
     185,     0,   178,   181,   292,   235,   234,   164,   165,   239,
       0,   233,     0,     0,   238,     0,     0,    29,     0,   328,
     109,   329,   172,   174,     0,     0,    14,     0,     0,    23,
       0,   173,   399,     0,    13,    27,     0,   173,   273,   268,
     121,   265,   121,     0,   266,   173,   266,   282,   283,   262,
     280,     0,     0,     0,    91,    90,   318,   310,     0,     0,
      10,    45,     0,     0,    85,    86,     0,     0,     0,     0,
      74,    75,    73,    72,    71,    70,    69,    64,    65,    66,
      67,    68,    98,     0,    43,     0,    99,   295,     0,   299,
       0,   301,     0,     0,   382,     0,   152,   150,     0,   180,
      42,     0,     0,   403,   389,   121,   121,   401,     0,   390,
     392,   400,     0,   236,   237,   309,     0,   111,   106,   110,
       0,   170,   223,   219,   162,   224,    21,   169,   220,   222,
       0,    25,   249,   328,   267,   328,   274,     0,   253,     0,
       0,   263,     0,   262,     0,     0,   319,   311,    93,    61,
      60,    52,    54,     0,     0,    79,    77,    94,    97,   294,
     293,   383,   300,   302,   296,   298,     0,   177,   179,    87,
       0,   166,   387,   287,   287,   384,   385,     0,   402,     0,
       0,    30,   316,   107,   121,   121,   138,     0,     0,   167,
     221,     0,   269,   275,   329,   271,   173,   173,   284,   281,
     173,     0,     0,     0,     0,     0,   312,   313,     0,    81,
      84,   297,   182,     0,   184,   232,   291,   382,   122,   173,
     173,   173,   291,   122,   173,   173,     0,   391,   393,   404,
     317,   114,     0,   115,     0,   138,   136,   192,   190,   189,
     171,    22,     0,    26,   328,     0,   248,   252,   258,   173,
       0,    96,   405,     0,     0,     0,   328,     0,     0,   118,
     329,   304,   314,   205,    87,     0,     0,   202,     0,   204,
       0,   260,   195,   201,     0,     0,     0,     0,   295,     0,
     399,     0,   394,   395,   396,   295,     0,   397,   398,   386,
       0,     0,   165,   137,   140,   139,     0,   168,   276,     0,
     173,   256,     0,   315,     0,   321,   120,   119,   308,     0,
     322,   306,   329,   305,     0,   208,     0,     0,   199,    62,
       0,   194,     0,   207,   198,    82,   183,   230,   231,   226,
       0,   229,     0,   112,   113,     0,   173,     0,   277,    95,
     406,   320,     0,   155,     0,   342,   326,     0,     0,     0,
       0,     0,     0,     0,     0,   371,   363,     0,     0,   116,
     121,   121,   335,   340,     0,     0,   332,   333,   336,   364,
     334,     0,     0,   210,     0,     0,   196,   197,   227,   228,
     191,   279,   173,     0,     0,   328,   373,     0,     0,   369,
     353,   354,   355,     0,     0,     0,   372,     0,   173,   337,
     127,     0,   128,     0,     0,   324,   329,   323,   346,     0,
     129,     0,   203,   200,   278,     0,     0,     0,   374,    46,
       0,     0,     0,   367,   356,     0,   361,     0,   370,     0,
     125,   211,     0,   126,   214,   341,   328,     0,     0,   209,
     325,     0,   327,   365,   347,   351,     0,   362,     0,   123,
       0,   124,     0,   339,   330,   328,     0,   343,   328,   373,
     328,   368,   375,     0,   212,   215,   331,   345,   328,   366,
       0,   352,     0,     0,   376,   377,   357,     0,     0,   344,
     348,     0,   375,     0,     0,   213,   216,   373,     0,     0,
     358,   378,     0,   379,     0,     0,   349,   380,     0,   359,
     328,     0,     0,   350,   360,   381
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     3,     5,    19,    20,    21,   230,   388,
     236,   391,   116,   316,   468,    89,   150,   283,    91,    92,
      93,    94,    95,   408,    96,   269,   268,   266,   476,   267,
      97,   151,    98,   217,   218,   219,   383,   455,   456,    22,
     111,   559,   305,    59,   384,   436,   306,    25,   102,   192,
      26,   133,   121,    46,   117,   122,   442,    47,   387,   222,
     223,    28,   201,   202,   203,   440,   496,   470,   471,   472,
     575,   473,   517,   474,   475,   630,   650,   677,   633,   652,
     678,   208,   125,   419,   126,    29,    30,    31,    32,   244,
     246,   251,   141,   521,   342,   136,   137,   241,   392,   393,
     249,   250,   104,   190,   105,   107,   191,   457,   458,   509,
     220,   347,   405,   406,   407,   381,   257,   382,   563,   564,
     565,   585,   606,   320,   607,   461,   566,   567,   636,   584,
     668,   659,   687,   700,   660,   568,   569,   658,   570,   597,
     620,   673,   674,   675,   698,   289,   290,   307,   426,   308,
     309,   310,   211,   212,   311,   312,   453,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -587
static const short yypact[] =
{
      51,    77,   102,  2362,  -587,  2362,   312,  -587,  -587,  -587,
    -587,    35,    35,    35,    86,    98,   132,  -587,  -587,  -587,
    -587,  -587,   115,    47,   452,   430,  -587,    35,  -587,    78,
      82,    89,  -587,  2362,  -587,  -587,  -587,    35,    35,    35,
    2180,  2091,   135,  -587,  -587,   115,    50,  -587,    35,   897,
    -587,   200,  -587,   115,   430,  -587,    35,  -587,  -587,   586,
    -587,  -587,  -587,  -587,   114,  -587,   124,  -587,   131,  -587,
    -587,  -587,  -587,  -587,  -587,  2180,  2180,   158,   161,   364,
    -587,  -587,  -587,  2180,  -587,  -587,  1132,  -587,  -587,  2180,
     149,   159,  -587,  2215,  2269,  -587,  2471,   489,   244,  2180,
    -587,   242,   228,  -587,   251,   931,   767,   476,   139,  -587,
     200,   115,  -587,   281,  -587,  1499,   419,    35,  -587,  -587,
     200,    61,  -587,    35,  1492,   348,   433,   126,  1464,   586,
    -587,  -587,  -587,  -587,    35,  -587,   295,   959,  -587,   298,
    -587,   469,  -587,  -587,  -587,  2180,   561,  -587,  -587,   338,
     341,   350,   361,  -587,   366,  2180,  1132,  -587,  1132,  -587,
    2180,  2180,   403,  -587,  -587,  2180,  2180,  2180,  2180,  2180,
    2180,  2180,  2180,  2180,  2180,  2180,  2180,  -587,  -587,   364,
    2180,  2180,   364,  -587,  -587,  -587,  -587,   228,  1554,    35,
    -587,   438,   710,  -587,  -587,  -587,  -587,  -587,  -587,  -587,
    -587,   123,  -587,   390,  -587,   433,  -587,  -587,   425,   433,
     454,  -587,  1656,  1592,  -587,   382,   375,  -587,   400,    66,
    -587,  -587,   434,    35,   216,   172,  -587,   200,   200,  -587,
     419,    35,  -587,  1647,  -587,  -587,   419,    35,  -587,  -587,
     439,   399,   630,  1749,  -587,    35,  -587,  -587,   444,   407,
    -587,   469,  2382,   417,  -587,  -587,  -587,   424,   436,  1978,
    -587,  2471,   448,   459,  2471,  2471,  2180,   468,  2180,  2180,
    1158,  2061,  2492,  1432,   555,   824,   824,   213,   213,  -587,
    -587,  -587,  -587,   461,   159,   427,  -587,   369,   252,  -587,
     280,  -587,   431,   228,  -587,  1685,  -587,   710,   464,   767,
    2304,    49,   475,  -587,  -587,  -587,  1925,  -587,   477,   180,
    -587,  -587,   173,  -587,  -587,  -587,    65,  -587,  -587,  -587,
     707,  -587,   348,  -587,  -587,   348,  -587,   486,  -587,  -587,
     479,  -587,  -587,  -587,  -587,  -587,  -587,   455,  -587,   492,
    2180,   364,   505,   407,  2180,   561,  -587,   528,  -587,  -587,
    -587,  -587,  -587,   530,  2180,  2150,  2483,  -587,  -587,   438,
    -587,  -587,  -587,   438,  -587,  -587,   511,  -587,  -587,   196,
     523,  -587,  -587,   292,   184,  -587,  -587,  1895,  -587,   611,
     350,  -587,  -587,  -587,   536,   367,  -587,  1350,    65,  -587,
    -587,    65,   537,  -587,  -587,   537,    35,    35,  2471,  -587,
      35,   541,  2406,   557,   364,   733,   528,  -587,  1190,  -587,
    2240,  -587,  -587,  2180,  -587,  -587,  -587,   184,    35,   274,
     288,    35,  -587,    35,   288,    35,   280,  -587,  -587,  -587,
    -587,  -587,   200,  -587,   115,  -587,   682,  -587,  -587,  2471,
    -587,  -587,  1350,  -587,  -587,   445,  -587,  -587,  -587,    35,
    2180,  -587,  -587,   248,   450,   648,   558,   559,   837,  -587,
    -587,  -587,  -587,  -587,   600,   364,  2180,  -587,   605,  2471,
     566,   565,  -587,  -587,   265,  1312,  2180,   264,   209,   292,
    -587,  1740,  -587,  -587,  -587,   302,   184,  -587,  -587,  -587,
     272,   287,   129,   682,  -587,  -587,  1190,  -587,  -587,  2180,
      44,  -587,  1012,  -587,   364,  -587,  -587,  -587,  -587,   570,
    -587,  -587,  -587,  -587,  1861,  -587,   782,  1190,  -587,  -587,
    1251,  -587,  1406,  -587,  -587,  2240,  -587,   519,   519,  -587,
    1778,  -587,   579,  -587,  -587,   606,  1802,  2180,  -587,  -587,
    -587,  -587,  1943,   640,   625,  -587,  -587,   631,   632,  2180,
     657,   622,   623,  2126,    85,   698,  -587,   666,   628,  -587,
     636,  1416,  -587,   702,   992,    59,  -587,  -587,  -587,  -587,
    -587,  2036,  2180,  -587,   651,  1406,  -587,  -587,  -587,  -587,
    -587,  -587,  1802,  2180,   673,  -587,  2180,  2180,  2429,  -587,
    -587,  -587,  -587,   664,  2180,   670,  -587,   705,    35,  -587,
    -587,   200,  -587,   115,  1074,  -587,  -587,  -587,  -587,  2180,
    -587,  2357,  -587,  -587,  -587,   699,  2180,   759,  -587,   744,
     700,   703,  2180,  -587,  -587,   701,  -587,  2180,  -587,   332,
    -587,   101,   339,  -587,   480,  -587,  -587,  1943,   704,  -587,
    -587,   708,  -587,  -587,  -587,  -587,  2453,  -587,    31,  -587,
     419,  -587,   419,  -587,  -587,  -587,   711,  -587,  -587,  2180,
    -587,  -587,   778,   712,  -587,  -587,  -587,  -587,  -587,  -587,
     715,  -587,   735,    57,   713,  -587,  -587,   350,   350,  -587,
    -587,  2180,   778,   719,   778,  -587,  -587,  2180,   724,    58,
    -587,  -587,   729,  -587,   454,   730,  -587,   244,   315,  -587,
    -587,   731,   454,  -587,  -587,   244
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -587,  -587,  -587,  -587,  -587,    67,  -587,  -587,  -587,  -587,
    -587,  -587,  -587,  -587,   -27,  -587,   -40,   508,  -131,   490,
    -587,  -587,   -19,  -587,   457,  -587,  -587,  -587,  -587,  -587,
     227,  -587,  -193,  -199,   597,  -587,  -587,   362,  -587,     1,
     -90,   266,     7,   784,  -587,   408,    11,    -5,   -89,   647,
       5,  -174,  -391,   -46,   -97,   -57,  -587,  -587,  -587,   -60,
      10,    68,  -587,   548,  -587,   409,  -587,  -413,  -587,   329,
    -587,  -397,  -587,  -587,   376,  -587,  -587,  -587,  -587,  -587,
    -587,   -43,   -52,   116,   -17,  -587,  -587,  -587,   -33,  -587,
    -587,  -587,  -587,  -587,   510,   -15,  -587,   626,   545,   437,
     633,   542,   -24,   -75,   -78,   -99,  -140,   429,  -587,  -587,
    -180,  -587,  -587,  -587,   484,  -209,  -587,  -145,  -587,  -587,
    -587,  -587,   -62,  -352,  -472,   428,  -587,   254,  -587,  -587,
    -587,  -587,  -587,  -587,  -587,  -587,  -587,  -587,   257,  -587,
    -586,   214,  -587,   211,  -587,   612,  -587,  -245,  -587,  -587,
    -587,   531,  -197,  -587,  -587,  -587,  -587,     6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -389
static const short yytable[] =
{
      90,   101,    64,    66,    68,    49,   258,   127,   124,    33,
      23,    33,    23,    27,    24,    27,    24,   301,   296,    54,
     224,    37,    38,    39,    51,    53,   135,   231,   108,    55,
     196,   326,    48,   228,    56,   328,   128,   331,   317,    33,
      23,   490,   445,    27,    24,   361,   103,   288,   240,   284,
     139,    -2,   147,   207,   221,    48,   143,   144,   183,   242,
     608,   123,   152,    48,   148,    16,   380,  -105,   225,   134,
     153,   662,    34,   670,    16,   215,   318,     4,   524,   200,
     184,    61,    62,   535,   537,    61,    62,   287,    61,    62,
     205,   103,    61,    62,   209,    60,   135,   682,   694,   293,
      69,   692,    -3,   108,   574,    60,    60,    60,   514,   663,
     195,   231,   189,   617,   248,   189,    60,    48,    43,   609,
     123,    48,   253,   296,    60,   577,    50,   371,   113,   109,
     123,  -165,   262,   110,   263,   683,   695,   594,  -165,   134,
     226,   285,   103,   243,   227,    16,    40,   359,   292,   256,
    -105,   103,   282,   363,   240,   286,   113,   221,    41,   135,
     542,   103,    63,   103,   653,   242,    65,    44,   221,   284,
     324,   327,   322,    67,   221,    45,   325,   332,   613,   441,
    -165,   489,   443,   666,  -165,   338,   669,    43,   671,   114,
     115,    60,    42,   330,   148,   106,   679,   189,   138,   114,
     115,   298,    60,    43,   118,   234,   299,   205,   140,   110,
     629,   209,    43,   415,    16,   142,   204,   206,   145,    43,
     118,   146,    27,   204,   248,   459,   353,   154,   703,   337,
      16,   339,   232,   233,   123,   430,   422,   123,   123,    16,
     350,   333,   155,   335,   417,   188,    16,   195,   103,   243,
     323,   378,   119,   183,   637,   366,   379,    60,    16,   376,
     120,   416,   495,   377,   135,   174,   175,   176,   119,   417,
     188,   394,   200,   394,   412,   506,   120,   288,   511,   413,
     186,   302,   477,   529,     7,     8,     9,    10,   187,   188,
     304,    60,    11,    12,    13,    43,   415,   189,   421,   425,
      27,    54,   522,   189,    16,    43,   373,   374,    15,   204,
      16,    55,   294,   295,   248,   385,    56,   478,    16,   495,
     185,   403,    16,   485,   465,   386,   466,   503,   479,   193,
     360,   504,    16,   486,   480,   481,   446,   447,   359,   363,
     448,   210,   526,   460,   416,   359,   363,   155,   114,   115,
     103,   533,   417,   188,   422,   227,   420,   424,  -388,   482,
     483,   484,   417,   188,   487,   488,   534,    61,    62,   562,
     110,     7,    57,     9,    58,   237,   204,   452,   245,    11,
      12,    13,   394,   418,   423,   432,   434,    27,   491,   501,
     435,    35,    36,   701,   460,    15,   512,   562,   702,    16,
     108,   216,   500,   135,  -108,  -108,  -108,  -108,   232,   233,
    -108,   649,  -108,  -108,  -108,   227,   254,   492,   651,   255,
     216,   186,   110,  -328,  -328,  -328,  -328,   423,  -108,   187,
     188,  -328,  -328,  -328,   256,    57,    27,    58,   515,   259,
     538,   532,   123,   -83,    48,   260,   433,  -328,    43,   118,
     300,   664,   113,   665,   315,   123,     7,     8,     9,    10,
     135,   205,   209,    72,    11,    12,    13,   314,   205,   209,
     247,   321,    61,    62,   558,    16,   581,   540,   334,    43,
      15,   340,    16,   204,  -108,   499,    60,   557,   418,   418,
     341,    60,   562,   114,   115,   423,   423,   119,   294,   295,
     345,   697,   558,  -104,   346,   120,    16,   113,   354,   705,
    -165,   148,   358,   593,   348,   557,   362,  -165,  -270,  -270,
     571,   560,   614,   389,    27,   561,   351,   595,    44,   315,
     505,    52,   685,   686,   231,   396,    45,   352,   628,   357,
     114,   115,   367,   615,   177,   178,   618,   621,   179,   180,
     181,   182,   184,   372,   625,   375,    54,   632,   631,  -165,
     404,   601,   603,  -165,   390,     7,    55,     9,   100,   638,
     409,    56,   397,    11,    12,    13,   641,   571,   560,   480,
     481,    27,   561,   157,   159,   400,   634,   648,   221,    15,
     221,   130,   131,   132,   527,   528,   411,   558,    11,    12,
      13,   414,   252,   170,   171,   172,   173,   174,   175,   176,
     557,   123,   261,    48,   429,   431,    16,   264,   265,   618,
     444,   449,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,   451,     9,   194,  -307,   510,
     -32,   688,    11,    12,    13,   518,   519,   618,   520,   216,
     541,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    15,  -117,
    -117,  -117,  -117,  -117,   579,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
     -33,  -117,  -117,  -117,  -117,   583,   580,   494,   131,   132,
    -117,   586,   587,  -117,    11,    12,    13,   589,  -117,  -117,
    -117,   590,   591,  -117,  -117,   596,   598,   599,  -117,  -272,
    -272,     7,     8,     9,    10,   600,   131,   132,   604,    11,
      12,    13,    11,    12,    13,   355,   356,  -117,  -117,  -117,
    -117,   612,  -117,   616,   454,    15,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,   624,  -328,  -328,  -328,  -328,  -328,   626,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   627,  -328,  -328,  -328,  -328,
      61,    62,   197,   198,   199,  -328,   642,   640,  -328,   644,
     647,   645,   656,  -328,  -328,  -328,   657,   672,  -328,  -328,
     667,   676,   572,  -328,   680,   681,   684,   398,   690,   177,
     178,   402,   693,   179,   180,   181,   182,   696,   370,   699,
     704,   410,  -328,   619,  -328,  -328,   319,  -328,   507,   160,
     161,   162,   643,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   610,   216,   129,
    -328,  -328,   297,   493,   439,  -328,  -328,   368,  -328,   576,
     523,   497,  -328,   401,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   469,  -328,   573,  -328,   336,
    -328,  -328,  -328,  -328,   172,   173,   174,   175,   176,  -328,
     395,   498,  -328,   399,   343,   508,   513,  -328,  -328,  -328,
     462,   654,  -328,  -328,   655,   691,   689,  -328,   112,   439,
       0,   -28,   -28,   -28,   -28,     0,   364,   502,   428,   -28,
     -28,   -28,     0,     0,     0,     0,  -328,  -303,  -328,  -328,
       0,  -328,     0,   516,   113,   -28,     0,  -165,     0,     0,
       0,     0,   469,   525,  -165,     7,     0,     9,   194,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,   536,   114,   115,    15,
     238,    16,     0,     7,     0,     9,   100,     0,     0,     0,
       0,    11,    12,    13,   469,     0,  -165,   469,     0,   469,
    -165,   -28,     0,   186,     0,     0,     0,    15,     0,     0,
      17,   187,   188,   605,   582,  -328,  -328,     0,     0,     0,
    -328,  -328,     0,  -328,     0,     0,   588,  -328,     0,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
       0,  -328,     0,  -328,     0,  -328,  -328,  -328,  -328,   611,
       0,     0,   469,     0,  -328,     0,     0,  -328,   239,  -264,
       0,     0,  -328,  -328,  -328,     0,     0,  -328,  -328,   160,
     161,   162,  -328,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,     0,
       0,  -328,     0,  -328,  -328,   635,  -328,  -338,  -338,   646,
       0,     0,  -338,  -338,     0,  -338,     0,     0,     0,  -338,
     539,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,     0,  -338,     0,  -338,     0,  -338,  -338,  -338,
    -338,     0,     0,     0,     0,     0,  -338,     0,     0,  -338,
       0,     0,     0,     0,  -338,  -338,  -338,     0,     0,  -338,
    -338,     0,     0,   149,  -338,    70,     7,     0,     9,   100,
      71,    72,     0,    73,    11,    12,    13,     0,     0,     0,
       0,     0,     0,  -338,     0,  -338,  -338,     0,  -338,     0,
      15,    74,     0,    17,     0,    75,    76,    77,    78,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
       0,     0,    81,    82,    83,     0,     0,    84,    85,     0,
       0,   463,    86,   464,    62,     0,     0,     0,    71,    72,
       0,    73,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    87,    88,     0,   -92,     0,     0,    74,
       0,    17,     0,    75,    76,    77,    78,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,     0,     0,
      81,    82,    83,     0,     0,    84,    85,     0,     0,   465,
      86,   466,   463,     0,   464,    62,     0,     0,     0,    71,
      72,     0,    73,     0,     0,     0,     0,     0,     0,     0,
    -193,    87,    88,     0,   467,     0,     0,     0,     0,     0,
      74,     0,    17,     0,    75,    76,    77,    78,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,     0,
       0,    81,    82,    83,     0,     0,    84,    85,     0,     0,
     465,    86,   466,   463,     0,    70,     0,     0,     0,     0,
      71,    72,     0,    73,     0,     0,     0,     0,     0,     0,
       0,  -261,    87,    88,     0,   467,     0,     0,     0,     0,
       0,    74,     0,    17,     0,    75,    76,    77,    78,  -206,
       0,   437,     0,    70,    79,     0,     0,    80,    71,    72,
       0,    73,    81,    82,    83,     0,     0,    84,    85,     0,
       0,  -206,    86,  -206,     0,     0,     0,     0,     0,    74,
       0,    17,     0,    75,    76,    77,    78,     0,     0,     0,
       0,     0,    79,    87,    88,    80,   467,     0,     0,     0,
      81,    82,    83,     0,     0,    84,    85,   463,     0,    70,
      86,     0,     0,     0,    71,    72,     0,    73,     0,     0,
       7,     8,     9,    10,     0,     0,     0,     0,    11,    12,
      13,    87,    88,     0,   438,    74,     0,    17,     0,    75,
      76,    77,    78,     0,    15,     0,    16,     0,    79,     0,
       0,    80,     0,     0,     0,     0,    81,    82,    83,     0,
       0,    84,    85,     0,     0,   235,    86,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,   -24,   169,
     170,   171,   172,   173,   174,   175,   176,    87,    88,     0,
     467,   113,   -24,   229,  -165,   602,   -20,   -20,   -20,   -20,
       0,  -165,    70,     0,   -20,   -20,   -20,    71,    72,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     -20,     0,  -165,     0,   114,   115,     0,     0,    74,  -165,
      17,     0,    75,    76,    77,    78,     0,     0,     0,     0,
       0,    79,     0,  -165,    80,     0,     0,  -165,   -24,    81,
      82,   213,     0,     0,    84,    85,     0,    70,     0,    86,
       0,     0,    71,    72,     0,    73,     0,     0,     0,     0,
       0,  -165,     0,     0,     0,  -165,   -20,     0,     0,     0,
      87,    88,     0,    74,   214,    17,     0,    75,    76,    77,
      78,     0,     0,     0,     0,    70,    79,     0,     0,    80,
      71,    72,     0,    73,    81,    82,    83,     0,     0,    84,
      85,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,    74,     0,    17,     0,    75,    76,    77,    78,     0,
       0,     0,     0,     0,    79,    87,    88,    80,     0,   291,
       0,     0,    81,    82,    83,     0,     0,    84,    85,     0,
      70,     0,    86,     0,     0,    71,    72,   302,    73,   303,
       7,     8,     9,    10,     0,     0,   304,     0,    11,    12,
      13,     0,     0,    87,    88,     0,    74,   313,    17,     0,
      75,    76,    77,    78,    15,     0,    16,     0,    70,    79,
       0,     0,    80,    71,    72,     0,    73,    81,    82,    83,
       0,     0,    84,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,    74,     0,    17,     0,    75,    76,
      77,    78,     0,     0,     0,     0,     0,    79,    87,    88,
      80,     0,   329,     0,  -388,    81,    82,    83,     0,     0,
      84,    85,     0,    70,     0,    86,     0,     0,    71,    72,
     238,    73,     0,     7,     0,     9,   100,     0,     0,     0,
       0,    11,    12,    13,     0,     0,    87,    88,     0,    74,
     365,    17,     0,    75,    76,    77,    78,    15,     0,     0,
      17,    70,    79,     0,     0,    80,    71,    72,     0,    73,
      81,    82,   530,     0,     0,    84,    85,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    74,     0,    17,
       0,    75,    76,    77,    78,     0,     0,     0,     0,     0,
      79,    87,    88,    80,     0,   531,     0,     0,    81,    82,
      83,     0,    16,    84,    85,     0,     0,     0,    86,   160,
     161,   162,     0,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,    87,
      88,     0,     0,   578,   464,   543,     8,     9,    10,    71,
      72,     0,    73,    11,    12,    13,   544,     0,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,    15,
      74,    16,    17,     0,    75,    76,    77,    78,     0,     7,
       8,     9,    10,    79,     0,   427,    80,    11,    12,    13,
       0,    81,    82,    83,     0,     0,    84,    85,     0,     0,
       0,    86,     0,    15,     0,    16,     0,     0,     0,     7,
       8,     9,    10,     0,     0,     0,     0,    11,    12,    13,
     556,     0,    87,    88,     0,   256,   464,    62,     0,     0,
       0,    71,    72,    15,    73,    16,     0,     0,   544,     0,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,    74,     0,    17,     0,    75,    76,    77,    78,
       0,    70,     0,     0,     0,    79,    71,    72,    80,    73,
       0,     0,     0,    81,    82,    83,     0,     0,    84,    85,
       0,     0,     0,    86,     0,     0,     0,    74,     0,    17,
       0,    75,    76,    77,    78,     0,     0,     0,     0,     0,
      79,     0,   556,    80,    87,    88,     0,   256,    81,    82,
      83,     0,     0,    84,    85,     0,     0,     0,    86,    70,
       7,     8,     9,    10,    71,    72,     0,    73,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,   349,     0,    15,    74,    16,    17,     0,    75,
      76,    77,    78,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,     0,     0,    81,    82,    83,     0,
       0,    84,    85,     0,    70,     7,    86,     9,   100,    71,
      72,     0,    73,    11,    12,    13,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     0,    87,    88,    15,
      74,     0,    17,     0,    75,    76,    77,    78,     0,    70,
       0,     0,     0,    79,    71,    72,    80,    73,     0,     0,
       0,    81,    82,    83,     0,     0,    84,    85,     0,     0,
       0,    86,     0,     0,     0,    74,     0,    17,     0,    75,
      76,    77,    78,     0,     0,     0,     0,     0,    79,     0,
       0,    80,    87,    88,     0,     0,    81,    82,    83,     0,
       0,    84,    85,    70,     0,     0,    86,     0,    71,    72,
       0,    73,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   592,     0,    87,    88,    74,
       0,    17,     0,    75,    76,    77,    78,     0,    70,     0,
       0,     0,    79,    71,    72,    80,    73,     0,     0,     0,
      81,    82,    83,     0,     0,    84,    85,     0,     0,     0,
      86,     0,     0,     0,    74,     0,    17,     0,    75,    76,
      77,    78,     0,     0,     0,     0,     0,    79,     0,     0,
      80,    87,    88,     0,     0,    81,    82,    83,     0,     0,
      84,    85,    70,     0,     0,   156,     0,    71,    72,   162,
      73,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     0,    87,    88,    74,     0,
      17,     0,    75,    76,    77,    78,     0,   369,     0,     0,
       0,    79,    71,    72,    80,    73,     0,     0,     0,    81,
      82,    83,     0,     0,    84,    85,     0,     0,     0,   158,
       0,     0,     0,    74,     0,    17,     0,    75,    76,    77,
      78,     0,     0,     0,     0,     0,    79,     0,     0,    80,
      87,    88,     0,     0,    81,    82,    83,     0,     0,    84,
      85,     0,     0,     6,    86,  -121,     7,     8,     9,    10,
       0,     0,     0,     0,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,     0,     0,    14,
      15,     0,    16,    17,   160,   161,   162,     0,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,     0,  -121,     0,     0,     0,     0,   160,
     161,   162,  -121,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,   622,
       0,    18,   639,   160,   161,   162,     0,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,     0,     0,     0,   344,   160,   161,   162,   623,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,     0,     0,     0,     0,     0,   450,
     160,   161,   162,   661,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   160,   161,
     162,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   168,   169,
     170,   171,   172,   173,   174,   175,   176
};

static const short yycheck[] =
{
      40,    41,    29,    30,    31,    22,   151,    53,    51,     3,
       3,     5,     5,     3,     3,     5,     5,   210,   192,    24,
     119,    11,    12,    13,    23,    24,    59,   124,    45,    24,
     105,   230,    22,   123,    24,   232,    53,   236,   218,    33,
      33,   432,   394,    33,    33,   290,    41,   187,   137,   180,
      65,     0,    79,   110,   116,    45,    75,    76,     9,   137,
       1,    51,    86,    53,    83,    30,     1,     1,   120,    59,
      89,    40,     5,   659,    30,   115,    10,     0,   475,   106,
      99,     3,     4,   496,    40,     3,     4,   186,     3,     4,
     107,    86,     3,     4,   111,    27,   129,    40,    40,   189,
      33,   687,     0,   120,   517,    37,    38,    39,   460,    78,
     105,   208,   102,   585,   141,   105,    48,   107,     3,    60,
     110,   111,   146,   297,    56,   522,    79,    78,    27,    79,
     120,    30,   156,    83,   158,    78,    78,    52,    37,   129,
      79,   181,   137,   137,    83,    30,    60,   287,   188,    84,
      84,   146,   179,   293,   243,   182,    27,   219,    60,   192,
     512,   156,    84,   158,   636,   243,    84,    52,   230,   300,
     227,   231,   224,    84,   236,    60,   228,   237,   575,   388,
      79,   426,   391,   655,    83,   245,   658,     3,   660,    60,
      61,   123,    60,   233,   213,    60,   668,   187,    84,    60,
      61,    78,   134,     3,     4,    79,    83,   224,    84,    83,
     601,   228,     3,     4,    30,    84,     7,    78,    60,     3,
       4,    60,   212,     7,   251,   405,   266,    78,   700,   244,
      30,   246,    60,    61,   224,   380,    52,   227,   228,    30,
     259,   240,    83,   242,    60,    61,    30,   242,   243,   243,
      78,    78,    52,     9,   606,   295,    83,   189,    30,    79,
      60,    52,   436,    83,   297,    52,    53,    54,    52,    60,
      61,   333,   299,   335,    78,   455,    60,   417,   458,    83,
      52,     1,   413,   480,     4,     5,     6,     7,    60,    61,
      10,   223,    12,    13,    14,     3,     4,   287,   373,   374,
     290,   306,    37,   293,    30,     3,   305,   306,    28,     7,
      30,   306,    60,    61,   341,   320,   306,   416,    30,   493,
      78,   345,    30,   422,    59,   320,    61,    79,   418,    78,
      78,    83,    30,   423,    60,    61,   396,   397,   478,   479,
     400,    60,    78,   405,    52,   485,   486,    83,    60,    61,
     345,    79,    60,    61,    52,    83,   373,   374,    78,   419,
     420,   421,    60,    61,   424,   425,    79,     3,     4,   514,
      83,     4,     5,     6,     7,    80,     7,   404,    80,    12,
      13,    14,   444,   373,   374,   384,   385,   377,   434,   449,
     385,    79,    80,    78,   456,    28,   458,   542,    83,    30,
     417,     1,   445,   436,     4,     5,     6,     7,    60,    61,
      10,    79,    12,    13,    14,    83,    78,   434,    79,    78,
       1,    52,    83,     4,     5,     6,     7,   417,    28,    60,
      61,    12,    13,    14,    84,     5,   426,     7,   465,    78,
     500,   481,   432,    40,   434,    79,    79,    28,     3,     4,
      60,   650,    27,   652,    79,   445,     4,     5,     6,     7,
     493,   478,   479,     9,    12,    13,    14,    85,   485,   486,
       1,    37,     3,     4,   514,    30,   536,   504,    79,     3,
      28,    37,    30,     7,    84,    40,   418,   514,   478,   479,
      83,   423,   637,    60,    61,   485,   486,    52,    60,    61,
      83,   694,   542,    84,    80,    60,    30,    27,    40,   702,
      30,   530,    85,   553,    78,   542,    85,    37,    79,    80,
     514,   514,   582,    37,   514,   514,    78,   554,    52,    79,
      80,    79,   677,   678,   631,    80,    60,    78,   598,    78,
      60,    61,    78,   583,    55,    56,   586,   587,    59,    60,
      61,    62,   571,    78,   594,    78,   561,   603,   601,    79,
      32,   560,   561,    83,    85,     4,   561,     6,     7,   609,
      40,   561,    80,    12,    13,    14,   616,   571,   571,    60,
      61,   571,   571,    93,    94,    80,   603,   627,   650,    28,
     652,     5,     6,     7,   478,   479,    85,   637,    12,    13,
      14,    78,   145,    48,    49,    50,    51,    52,    53,    54,
     637,   601,   155,   603,     3,    79,    30,   160,   161,   659,
      83,    80,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,     4,    78,     6,     7,    80,    80,
      40,   681,    12,    13,    14,    40,    80,   687,    83,     1,
      80,     3,     4,     5,     6,     7,     8,     9,    28,    11,
      12,    13,    14,    15,    85,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      40,    33,    34,    35,    36,    60,    80,     5,     6,     7,
      42,    60,    60,    45,    12,    13,    14,    40,    50,    51,
      52,    79,    79,    55,    56,     7,    40,    79,    60,    79,
      80,     4,     5,     6,     7,    79,     6,     7,    16,    12,
      13,    14,    12,    13,    14,   268,   269,    79,    80,    81,
      82,    80,    84,    60,     1,    28,     3,     4,     5,     6,
       7,     8,     9,    79,    11,    12,    13,    14,    15,    79,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    60,    33,    34,    35,    36,
       3,     4,     5,     6,     7,    42,    17,    78,    45,    79,
      79,    78,    78,    50,    51,    52,    78,     9,    55,    56,
      79,    79,    10,    60,    79,    60,    83,   340,    79,    55,
      56,   344,    78,    59,    60,    61,    62,    78,   300,    79,
      79,   354,    79,   586,    81,    82,   219,    84,   456,    37,
      38,    39,    78,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   571,     1,    55,
       3,     4,   195,   435,   387,     8,     9,   299,    11,   520,
     474,   442,    15,   343,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   408,    29,    85,    31,   243,
      33,    34,    35,    36,    50,    51,    52,    53,    54,    42,
     335,   444,    45,   341,   251,   456,   458,    50,    51,    52,
     406,   637,    55,    56,   637,   684,   682,    60,     1,   442,
      -1,     4,     5,     6,     7,    -1,   294,   450,   377,    12,
      13,    14,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,   466,    27,    28,    -1,    30,    -1,    -1,
      -1,    -1,   475,   476,    37,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   496,    -1,    -1,   499,    60,    61,    28,
       1,    30,    -1,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,   517,    -1,    79,   520,    -1,   522,
      83,    84,    -1,    52,    -1,    -1,    -1,    28,    -1,    -1,
      31,    60,    61,     1,   537,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    -1,   549,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,   572,
      -1,    -1,   575,    -1,    42,    -1,    -1,    45,    79,    80,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,    37,
      38,    39,    60,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,     1,    84,     3,     4,   622,
      -1,    -1,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      78,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,
      56,    -1,    -1,     1,    60,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    -1,    84,    -1,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,
      -1,     1,    60,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    11,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    81,    82,    -1,    84,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,     1,    -1,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,     1,    -1,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,     1,    -1,     3,    42,    -1,    -1,    45,     8,     9,
      -1,    11,    50,    51,    52,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    81,    82,    45,    84,    -1,    -1,    -1,
      50,    51,    52,    -1,    -1,    55,    56,     1,    -1,     3,
      60,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    81,    82,    -1,    84,    29,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    28,    -1,    30,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,
      -1,    55,    56,    -1,    -1,     1,    60,    -1,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    47,
      48,    49,    50,    51,    52,    53,    54,    81,    82,    -1,
      84,    27,    28,     1,    30,    79,     4,     5,     6,     7,
      -1,    37,     3,    -1,    12,    13,    14,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    60,    61,    -1,    -1,    29,    37,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    79,    45,    -1,    -1,    83,    84,    50,
      51,    52,    -1,    -1,    55,    56,    -1,     3,    -1,    60,
      -1,    -1,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      81,    82,    -1,    29,    85,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,     3,    42,    -1,    -1,    45,
       8,     9,    -1,    11,    50,    51,    52,    -1,    -1,    55,
      56,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    81,    82,    45,    -1,    85,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,
       3,    -1,    60,    -1,    -1,     8,     9,     1,    11,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    81,    82,    -1,    29,    85,    31,    -1,
      33,    34,    35,    36,    28,    -1,    30,    -1,     3,    42,
      -1,    -1,    45,     8,     9,    -1,    11,    50,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    81,    82,
      45,    -1,    85,    -1,    78,    50,    51,    52,    -1,    -1,
      55,    56,    -1,     3,    -1,    60,    -1,    -1,     8,     9,
       1,    11,    -1,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    81,    82,    -1,    29,
      85,    31,    -1,    33,    34,    35,    36,    28,    -1,    -1,
      31,     3,    42,    -1,    -1,    45,     8,     9,    -1,    11,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    81,    82,    45,    -1,    85,    -1,    -1,    50,    51,
      52,    -1,    30,    55,    56,    -1,    -1,    -1,    60,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    81,
      82,    -1,    -1,    85,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,     4,
       5,     6,     7,    42,    -1,    10,    45,    12,    13,    14,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    -1,    28,    -1,    30,    -1,    -1,    -1,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      79,    -1,    81,    82,    -1,    84,     3,     4,    -1,    -1,
      -1,     8,     9,    28,    11,    30,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,     3,    -1,    -1,    -1,    42,     8,     9,    45,    11,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    79,    45,    81,    82,    -1,    84,    50,    51,
      52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    84,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,
      -1,    55,    56,    -1,     3,     4,    60,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    81,    82,    28,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,     3,
      -1,    -1,    -1,    42,     8,     9,    45,    11,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    81,    82,    -1,    -1,    50,    51,    52,    -1,
      -1,    55,    56,     3,    -1,    -1,    60,    -1,     8,     9,
      -1,    11,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    79,    -1,    81,    82,    29,
      -1,    31,    -1,    33,    34,    35,    36,    -1,     3,    -1,
      -1,    -1,    42,     8,     9,    45,    11,    -1,    -1,    -1,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    81,    82,    -1,    -1,    50,    51,    52,    -1,    -1,
      55,    56,     3,    -1,    -1,    60,    -1,     8,     9,    39,
      11,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    81,    82,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,     3,    -1,    -1,
      -1,    42,     8,     9,    45,    11,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      81,    82,    -1,    -1,    50,    51,    52,    -1,    -1,    55,
      56,    -1,    -1,     1,    60,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    27,
      28,    -1,    30,    31,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    52,    -1,    -1,    -1,    -1,    37,
      38,    39,    60,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    10,
      -1,    79,    85,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    83,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    83,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    46,    47,
      48,    49,    50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    87,    88,    89,     0,    90,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    79,    91,
      92,    93,   125,   128,   132,   133,   136,   146,   147,   171,
     172,   173,   174,   243,    91,    79,    80,   146,   146,   146,
      60,    60,    60,     3,    52,    60,   139,   143,   146,   170,
      79,   125,    79,   125,   133,   136,   146,     5,     7,   129,
     147,     3,     4,    84,   100,    84,   100,    84,   100,    91,
       3,     8,     9,    11,    29,    33,    34,    35,    36,    42,
      45,    50,    51,    52,    55,    56,    60,    81,    82,   101,
     102,   104,   105,   106,   107,   108,   110,   116,   118,   243,
       7,   102,   134,   136,   188,   190,    60,   191,   170,    79,
      83,   126,     1,    27,    60,    61,    98,   140,     4,    52,
      60,   138,   141,   146,   167,   168,   170,   139,   170,   129,
       5,     6,     7,   137,   146,   174,   181,   182,    84,   181,
      84,   178,    84,   108,   108,    60,    60,   100,   108,     1,
     102,   117,   188,   108,    78,    83,    60,   105,    60,   105,
      37,    38,    39,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    59,
      60,    61,    62,     9,   108,    78,    52,    60,    61,   146,
     189,   192,   135,    78,     7,   136,   189,     5,     6,     7,
     100,   148,   149,   150,     7,   170,    78,   141,   167,   170,
      60,   238,   239,    52,    85,   102,     1,   119,   120,   121,
     196,   208,   145,   146,   191,   168,    79,    83,   126,     1,
      94,   140,    60,    61,    79,     1,    96,    80,     1,    79,
     134,   183,   190,   243,   175,    80,   176,     1,   100,   186,
     187,   177,   110,   188,    78,    78,    84,   202,   203,    78,
      79,   110,   188,   188,   110,   110,   113,   115,   112,   111,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   100,   103,   104,   102,   100,   191,   192,   231,
     232,    85,   102,   126,    60,    61,   137,   135,    78,    83,
      60,   118,     1,     3,    10,   128,   132,   233,   235,   236,
     237,   240,   241,    85,    85,    79,    99,   196,    10,   120,
     209,    37,   168,    78,   141,   168,   119,   145,   238,    85,
     102,   119,   145,   125,    79,   125,   183,   181,   145,   181,
      37,    83,   180,   186,    83,    83,    80,   197,    78,    84,
     108,    78,    78,   102,    40,   110,   110,    78,    85,   192,
      78,   233,    85,   192,   231,    85,   102,    78,   149,     3,
     103,    78,    78,   125,   125,    78,    79,    83,    78,    83,
       1,   201,   203,   122,   130,   133,   136,   144,    95,    37,
      85,    97,   184,   185,   208,   184,    80,    80,   110,   187,
      80,   180,   110,   188,    32,   198,   199,   200,   109,    40,
     110,    85,    78,    83,    78,     4,    52,    60,   146,   169,
     170,   189,    52,   146,   170,   189,   234,    10,   237,     3,
     203,    79,   125,    79,   125,   136,   131,     1,    84,   110,
     151,   201,   142,   201,    83,   209,   145,   145,   145,    80,
      83,    78,   100,   242,     1,   123,   124,   193,   194,   196,
     208,   211,   200,     1,     3,    59,    61,    84,   100,   110,
     153,   154,   155,   157,   159,   160,   114,   104,   191,   126,
      60,    61,   145,   145,   145,   191,   126,   145,   145,   233,
     138,   139,   170,   131,     5,   137,   152,   151,   185,    40,
     167,   145,   110,    79,    83,    80,   196,   123,   193,   195,
      80,   196,   208,   211,   209,   100,   110,   158,    40,    80,
      83,   179,    37,   160,   157,   110,    78,   169,   169,   238,
      52,    85,   102,    79,    79,   153,   110,    40,   145,    78,
     100,    80,   209,     4,    15,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    79,   100,   102,   127,
     128,   132,   203,   204,   205,   206,   212,   213,   221,   222,
     224,   243,    10,    85,   153,   156,   155,   157,    85,    85,
      80,   145,   110,    60,   215,   207,    60,    60,   110,    40,
      79,    79,    79,   102,    52,   100,     7,   225,    40,    79,
      79,   125,    79,   125,    16,     1,   208,   210,     1,    60,
     127,   110,    80,   157,   145,   102,    60,   210,   102,   116,
     226,   102,    10,    40,    79,   102,    79,    60,   145,   138,
     161,   167,   139,   164,   170,     1,   214,   209,   102,    85,
      78,   102,    17,    78,    79,    78,   110,    79,   102,    79,
     162,    79,   165,   210,   213,   224,    78,    78,   223,   217,
     220,    40,    40,    78,   119,   119,   210,    79,   216,   210,
     226,   210,     9,   227,   228,   229,    79,   163,   166,   210,
      79,    60,    40,    78,    83,   203,   203,   218,   102,   227,
      79,   229,   226,    78,    40,    78,    78,   118,   230,    79,
     219,    78,    83,   210,    79,   118
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

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
#line 234 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids an empty source file");
		  finish_file ();
		;}
    break;

  case 3:
#line 239 "c-parse.y"
    {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
		  finish_file ();
		;}
    break;

  case 4:
#line 253 "c-parse.y"
    {yyval.ttype = NULL_TREE; ;}
    break;

  case 6:
#line 254 "c-parse.y"
    {yyval.ttype = NULL_TREE; ;}
    break;

  case 10:
#line 261 "c-parse.y"
    { STRIP_NOPS (yyvsp[-2].ttype);
		  if ((TREE_CODE (yyvsp[-2].ttype) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND (yyvsp[-2].ttype, 0)) == STRING_CST)
		      || TREE_CODE (yyvsp[-2].ttype) == STRING_CST)
		    assemble_asm (yyvsp[-2].ttype);
		  else
		    error ("argument of `asm' is not a constant string"); ;}
    break;

  case 11:
#line 269 "c-parse.y"
    { pedantic = yyvsp[-1].itype; ;}
    break;

  case 12:
#line 274 "c-parse.y"
    { if (pedantic)
		    error ("ANSI C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 13:
#line 284 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 14:
#line 289 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype);  ;}
    break;

  case 15:
#line 294 "c-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 16:
#line 296 "c-parse.y"
    { shadow_tag (yyvsp[-1].ttype); ;}
    break;

  case 19:
#line 300 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C does not allow extra `;' outside of a function"); ;}
    break;

  case 20:
#line 306 "c-parse.y"
    { if (! start_function (current_declspecs, yyvsp[0].ttype,
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 21:
#line 311 "c-parse.y"
    { store_parm_decls (); ;}
    break;

  case 22:
#line 313 "c-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-5].itype); ;}
    break;

  case 23:
#line 319 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 24:
#line 324 "c-parse.y"
    { if (! start_function (current_declspecs, yyvsp[0].ttype,
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 25:
#line 329 "c-parse.y"
    { store_parm_decls (); ;}
    break;

  case 26:
#line 331 "c-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-5].itype); ;}
    break;

  case 27:
#line 337 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 28:
#line 342 "c-parse.y"
    { if (! start_function (NULL_TREE, yyvsp[0].ttype,
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 29:
#line 347 "c-parse.y"
    { store_parm_decls (); ;}
    break;

  case 30:
#line 349 "c-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-5].itype); ;}
    break;

  case 31:
#line 355 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 34:
#line 367 "c-parse.y"
    { yyval.code = ADDR_EXPR; ;}
    break;

  case 35:
#line 369 "c-parse.y"
    { yyval.code = NEGATE_EXPR; ;}
    break;

  case 36:
#line 371 "c-parse.y"
    { yyval.code = CONVERT_EXPR; ;}
    break;

  case 37:
#line 373 "c-parse.y"
    { yyval.code = PREINCREMENT_EXPR; ;}
    break;

  case 38:
#line 375 "c-parse.y"
    { yyval.code = PREDECREMENT_EXPR; ;}
    break;

  case 39:
#line 377 "c-parse.y"
    { yyval.code = BIT_NOT_EXPR; ;}
    break;

  case 40:
#line 379 "c-parse.y"
    { yyval.code = TRUTH_NOT_EXPR; ;}
    break;

  case 41:
#line 383 "c-parse.y"
    { yyval.ttype = build_compound_expr (yyvsp[0].ttype); ;}
    break;

  case 42:
#line 388 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 44:
#line 394 "c-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 45:
#line 396 "c-parse.y"
    { chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 47:
#line 402 "c-parse.y"
    { yyval.ttype = build_indirect_ref (yyvsp[0].ttype, "unary *"); ;}
    break;

  case 48:
#line 405 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  pedantic = yyvsp[-1].itype; ;}
    break;

  case 49:
#line 408 "c-parse.y"
    { yyval.ttype = build_unary_op (yyvsp[-1].code, yyvsp[0].ttype, 0);
		  overflow_warning (yyval.ttype); ;}
    break;

  case 50:
#line 412 "c-parse.y"
    { tree label = lookup_label (yyvsp[0].ttype);
		  if (pedantic)
		    pedwarn ("ANSI C forbids `&&'");
		  if (label == 0)
		    yyval.ttype = null_pointer_node;
		  else
		    {
		      TREE_USED (label) = 1;
		      yyval.ttype = build1 (ADDR_EXPR, ptr_type_node, label);
		      TREE_CONSTANT (yyval.ttype) = 1;
		    }
		;}
    break;

  case 51:
#line 440 "c-parse.y"
    { skip_evaluation--;
		  if (TREE_CODE (yyvsp[0].ttype) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND (yyvsp[0].ttype, 1)))
		    error ("`sizeof' applied to a bit-field");
		  yyval.ttype = c_sizeof (TREE_TYPE (yyvsp[0].ttype)); ;}
    break;

  case 52:
#line 446 "c-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_sizeof (groktypename (yyvsp[-1].ttype)); ;}
    break;

  case 53:
#line 449 "c-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_alignof_expr (yyvsp[0].ttype); ;}
    break;

  case 54:
#line 452 "c-parse.y"
    { skip_evaluation--;
		  yyval.ttype = c_alignof (groktypename (yyvsp[-1].ttype)); ;}
    break;

  case 55:
#line 455 "c-parse.y"
    { yyval.ttype = build_unary_op (REALPART_EXPR, yyvsp[0].ttype, 0); ;}
    break;

  case 56:
#line 457 "c-parse.y"
    { yyval.ttype = build_unary_op (IMAGPART_EXPR, yyvsp[0].ttype, 0); ;}
    break;

  case 57:
#line 461 "c-parse.y"
    { skip_evaluation++; ;}
    break;

  case 58:
#line 465 "c-parse.y"
    { skip_evaluation++; ;}
    break;

  case 60:
#line 471 "c-parse.y"
    { tree type = groktypename (yyvsp[-2].ttype);
		  yyval.ttype = build_c_cast (type, yyvsp[0].ttype); ;}
    break;

  case 61:
#line 474 "c-parse.y"
    { start_init (NULL_TREE, NULL, 0);
		  yyvsp[-2].ttype = groktypename (yyvsp[-2].ttype);
		  really_start_incremental_init (yyvsp[-2].ttype); ;}
    break;

  case 62:
#line 478 "c-parse.y"
    { char *name;
		  tree result = pop_init_level (0);
		  tree type = yyvsp[-5].ttype;
		  finish_init ();

		  if (pedantic && ! flag_isoc9x)
		    pedwarn ("ANSI C forbids constructor expressions");
		  if (TYPE_NAME (type) != 0)
		    {
		      if (TREE_CODE (TYPE_NAME (type)) == IDENTIFIER_NODE)
			name = IDENTIFIER_POINTER (TYPE_NAME (type));
		      else
			name = IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (type)));
		    }
		  else
		    name = "";
		  yyval.ttype = result;
		  if (TREE_CODE (type) == ARRAY_TYPE && TYPE_SIZE (type) == 0)
		    {
		      int failure = complete_array_type (type, yyval.ttype, 1);
		      if (failure)
			abort ();
		    }
		;}
    break;

  case 64:
#line 507 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 65:
#line 509 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 66:
#line 511 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 67:
#line 513 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 68:
#line 515 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 69:
#line 517 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 70:
#line 519 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 71:
#line 521 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 72:
#line 523 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 73:
#line 525 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 74:
#line 527 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 75:
#line 529 "c-parse.y"
    { yyval.ttype = parser_build_binary_op (yyvsp[-1].code, yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 76:
#line 531 "c-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_false_node; ;}
    break;

  case 77:
#line 534 "c-parse.y"
    { skip_evaluation -= yyvsp[-3].ttype == boolean_false_node;
		  yyval.ttype = parser_build_binary_op (TRUTH_ANDIF_EXPR, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 78:
#line 537 "c-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_true_node; ;}
    break;

  case 79:
#line 540 "c-parse.y"
    { skip_evaluation -= yyvsp[-3].ttype == boolean_true_node;
		  yyval.ttype = parser_build_binary_op (TRUTH_ORIF_EXPR, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 80:
#line 543 "c-parse.y"
    { yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[-1].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_false_node; ;}
    break;

  case 81:
#line 546 "c-parse.y"
    { skip_evaluation += ((yyvsp[-4].ttype == boolean_true_node)
				      - (yyvsp[-4].ttype == boolean_false_node)); ;}
    break;

  case 82:
#line 549 "c-parse.y"
    { skip_evaluation -= yyvsp[-6].ttype == boolean_true_node;
		  yyval.ttype = build_conditional_expr (yyvsp[-6].ttype, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 83:
#line 552 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  yyvsp[0].ttype = save_expr (yyvsp[-1].ttype);
		  yyvsp[-1].ttype = truthvalue_conversion (default_conversion (yyvsp[0].ttype));
		  skip_evaluation += yyvsp[-1].ttype == boolean_true_node; ;}
    break;

  case 84:
#line 559 "c-parse.y"
    { skip_evaluation -= yyvsp[-4].ttype == boolean_true_node;
		  yyval.ttype = build_conditional_expr (yyvsp[-4].ttype, yyvsp[-3].ttype, yyvsp[0].ttype); ;}
    break;

  case 85:
#line 562 "c-parse.y"
    { char class;
		  yyval.ttype = build_modify_expr (yyvsp[-2].ttype, NOP_EXPR, yyvsp[0].ttype);
		  class = TREE_CODE_CLASS (TREE_CODE (yyval.ttype));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, MODIFY_EXPR);
		;}
    break;

  case 86:
#line 570 "c-parse.y"
    { char class;
		  yyval.ttype = build_modify_expr (yyvsp[-2].ttype, yyvsp[-1].code, yyvsp[0].ttype);
		  /* This inhibits warnings in truthvalue_conversion.  */
		  class = TREE_CODE_CLASS (TREE_CODE (yyval.ttype));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE (yyval.ttype, ERROR_MARK);
		;}
    break;

  case 87:
#line 582 "c-parse.y"
    {
		  yyval.ttype = lastiddecl;
		  if (!yyval.ttype || yyval.ttype == error_mark_node)
		    {
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			    {
			      /* Ordinary implicit function declaration.  */
			      yyval.ttype = implicitly_declare (yyvsp[0].ttype);
			      assemble_external (yyval.ttype);
			      TREE_USED (yyval.ttype) = 1;
			    }
			}
		      else if (current_function_decl == 0)
			{
			  error ("`%s' undeclared here (not in a function)",
				 IDENTIFIER_POINTER (yyvsp[0].ttype));
			  yyval.ttype = error_mark_node;
			}
		      else
			{
			    {
			      if (IDENTIFIER_GLOBAL_VALUE (yyvsp[0].ttype) != error_mark_node
				  || IDENTIFIER_ERROR_LOCUS (yyvsp[0].ttype) != current_function_decl)
				{
				  error ("`%s' undeclared (first use in this function)",
					 IDENTIFIER_POINTER (yyvsp[0].ttype));

				  if (! undeclared_variable_notice)
				    {
				      error ("(Each undeclared identifier is reported only once");
				      error ("for each function it appears in.)");
				      undeclared_variable_notice = 1;
				    }
				}
			      yyval.ttype = error_mark_node;
			      /* Prevent repeated error messages.  */
			      IDENTIFIER_GLOBAL_VALUE (yyvsp[0].ttype) = error_mark_node;
			      IDENTIFIER_ERROR_LOCUS (yyvsp[0].ttype) = current_function_decl;
			    }
			}
		    }
		  else if (TREE_TYPE (yyval.ttype) == error_mark_node)
		    yyval.ttype = error_mark_node;
		  else if (C_DECL_ANTICIPATED (yyval.ttype))
		    {
		      /* The first time we see a build-in function used,
			 if it has not been declared.  */
		      C_DECL_ANTICIPATED (yyval.ttype) = 0;
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			  /* Omit the implicit declaration we
			     would ordinarily do, so we don't lose
			     the actual built in type.
			     But print a diagnostic for the mismatch.  */
			    if (TREE_CODE (yyval.ttype) != FUNCTION_DECL)
			      error ("`%s' implicitly declared as function",
				     IDENTIFIER_POINTER (DECL_NAME (yyval.ttype)));
			  else if ((TYPE_MODE (TREE_TYPE (TREE_TYPE (yyval.ttype)))
				    != TYPE_MODE (integer_type_node))
				   && (TREE_TYPE (TREE_TYPE (yyval.ttype))
				       != void_type_node))
			    pedwarn ("type mismatch in implicit declaration for built-in function `%s'",
				     IDENTIFIER_POINTER (DECL_NAME (yyval.ttype)));
			  /* If it really returns void, change that to int.  */
			  if (TREE_TYPE (TREE_TYPE (yyval.ttype)) == void_type_node)
			    TREE_TYPE (yyval.ttype)
			      = build_function_type (integer_type_node,
						     TYPE_ARG_TYPES (TREE_TYPE (yyval.ttype)));
			}
		      else
			pedwarn ("built-in function `%s' used without declaration",
				 IDENTIFIER_POINTER (DECL_NAME (yyval.ttype)));

		      /* Do what we would ordinarily do when a fn is used.  */
		      assemble_external (yyval.ttype);
		      TREE_USED (yyval.ttype) = 1;
		    }
		  else
		    {
		      assemble_external (yyval.ttype);
		      TREE_USED (yyval.ttype) = 1;
		    }

		  if (TREE_CODE (yyval.ttype) == CONST_DECL)
		    {
		      yyval.ttype = DECL_INITIAL (yyval.ttype);
		      /* This is to prevent an enum whose value is 0
			 from being considered a null pointer constant.  */
		      yyval.ttype = build1 (NOP_EXPR, TREE_TYPE (yyval.ttype), yyval.ttype);
		      TREE_CONSTANT (yyval.ttype) = 1;
		    }
		;}
    break;

  case 89:
#line 681 "c-parse.y"
    { yyval.ttype = combine_strings (yyvsp[0].ttype); ;}
    break;

  case 90:
#line 683 "c-parse.y"
    { char class = TREE_CODE_CLASS (TREE_CODE (yyvsp[-1].ttype));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE (yyvsp[-1].ttype, ERROR_MARK);
		  yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 91:
#line 689 "c-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 92:
#line 691 "c-parse.y"
    { if (current_function_decl == 0)
		    {
		      error ("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		  /* We must force a BLOCK for this level
		     so that, if it is not expanded later,
		     there is a way to turn off the entire subtree of blocks
		     that are contained in it.  */
		  keep_next_level ();
		  push_iterator_stack ();
		  push_label_level ();
		  yyval.ttype = expand_start_stmt_expr (); ;}
    break;

  case 93:
#line 705 "c-parse.y"
    { tree rtl_exp;
		  if (pedantic)
		    pedwarn ("ANSI C forbids braced-groups within expressions");
		  pop_iterator_stack ();
		  pop_label_level ();
		  rtl_exp = expand_end_stmt_expr (yyvsp[-2].ttype);
		  /* The statements have side effects, so the group does.  */
		  TREE_SIDE_EFFECTS (rtl_exp) = 1;

		  if (TREE_CODE (yyvsp[-1].ttype) == BLOCK)
		    {
		      /* Make a BIND_EXPR for the BLOCK already made.  */
		      yyval.ttype = build (BIND_EXPR, TREE_TYPE (rtl_exp),
				  NULL_TREE, rtl_exp, yyvsp[-1].ttype);
		      /* Remove the block from the tree at this point.
			 It gets put back at the proper place
			 when the BIND_EXPR is expanded.  */
		      delete_block (yyvsp[-1].ttype);
		    }
		  else
		    yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 94:
#line 728 "c-parse.y"
    { yyval.ttype = build_function_call (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 95:
#line 730 "c-parse.y"
    {
		  tree c;

		  c = fold(yyvsp[-5].ttype);
		  STRIP_NOPS (c);
		  if (TREE_CODE (c) != INTEGER_CST)
		    error ("first argument to __builtin_choose_expr not a constant");
		  yyval.ttype = integer_zerop (c) ? yyvsp[-1].ttype : yyvsp[-3].ttype;
		;}
    break;

  case 96:
#line 740 "c-parse.y"
    {
		  tree e1, e2;

		  e1 = TYPE_MAIN_VARIANT (groktypename (yyvsp[-3].ttype));
		  e2 = TYPE_MAIN_VARIANT (groktypename (yyvsp[-1].ttype));
		  yyval.ttype = comptypes (e1, e2) ?
		    build_int_2 (1, 0) : build_int_2 (0, 0);
		;}
    break;

  case 97:
#line 749 "c-parse.y"
    { yyval.ttype = build_array_ref (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 98:
#line 751 "c-parse.y"
    {
		    yyval.ttype = build_component_ref (yyvsp[-2].ttype, yyvsp[0].ttype);
		;}
    break;

  case 99:
#line 755 "c-parse.y"
    {
                  tree expr = build_indirect_ref (yyvsp[-2].ttype, "->");

                    yyval.ttype = build_component_ref (expr, yyvsp[0].ttype);
		;}
    break;

  case 100:
#line 761 "c-parse.y"
    { yyval.ttype = build_unary_op (POSTINCREMENT_EXPR, yyvsp[-1].ttype, 0); ;}
    break;

  case 101:
#line 763 "c-parse.y"
    { yyval.ttype = build_unary_op (POSTDECREMENT_EXPR, yyvsp[-1].ttype, 0); ;}
    break;

  case 103:
#line 770 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 106:
#line 779 "c-parse.y"
    { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ANSI C does not permit use of `varargs.h'"); ;}
    break;

  case 107:
#line 789 "c-parse.y"
    { ;}
    break;

  case 112:
#line 805 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 113:
#line 810 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);	
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 114:
#line 815 "c-parse.y"
    { shadow_tag_warned (yyvsp[-1].ttype, 1);
		  pedwarn ("empty declaration"); ;}
    break;

  case 115:
#line 818 "c-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 116:
#line 827 "c-parse.y"
    { ;}
    break;

  case 121:
#line 842 "c-parse.y"
    { yyval.itype = suspend_momentary ();
		  pending_xref_error ();
		  declspec_stack = tree_cons (prefix_attributes,
					      current_declspecs,
					      declspec_stack);
		  split_specs_attrs (yyvsp[0].ttype,
				     &current_declspecs, &prefix_attributes); ;}
    break;

  case 122:
#line 853 "c-parse.y"
    { prefix_attributes = chainon (prefix_attributes, yyvsp[0].ttype); ;}
    break;

  case 123:
#line 858 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 124:
#line 863 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 125:
#line 868 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-1].itype); ;}
    break;

  case 126:
#line 873 "c-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-1].itype); ;}
    break;

  case 127:
#line 878 "c-parse.y"
    { shadow_tag (yyvsp[-1].ttype); ;}
    break;

  case 128:
#line 880 "c-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 129:
#line 882 "c-parse.y"
    { pedantic = yyvsp[-1].itype; ;}
    break;

  case 130:
#line 892 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 131:
#line 894 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[0].ttype, tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[-2].ttype)); ;}
    break;

  case 132:
#line 898 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 133:
#line 900 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 134:
#line 902 "c-parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 135:
#line 907 "c-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 136:
#line 912 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 137:
#line 914 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[0].ttype, tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[-2].ttype)); ;}
    break;

  case 138:
#line 919 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 139:
#line 921 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 140:
#line 923 "c-parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 141:
#line 936 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 142:
#line 938 "c-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, NULL_TREE); ;}
    break;

  case 143:
#line 940 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 144:
#line 942 "c-parse.y"
    { yyval.ttype = tree_cons (yyvsp[0].ttype, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 145:
#line 947 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 146:
#line 950 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 147:
#line 952 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = 1; ;}
    break;

  case 148:
#line 955 "c-parse.y"
    { if (extra_warnings && TREE_STATIC (yyvsp[-1].ttype))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER (yyvsp[0].ttype));
		  yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype);
		  TREE_STATIC (yyval.ttype) = TREE_STATIC (yyvsp[-1].ttype); ;}
    break;

  case 149:
#line 969 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 150:
#line 971 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[0].ttype, tree_cons (NULL_TREE, yyvsp[-1].ttype, yyvsp[-2].ttype)); ;}
    break;

  case 151:
#line 975 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 152:
#line 977 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 155:
#line 987 "c-parse.y"
    { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  yyval.ttype = lookup_name (yyvsp[0].ttype); ;}
    break;

  case 156:
#line 991 "c-parse.y"
    { yyval.ttype = TREE_TYPE (yyvsp[-1].ttype); ;}
    break;

  case 157:
#line 993 "c-parse.y"
    { yyval.ttype = groktypename (yyvsp[-1].ttype); ;}
    break;

  case 165:
#line 1015 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 166:
#line 1017 "c-parse.y"
    { if (TREE_CHAIN (yyvsp[-1].ttype)) yyvsp[-1].ttype = combine_strings (yyvsp[-1].ttype);
		  yyval.ttype = yyvsp[-1].ttype;
		;}
    break;

  case 167:
#line 1024 "c-parse.y"
    { yyval.ttype = start_decl (yyvsp[-3].ttype, current_declspecs, 1,
					  yyvsp[-1].ttype, prefix_attributes);
		  start_init (yyval.ttype, yyvsp[-2].ttype, global_bindings_p ()); ;}
    break;

  case 168:
#line 1029 "c-parse.y"
    { finish_init ();
		  finish_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 169:
#line 1032 "c-parse.y"
    { tree d = start_decl (yyvsp[-2].ttype, current_declspecs, 0,
				       yyvsp[0].ttype, prefix_attributes);
		  finish_decl (d, NULL_TREE, yyvsp[-1].ttype); 
                ;}
    break;

  case 170:
#line 1040 "c-parse.y"
    { yyval.ttype = start_decl (yyvsp[-3].ttype, current_declspecs, 1,
					  yyvsp[-1].ttype, prefix_attributes);
		  start_init (yyval.ttype, yyvsp[-2].ttype, global_bindings_p ()); ;}
    break;

  case 171:
#line 1045 "c-parse.y"
    { finish_init ();
		  decl_attributes (yyvsp[-1].ttype, yyvsp[-3].ttype, prefix_attributes);
		  finish_decl (yyvsp[-1].ttype, yyvsp[0].ttype, yyvsp[-4].ttype); ;}
    break;

  case 172:
#line 1049 "c-parse.y"
    { tree d = start_decl (yyvsp[-2].ttype, current_declspecs, 0,
				       yyvsp[0].ttype, prefix_attributes);
		  finish_decl (d, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 173:
#line 1057 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 174:
#line 1059 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 175:
#line 1064 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 176:
#line 1066 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 177:
#line 1071 "c-parse.y"
    { yyval.ttype = yyvsp[-2].ttype; ;}
    break;

  case 178:
#line 1076 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 179:
#line 1078 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 180:
#line 1083 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 181:
#line 1085 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 182:
#line 1087 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, build_tree_list (NULL_TREE, yyvsp[-1].ttype)); ;}
    break;

  case 183:
#line 1089 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-5].ttype, tree_cons (NULL_TREE, yyvsp[-3].ttype, yyvsp[-1].ttype)); ;}
    break;

  case 184:
#line 1091 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 190:
#line 1109 "c-parse.y"
    { really_start_incremental_init (NULL_TREE);
		  /* Note that the call to clear_momentary
		     is in process_init_element.  */
		  push_momentary (); ;}
    break;

  case 191:
#line 1114 "c-parse.y"
    { yyval.ttype = pop_init_level (0);
		  if (yyval.ttype == error_mark_node
		      && ! (yychar == STRING || yychar == CONSTANT))
		    pop_momentary ();
		  else
		    pop_momentary_nofree (); ;}
    break;

  case 192:
#line 1122 "c-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 193:
#line 1128 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids empty initializer braces"); ;}
    break;

  case 199:
#line 1144 "c-parse.y"
    { set_init_label (yyvsp[-1].ttype); ;}
    break;

  case 202:
#line 1151 "c-parse.y"
    { push_init_level (0); ;}
    break;

  case 203:
#line 1153 "c-parse.y"
    { process_init_element (pop_init_level (0)); ;}
    break;

  case 204:
#line 1155 "c-parse.y"
    { process_init_element (yyvsp[0].ttype); ;}
    break;

  case 208:
#line 1166 "c-parse.y"
    { set_init_label (yyvsp[0].ttype); ;}
    break;

  case 209:
#line 1171 "c-parse.y"
    { set_init_index (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 210:
#line 1173 "c-parse.y"
    { set_init_index (yyvsp[-1].ttype, NULL_TREE); ;}
    break;

  case 211:
#line 1178 "c-parse.y"
    { push_c_function_context ();
		  if (! start_function (current_declspecs, yyvsp[0].ttype,
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); ;}
    break;

  case 212:
#line 1187 "c-parse.y"
    { store_parm_decls (); ;}
    break;

  case 213:
#line 1195 "c-parse.y"
    { finish_function (1);
		  pop_c_function_context (); ;}
    break;

  case 214:
#line 1201 "c-parse.y"
    { push_c_function_context ();
		  if (! start_function (current_declspecs, yyvsp[0].ttype,
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); ;}
    break;

  case 215:
#line 1210 "c-parse.y"
    { store_parm_decls (); ;}
    break;

  case 216:
#line 1218 "c-parse.y"
    { finish_function (1);
		  pop_c_function_context (); ;}
    break;

  case 219:
#line 1234 "c-parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 220:
#line 1236 "c-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 221:
#line 1241 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 222:
#line 1243 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 223:
#line 1245 "c-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 224:
#line 1252 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 226:
#line 1263 "c-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 227:
#line 1268 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, NULL_TREE);
		  if (! flag_isoc9x)
		    error ("`[*]' in parameter declaration only allowed in ISO C 9x");
		;}
    break;

  case 228:
#line 1273 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 229:
#line 1275 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 230:
#line 1277 "c-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 231:
#line 1284 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 233:
#line 1293 "c-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 234:
#line 1298 "c-parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 235:
#line 1300 "c-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 236:
#line 1302 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, NULL_TREE);
		  if (! flag_isoc9x)
		    error ("`[*]' in parameter declaration only allowed in ISO C 9x");
		;}
    break;

  case 237:
#line 1307 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 238:
#line 1309 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 239:
#line 1316 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 241:
#line 1322 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 242:
#line 1324 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 243:
#line 1329 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 244:
#line 1331 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 245:
#line 1336 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 246:
#line 1338 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 247:
#line 1343 "c-parse.y"
    { yyval.ttype = start_struct (RECORD_TYPE, yyvsp[-1].ttype);
		  /* Start scope of tag before parsing components.  */
		;}
    break;

  case 248:
#line 1347 "c-parse.y"
    { yyval.ttype = finish_struct (yyvsp[-3].ttype, yyvsp[-2].ttype, chainon (yyvsp[-6].ttype, yyvsp[0].ttype)); ;}
    break;

  case 249:
#line 1349 "c-parse.y"
    { yyval.ttype = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      yyvsp[-2].ttype, chainon (yyvsp[-4].ttype, yyvsp[0].ttype));
		;}
    break;

  case 250:
#line 1353 "c-parse.y"
    { yyval.ttype = xref_tag (RECORD_TYPE, yyvsp[0].ttype); ;}
    break;

  case 251:
#line 1355 "c-parse.y"
    { yyval.ttype = start_struct (UNION_TYPE, yyvsp[-1].ttype); ;}
    break;

  case 252:
#line 1357 "c-parse.y"
    { yyval.ttype = finish_struct (yyvsp[-3].ttype, yyvsp[-2].ttype, chainon (yyvsp[-6].ttype, yyvsp[0].ttype)); ;}
    break;

  case 253:
#line 1359 "c-parse.y"
    { yyval.ttype = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      yyvsp[-2].ttype, chainon (yyvsp[-4].ttype, yyvsp[0].ttype));
		;}
    break;

  case 254:
#line 1363 "c-parse.y"
    { yyval.ttype = xref_tag (UNION_TYPE, yyvsp[0].ttype); ;}
    break;

  case 255:
#line 1365 "c-parse.y"
    { yyvsp[0].itype = suspend_momentary ();
		  yyval.ttype = start_enum (yyvsp[-1].ttype); ;}
    break;

  case 256:
#line 1368 "c-parse.y"
    { yyval.ttype= finish_enum (yyvsp[-4].ttype, nreverse (yyvsp[-3].ttype), chainon (yyvsp[-7].ttype, yyvsp[0].ttype));
		  resume_momentary (yyvsp[-5].itype); ;}
    break;

  case 257:
#line 1371 "c-parse.y"
    { yyvsp[0].itype = suspend_momentary ();
		  yyval.ttype = start_enum (NULL_TREE); ;}
    break;

  case 258:
#line 1374 "c-parse.y"
    { yyval.ttype= finish_enum (yyvsp[-4].ttype, nreverse (yyvsp[-3].ttype), chainon (yyvsp[-6].ttype, yyvsp[0].ttype));
		  resume_momentary (yyvsp[-5].itype); ;}
    break;

  case 259:
#line 1377 "c-parse.y"
    { yyval.ttype = xref_tag (ENUMERAL_TYPE, yyvsp[0].ttype); ;}
    break;

  case 263:
#line 1388 "c-parse.y"
    { if (pedantic && ! flag_isoc9x)
		    pedwarn ("comma at end of enumerator list"); ;}
    break;

  case 264:
#line 1394 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 265:
#line 1396 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-1].ttype, yyvsp[0].ttype);
		  pedwarn ("no semicolon at end of struct or union"); ;}
    break;

  case 266:
#line 1401 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 267:
#line 1403 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[-1].ttype); ;}
    break;

  case 268:
#line 1405 "c-parse.y"
    { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); ;}
    break;

  case 269:
#line 1420 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-1].itype); ;}
    break;

  case 270:
#line 1426 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag(yyvsp[0].ttype);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 271:
#line 1431 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-1].itype); ;}
    break;

  case 272:
#line 1437 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag(yyvsp[0].ttype);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 273:
#line 1442 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 274:
#line 1444 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  pedantic = yyvsp[-1].itype; ;}
    break;

  case 276:
#line 1451 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 277:
#line 1456 "c-parse.y"
    { yyval.ttype = grokfield (yyvsp[-3].filename, yyvsp[-2].lineno, yyvsp[-1].ttype, current_declspecs, NULL_TREE);
		  decl_attributes (yyval.ttype, yyvsp[0].ttype, prefix_attributes); ;}
    break;

  case 278:
#line 1460 "c-parse.y"
    { yyval.ttype = grokfield (yyvsp[-5].filename, yyvsp[-4].lineno, yyvsp[-3].ttype, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (yyval.ttype, yyvsp[0].ttype, prefix_attributes); ;}
    break;

  case 279:
#line 1463 "c-parse.y"
    { yyval.ttype = grokfield (yyvsp[-4].filename, yyvsp[-3].lineno, NULL_TREE, current_declspecs, yyvsp[-1].ttype);
		  decl_attributes (yyval.ttype, yyvsp[0].ttype, prefix_attributes); ;}
    break;

  case 281:
#line 1475 "c-parse.y"
    { if (yyvsp[-2].ttype == error_mark_node)
		    yyval.ttype = yyvsp[-2].ttype;
		  else
		    yyval.ttype = chainon (yyvsp[0].ttype, yyvsp[-2].ttype); ;}
    break;

  case 282:
#line 1480 "c-parse.y"
    { yyval.ttype = error_mark_node; ;}
    break;

  case 283:
#line 1486 "c-parse.y"
    { yyval.ttype = build_enumerator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 284:
#line 1488 "c-parse.y"
    { yyval.ttype = build_enumerator (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 285:
#line 1493 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 286:
#line 1495 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 287:
#line 1500 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 289:
#line 1506 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 290:
#line 1508 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 291:
#line 1513 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 292:
#line 1515 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, yyvsp[0].ttype, yyvsp[-1].ttype); ;}
    break;

  case 293:
#line 1520 "c-parse.y"
    { yyval.ttype = yyvsp[-1].ttype; ;}
    break;

  case 294:
#line 1523 "c-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[-1].ttype, yyvsp[0].ttype); ;}
    break;

  case 295:
#line 1525 "c-parse.y"
    { yyval.ttype = make_pointer_declarator (yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 296:
#line 1527 "c-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, yyvsp[-2].ttype, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 297:
#line 1529 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 298:
#line 1531 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, yyvsp[-2].ttype, NULL_TREE); ;}
    break;

  case 299:
#line 1533 "c-parse.y"
    { yyval.ttype = build_nt (CALL_EXPR, NULL_TREE, yyvsp[0].ttype, NULL_TREE); ;}
    break;

  case 300:
#line 1535 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 301:
#line 1537 "c-parse.y"
    { yyval.ttype = build_nt (ARRAY_REF, NULL_TREE, NULL_TREE); ;}
    break;

  case 302:
#line 1541 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 303:
#line 1550 "c-parse.y"
    {
		  if (pedantic && yyvsp[0].ends_in_label)
		    pedwarn ("ANSI C forbids label at end of compound statement");
		;}
    break;

  case 305:
#line 1559 "c-parse.y"
    { yyval.ends_in_label = yyvsp[0].ends_in_label; ;}
    break;

  case 306:
#line 1561 "c-parse.y"
    { yyval.ends_in_label = 0; ;}
    break;

  case 310:
#line 1573 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  pushlevel (0);
		  clear_last_expr ();
		  push_momentary ();
		  expand_start_bindings (0);
		;}
    break;

  case 312:
#line 1586 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids label declarations"); ;}
    break;

  case 315:
#line 1597 "c-parse.y"
    { tree link;
		  for (link = yyvsp[-1].ttype; link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      declare_nonlocal_label (label);
		    }
		;}
    break;

  case 316:
#line 1611 "c-parse.y"
    {;}
    break;

  case 318:
#line 1615 "c-parse.y"
    { compstmt_count++; ;}
    break;

  case 319:
#line 1618 "c-parse.y"
    { yyval.ttype = convert (void_type_node, integer_zero_node); ;}
    break;

  case 320:
#line 1620 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), 1, 0);
		  yyval.ttype = poplevel (1, 1, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 321:
#line 1628 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  yyval.ttype = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 322:
#line 1636 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  yyval.ttype = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 325:
#line 1656 "c-parse.y"
    { emit_line_note (yyvsp[-5].filename, yyvsp[-4].lineno);
		  c_expand_start_cond (truthvalue_conversion (yyvsp[-1].ttype), 0, 
				       compstmt_count);
		  yyval.itype = stmt_count;
		  if_stmt_file = yyvsp[-5].filename;
		  if_stmt_line = yyvsp[-4].lineno;
		  position_after_white_space (); ;}
    break;

  case 326:
#line 1670 "c-parse.y"
    { stmt_count++;
		  compstmt_count++;
		  emit_line_note (yyvsp[-2].filename, yyvsp[-1].lineno);
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  expand_start_loop_continue_elsewhere (1);
		  position_after_white_space (); ;}
    break;

  case 327:
#line 1678 "c-parse.y"
    { expand_loop_continue_here (); ;}
    break;

  case 328:
#line 1682 "c-parse.y"
    { yyval.filename = input_filename; ;}
    break;

  case 329:
#line 1686 "c-parse.y"
    { yyval.lineno = lineno; ;}
    break;

  case 330:
#line 1691 "c-parse.y"
    { ;}
    break;

  case 331:
#line 1696 "c-parse.y"
    { ;}
    break;

  case 332:
#line 1701 "c-parse.y"
    { yyval.ends_in_label = yyvsp[0].ends_in_label; ;}
    break;

  case 333:
#line 1706 "c-parse.y"
    { yyval.ends_in_label = 0; ;}
    break;

  case 334:
#line 1708 "c-parse.y"
    { yyval.ends_in_label = 1; ;}
    break;

  case 335:
#line 1714 "c-parse.y"
    { stmt_count++; ;}
    break;

  case 337:
#line 1717 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-3].filename, yyvsp[-2].lineno);
/* It appears that this should not be done--that a non-lvalue array
   shouldn't get an error if the value isn't used.
   Section 3.2.2.1 says that an array lvalue gets converted to a pointer
   if it appears as a top-level expression,
   but says nothing about non-lvalue arrays.  */
#if 0
		  /* Call default_conversion to get an error
		     on referring to a register array if pedantic.  */
		  if (TREE_CODE (TREE_TYPE (yyvsp[-1].ttype)) == ARRAY_TYPE
		      || TREE_CODE (TREE_TYPE (yyvsp[-1].ttype)) == FUNCTION_TYPE)
		    yyvsp[-1].ttype = default_conversion (yyvsp[-1].ttype);
#endif
		  iterator_expand (yyvsp[-1].ttype);
		  clear_momentary (); ;}
    break;

  case 338:
#line 1734 "c-parse.y"
    { c_expand_start_else ();
		  yyvsp[-1].itype = stmt_count;
		  position_after_white_space (); ;}
    break;

  case 339:
#line 1738 "c-parse.y"
    { c_expand_end_cond ();
		  if (extra_warnings && stmt_count == yyvsp[-3].itype)
		    warning ("empty body in an else-statement"); ;}
    break;

  case 340:
#line 1742 "c-parse.y"
    { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == yyvsp[0].itype)
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); ;}
    break;

  case 341:
#line 1754 "c-parse.y"
    { c_expand_end_cond (); ;}
    break;

  case 342:
#line 1756 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-2].filename, yyvsp[-1].lineno);
		  /* The emit_nop used to come before emit_line_note,
		     but that made the nop seem like part of the preceding line.
		     And that was confusing when the preceding line was
		     inside of an if statement and was not really executed.
		     I think it ought to work to put the nop after the line number.
		     We will see.  --rms, July 15, 1991.  */
		  emit_nop (); ;}
    break;

  case 343:
#line 1766 "c-parse.y"
    { /* Don't start the loop till we have succeeded
		     in parsing the end test.  This is to make sure
		     that we end every loop we start.  */
		  expand_start_loop (1);
		  emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion (yyvsp[-1].ttype));
		  position_after_white_space (); ;}
    break;

  case 344:
#line 1775 "c-parse.y"
    { expand_end_loop (); ;}
    break;

  case 345:
#line 1778 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion (yyvsp[-2].ttype));
		  expand_end_loop ();
		  clear_momentary (); ;}
    break;

  case 346:
#line 1785 "c-parse.y"
    { expand_end_loop ();
		  clear_momentary (); ;}
    break;

  case 347:
#line 1789 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-5].filename, yyvsp[-4].lineno);
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  if (yyvsp[-1].ttype) c_expand_expr_stmt (yyvsp[-1].ttype);
		  /* Next step is to call expand_start_loop_continue_elsewhere,
		     but wait till after we parse the entire for (...).
		     Otherwise, invalid input might cause us to call that
		     fn without calling expand_end_loop.  */
		;}
    break;

  case 348:
#line 1801 "c-parse.y"
    { yyvsp[0].lineno = lineno;
		  yyval.filename = input_filename; ;}
    break;

  case 349:
#line 1804 "c-parse.y"
    { 
		  /* Start the loop.  Doing this after parsing
		     all the expressions ensures we will end the loop.  */
		  expand_start_loop_continue_elsewhere (1);
		  /* Emit the end-test, with a line number.  */
		  emit_line_note (yyvsp[-2].filename, yyvsp[-3].lineno);
		  if (yyvsp[-4].ttype)
		    expand_exit_loop_if_false (NULL_PTR,
					       truthvalue_conversion (yyvsp[-4].ttype));
		  /* Don't let the tree nodes for $9 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  yyvsp[-3].lineno = lineno;
		  yyvsp[-2].filename = input_filename;
		  position_after_white_space (); ;}
    break;

  case 350:
#line 1820 "c-parse.y"
    { /* Emit the increment expression, with a line number.  */
		  emit_line_note (yyvsp[-4].filename, yyvsp[-5].lineno);
		  expand_loop_continue_here ();
		  if (yyvsp[-3].ttype)
		    c_expand_expr_stmt (yyvsp[-3].ttype);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary ();
		  expand_end_loop (); ;}
    break;

  case 351:
#line 1831 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-5].filename, yyvsp[-4].lineno);
		  c_expand_start_case (yyvsp[-1].ttype);
		  /* Don't let the tree nodes for $3 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  position_after_white_space (); ;}
    break;

  case 352:
#line 1839 "c-parse.y"
    { expand_end_case (yyvsp[-3].ttype);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 353:
#line 1845 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-3].filename, yyvsp[-2].lineno);
		  if ( ! expand_exit_something ())
		    error ("break statement not within loop or switch"); ;}
    break;

  case 354:
#line 1850 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-3].filename, yyvsp[-2].lineno);
		  if (! expand_continue_loop (NULL_PTR))
		    error ("continue statement not within a loop"); ;}
    break;

  case 355:
#line 1855 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-3].filename, yyvsp[-2].lineno);
		  c_expand_return (NULL_TREE); ;}
    break;

  case 356:
#line 1859 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-4].filename, yyvsp[-3].lineno);
		  c_expand_return (yyvsp[-1].ttype); ;}
    break;

  case 357:
#line 1863 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-7].filename, yyvsp[-6].lineno);
		  STRIP_NOPS (yyvsp[-2].ttype);
		  if ((TREE_CODE (yyvsp[-2].ttype) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND (yyvsp[-2].ttype, 0)) == STRING_CST)
		      || TREE_CODE (yyvsp[-2].ttype) == STRING_CST)
		    expand_asm (yyvsp[-2].ttype);
		  else
		    error ("argument of `asm' is not a constant string"); ;}
    break;

  case 358:
#line 1874 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-9].filename, yyvsp[-8].lineno);
		  c_expand_asm_operands (yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE, NULL_TREE,
					 yyvsp[-6].ttype == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 359:
#line 1881 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-11].filename, yyvsp[-10].lineno);
		  c_expand_asm_operands (yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype, NULL_TREE,
					 yyvsp[-8].ttype == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 360:
#line 1889 "c-parse.y"
    { stmt_count++;
		  emit_line_note (yyvsp[-13].filename, yyvsp[-12].lineno);
		  c_expand_asm_operands (yyvsp[-8].ttype, yyvsp[-6].ttype, yyvsp[-4].ttype, yyvsp[-2].ttype,
					 yyvsp[-10].ttype == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 361:
#line 1895 "c-parse.y"
    { tree decl;
		  stmt_count++;
		  emit_line_note (yyvsp[-4].filename, yyvsp[-3].lineno);
		  decl = lookup_label (yyvsp[-1].ttype);
		  if (decl != 0)
		    {
		      TREE_USED (decl) = 1;
		      expand_goto (decl);
		    }
		;}
    break;

  case 362:
#line 1906 "c-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids `goto *expr;'");
		  stmt_count++;
		  emit_line_note (yyvsp[-5].filename, yyvsp[-4].lineno);
		  expand_computed_goto (convert (ptr_type_node, yyvsp[-1].ttype)); ;}
    break;

  case 365:
#line 1921 "c-parse.y"
    {
	    /* The value returned by this action is  */
	    /*      1 if everything is OK */ 
	    /*      0 in case of error or already bound iterator */

	    yyval.itype = 0;
	    if (TREE_CODE (yyvsp[-1].ttype) != VAR_DECL)
	      error ("invalid `for (ITERATOR)' syntax");
	    else if (! ITERATOR_P (yyvsp[-1].ttype))
	      error ("`%s' is not an iterator",
		     IDENTIFIER_POINTER (DECL_NAME (yyvsp[-1].ttype)));
	    else if (ITERATOR_BOUND_P (yyvsp[-1].ttype))
	      error ("`for (%s)' inside expansion of same iterator",
		     IDENTIFIER_POINTER (DECL_NAME (yyvsp[-1].ttype)));
	    else
	      {
		yyval.itype = 1;
		iterator_for_loop_start (yyvsp[-1].ttype);
	      }
	  ;}
    break;

  case 366:
#line 1942 "c-parse.y"
    {
	    if (yyvsp[-1].itype)
	      iterator_for_loop_end (yyvsp[-3].ttype);
	  ;}
    break;

  case 367:
#line 1977 "c-parse.y"
    { register tree value = check_case_value (yyvsp[-1].ttype);
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);

		  stmt_count++;

		  if (value != error_mark_node)
		    {
		      tree duplicate;
		      int success;

		      if (pedantic && ! INTEGRAL_TYPE_P (TREE_TYPE (value)))
			pedwarn ("label must have integral type in ANSI C");

		      success = pushcase (value, convert_and_check,
					  label, &duplicate);

		      if (success == 1)
			error ("case label not within a switch statement");
		      else if (success == 2)
			{
			  error ("duplicate case value");
			  error_with_decl (duplicate, "this is the first entry for that value");
			}
		      else if (success == 3)
			warning ("case value out of range");
		      else if (success == 5)
			error ("case label within scope of cleanup or variable array");
		    }
		  position_after_white_space (); ;}
    break;

  case 368:
#line 2008 "c-parse.y"
    { register tree value1 = check_case_value (yyvsp[-3].ttype);
		  register tree value2 = check_case_value (yyvsp[-1].ttype);
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);

		  if (pedantic)
		    pedwarn ("ANSI C forbids case ranges");
		  stmt_count++;

		  if (value1 != error_mark_node && value2 != error_mark_node)
		    {
		      tree duplicate;
		      int success = pushcase_range (value1, value2,
						    convert_and_check, label,
						    &duplicate);
		      if (success == 1)
			error ("case label not within a switch statement");
		      else if (success == 2)
			{
			  error ("duplicate case value");
			  error_with_decl (duplicate, "this is the first entry for that value");
			}
		      else if (success == 3)
			warning ("case value out of range");
		      else if (success == 4)
			warning ("empty case range");
		      else if (success == 5)
			error ("case label within scope of cleanup or variable array");
		    }
		  position_after_white_space (); ;}
    break;

  case 369:
#line 2039 "c-parse.y"
    {
		  tree duplicate;
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);
		  int success = pushcase (NULL_TREE, 0, label, &duplicate);
		  stmt_count++;
		  if (success == 1)
		    error ("default label not within a switch statement");
		  else if (success == 2)
		    {
		      error ("multiple default labels in one switch");
		      error_with_decl (duplicate, "this is the first default label");
		    }
		  position_after_white_space (); ;}
    break;

  case 370:
#line 2054 "c-parse.y"
    { tree label = define_label (input_filename, lineno, yyvsp[-2].ttype);
		  stmt_count++;
		  emit_nop ();
		  if (label)
		    {
		      expand_label (label);
		      decl_attributes (label, yyvsp[0].ttype, NULL_TREE);
		    }
		  position_after_white_space (); ;}
    break;

  case 371:
#line 2069 "c-parse.y"
    { emit_line_note (input_filename, lineno);
		  yyval.ttype = NULL_TREE; ;}
    break;

  case 372:
#line 2072 "c-parse.y"
    { emit_line_note (input_filename, lineno); ;}
    break;

  case 373:
#line 2077 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 375:
#line 2084 "c-parse.y"
    { yyval.ttype = NULL_TREE; ;}
    break;

  case 378:
#line 2091 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, yyvsp[0].ttype); ;}
    break;

  case 379:
#line 2096 "c-parse.y"
    { yyval.ttype = build_tree_list (yyvsp[-3].ttype, yyvsp[-1].ttype); ;}
    break;

  case 380:
#line 2101 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 381:
#line 2103 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, combine_strings (yyvsp[0].ttype), yyvsp[-2].ttype); ;}
    break;

  case 382:
#line 2109 "c-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); ;}
    break;

  case 383:
#line 2113 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 385:
#line 2121 "c-parse.y"
    { tree parm;
		  if (pedantic)
		    pedwarn ("ANSI C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); ;}
    break;

  case 386:
#line 2129 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype; ;}
    break;

  case 387:
#line 2131 "c-parse.y"
    { yyval.ttype = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); ;}
    break;

  case 388:
#line 2137 "c-parse.y"
    { yyval.ttype = get_parm_info (0); ;}
    break;

  case 389:
#line 2139 "c-parse.y"
    { yyval.ttype = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ANSI C requires a named argument before `...'");
		;}
    break;

  case 390:
#line 2149 "c-parse.y"
    { yyval.ttype = get_parm_info (1); ;}
    break;

  case 391:
#line 2151 "c-parse.y"
    { yyval.ttype = get_parm_info (0); ;}
    break;

  case 392:
#line 2156 "c-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 393:
#line 2158 "c-parse.y"
    { push_parm_decl (yyvsp[0].ttype); ;}
    break;

  case 394:
#line 2165 "c-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					build_tree_list (prefix_attributes,
							 yyvsp[0].ttype));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 395:
#line 2174 "c-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					build_tree_list (prefix_attributes,
							 yyvsp[0].ttype)); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 396:
#line 2183 "c-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					build_tree_list (prefix_attributes,
							 yyvsp[0].ttype));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype); ;}
    break;

  case 397:
#line 2192 "c-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					build_tree_list (prefix_attributes,
							 yyvsp[0].ttype));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype);  ;}
    break;

  case 398:
#line 2202 "c-parse.y"
    { yyval.ttype = build_tree_list (build_tree_list (current_declspecs,
							 yyvsp[-1].ttype),
					build_tree_list (prefix_attributes,
							 yyvsp[0].ttype));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary (yyvsp[-2].itype);  ;}
    break;

  case 399:
#line 2216 "c-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); ;}
    break;

  case 400:
#line 2220 "c-parse.y"
    { yyval.ttype = yyvsp[0].ttype;
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 402:
#line 2228 "c-parse.y"
    { tree t;
		  for (t = yyvsp[-1].ttype; t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  yyval.ttype = tree_cons (NULL_TREE, NULL_TREE, yyvsp[-1].ttype); ;}
    break;

  case 403:
#line 2238 "c-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 404:
#line 2240 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 405:
#line 2246 "c-parse.y"
    { yyval.ttype = build_tree_list (NULL_TREE, yyvsp[0].ttype); ;}
    break;

  case 406:
#line 2248 "c-parse.y"
    { yyval.ttype = chainon (yyvsp[-2].ttype, build_tree_list (NULL_TREE, yyvsp[0].ttype)); ;}
    break;

  case 407:
#line 2253 "c-parse.y"
    { yyval.itype = pedantic;
		  pedantic = 0; ;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 4622 "c-parse.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 2257 "c-parse.y"


