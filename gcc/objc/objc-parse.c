/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPENAME = 259,
     SCSPEC = 260,
     TYPESPEC = 261,
     TYPE_QUAL = 262,
     CONSTANT = 263,
     STRING = 264,
     ELLIPSIS = 265,
     SIZEOF = 266,
     ENUM = 267,
     STRUCT = 268,
     UNION = 269,
     IF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     FOR = 274,
     SWITCH = 275,
     CASE = 276,
     DEFAULT = 277,
     BREAK = 278,
     CONTINUE = 279,
     RETURN = 280,
     GOTO = 281,
     ASM_KEYWORD = 282,
     TYPEOF = 283,
     ALIGNOF = 284,
     ATTRIBUTE = 285,
     EXTENSION = 286,
     LABEL = 287,
     REALPART = 288,
     IMAGPART = 289,
     CHOOSE_EXPR = 290,
     TYPES_COMPATIBLE_P = 291,
     ASSIGN = 292,
     OROR = 293,
     ANDAND = 294,
     EQCOMPARE = 295,
     ARITHCOMPARE = 296,
     RSHIFT = 297,
     LSHIFT = 298,
     MINUSMINUS = 299,
     PLUSPLUS = 300,
     UNARY = 301,
     HYPERUNARY = 302,
     POINTSAT = 303,
     INTERFACE = 304,
     IMPLEMENTATION = 305,
     END = 306,
     SELECTOR = 307,
     DEFS = 308,
     ENCODE = 309,
     CLASSNAME = 310,
     PUBLIC = 311,
     PRIVATE = 312,
     PROTECTED = 313,
     PROTOCOL = 314,
     OBJECTNAME = 315,
     CLASS = 316,
     ALIAS = 317,
     OBJC_STRING = 318
   };
#endif
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
#line 33 "objc-parse.y"

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

#include "objc-act.h"

/* Since parsers are distinct for each language, put the language string
   definition here.  */
char *language_string = "GNU Obj-C";

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
#line 65 "objc-parse.y"
typedef union YYSTYPE {long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; } YYSTYPE;
/* Line 190 of yacc.c.  */
#line 235 "objc-parse.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 193 "objc-parse.y"

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

/* Objective-C specific information */

tree objc_interface_context;
tree objc_implementation_context;
tree objc_method_context;
tree objc_ivar_chain;
tree objc_ivar_context;
enum tree_code objc_inherit_code;
int objc_receiver_context;
int objc_public_flag;


/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)
extern void yyprint			PROTO ((FILE *, int, YYSTYPE));


/* Line 213 of yacc.c.  */
#line 285 "objc-parse.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
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
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3752

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  228
/* YYNRULES -- Number of rules. */
#define YYNRULES  570
/* YYNRULES -- Number of states. */
#define YYNSTATES  969

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
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     6,     7,    10,    11,    15,    17,
      19,    21,    27,    30,    34,    39,    44,    47,    50,    53,
      56,    58,    59,    60,    68,    73,    74,    75,    83,    88,
      89,    90,    97,   101,   103,   105,   107,   109,   111,   113,
     115,   117,   119,   121,   123,   125,   126,   128,   130,   134,
     136,   139,   142,   145,   148,   151,   156,   159,   164,   167,
     170,   172,   174,   176,   181,   182,   190,   192,   196,   200,
     204,   208,   212,   216,   220,   224,   228,   232,   236,   240,
     241,   246,   247,   252,   253,   254,   262,   263,   269,   273,
     277,   279,   281,   283,   287,   291,   292,   297,   302,   311,
     318,   323,   327,   331,   334,   337,   339,   341,   343,   345,
     347,   349,   352,   354,   357,   358,   360,   363,   367,   369,
     371,   374,   377,   382,   387,   390,   393,   397,   399,   401,
     404,   407,   408,   409,   414,   419,   423,   427,   430,   433,
     436,   439,   443,   444,   447,   450,   453,   456,   460,   461,
     464,   467,   469,   471,   474,   477,   479,   481,   484,   487,
     490,   494,   495,   498,   500,   502,   504,   507,   510,   512,
     517,   522,   524,   526,   528,   530,   534,   536,   540,   541,
     546,   547,   554,   558,   559,   566,   570,   571,   573,   575,
     578,   585,   587,   591,   592,   594,   599,   606,   611,   613,
     615,   617,   619,   621,   622,   627,   629,   630,   633,   635,
     639,   643,   646,   647,   652,   654,   655,   660,   662,   664,
     666,   669,   672,   673,   674,   680,   681,   682,   688,   690,
     692,   696,   700,   705,   709,   713,   717,   719,   721,   725,
     730,   734,   738,   742,   744,   748,   752,   756,   761,   765,
     769,   771,   773,   776,   778,   781,   783,   786,   787,   795,
     801,   804,   805,   813,   819,   822,   823,   832,   833,   841,
     844,   845,   847,   848,   850,   852,   855,   856,   860,   863,
     868,   872,   874,   878,   880,   882,   885,   887,   891,   896,
     903,   909,   911,   915,   917,   919,   923,   926,   929,   930,
     932,   934,   937,   938,   941,   945,   949,   952,   956,   961,
     965,   968,   972,   975,   979,   981,   983,   986,   989,   990,
     992,   995,   996,   997,   999,  1001,  1004,  1008,  1010,  1013,
    1015,  1018,  1025,  1031,  1037,  1040,  1043,  1048,  1049,  1054,
    1055,  1056,  1060,  1065,  1069,  1071,  1073,  1075,  1077,  1080,
    1081,  1086,  1088,  1092,  1093,  1094,  1102,  1108,  1111,  1112,
    1113,  1114,  1127,  1128,  1135,  1138,  1141,  1144,  1148,  1155,
    1164,  1175,  1188,  1192,  1197,  1199,  1201,  1202,  1209,  1213,
    1219,  1222,  1226,  1227,  1229,  1230,  1232,  1233,  1235,  1237,
    1241,  1246,  1248,  1252,  1253,  1256,  1259,  1260,  1265,  1268,
    1269,  1271,  1273,  1277,  1279,  1283,  1288,  1293,  1298,  1303,
    1308,  1309,  1312,  1314,  1317,  1319,  1323,  1325,  1329,  1331,
    1333,  1335,  1337,  1339,  1341,  1343,  1345,  1349,  1353,  1358,
    1359,  1360,  1371,  1372,  1379,  1380,  1381,  1394,  1395,  1404,
    1405,  1412,  1415,  1416,  1425,  1430,  1431,  1441,  1447,  1448,
    1455,  1456,  1458,  1462,  1466,  1468,  1470,  1472,  1474,  1475,
    1479,  1482,  1486,  1490,  1492,  1493,  1495,  1499,  1501,  1505,
    1508,  1509,  1510,  1511,  1519,  1520,  1521,  1522,  1530,  1531,
    1532,  1535,  1537,  1539,  1542,  1543,  1547,  1549,  1551,  1552,
    1553,  1559,  1560,  1561,  1567,  1572,  1574,  1580,  1583,  1584,
    1587,  1588,  1590,  1592,  1594,  1597,  1600,  1605,  1608,  1611,
    1613,  1617,  1620,  1623,  1626,  1627,  1630,  1631,  1635,  1637,
    1639,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,  1658,
    1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,  1678,
    1680,  1682,  1684,  1686,  1688,  1690,  1692,  1699,  1703,  1709,
    1712,  1714,  1716,  1718,  1721,  1723,  1727,  1730,  1732,  1734,
    1735,  1736,  1743,  1745,  1747,  1749,  1752,  1755,  1757,  1762,
    1767
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      87,     0,    -1,    -1,    88,    -1,    -1,    89,    91,    -1,
      -1,    88,    90,    91,    -1,    93,    -1,    92,    -1,   245,
      -1,    27,    60,   102,    78,    79,    -1,   244,    91,    -1,
     126,   140,    79,    -1,   133,   126,   140,    79,    -1,   129,
     126,   139,    79,    -1,   133,    79,    -1,   129,    79,    -1,
       1,    79,    -1,     1,    80,    -1,    79,    -1,    -1,    -1,
     129,   126,   168,    94,   120,    95,   202,    -1,   129,   126,
     168,     1,    -1,    -1,    -1,   133,   126,   171,    96,   120,
      97,   202,    -1,   133,   126,   171,     1,    -1,    -1,    -1,
     126,   171,    98,   120,    99,   202,    -1,   126,   171,     1,
      -1,     3,    -1,     4,    -1,    74,    -1,    69,    -1,    45,
      -1,    51,    -1,    50,    -1,    56,    -1,    55,    -1,    81,
      -1,    82,    -1,   104,    -1,    -1,   104,    -1,   110,    -1,
     104,    83,   110,    -1,   116,    -1,    52,   108,    -1,   244,
     108,    -1,   101,   108,    -1,    42,   100,    -1,   106,   105,
      -1,   106,    60,   189,    78,    -1,   107,   105,    -1,   107,
      60,   189,    78,    -1,    33,   108,    -1,    34,   108,    -1,
      11,    -1,    29,    -1,   105,    -1,    60,   189,    78,   108,
      -1,    -1,    60,   189,    78,    84,   109,   154,    80,    -1,
     108,    -1,   110,    50,   110,    -1,   110,    51,   110,    -1,
     110,    52,   110,    -1,   110,    53,   110,    -1,   110,    54,
     110,    -1,   110,    49,   110,    -1,   110,    48,   110,    -1,
     110,    47,   110,    -1,   110,    46,   110,    -1,   110,    45,
     110,    -1,   110,    43,   110,    -1,   110,    44,   110,    -1,
      -1,   110,    42,   111,   110,    -1,    -1,   110,    41,   112,
     110,    -1,    -1,    -1,   110,    39,   113,   102,    40,   114,
     110,    -1,    -1,   110,    39,   115,    40,   110,    -1,   110,
      37,   110,    -1,   110,    38,   110,    -1,     3,    -1,     8,
      -1,   118,    -1,    60,   102,    78,    -1,    60,     1,    78,
      -1,    -1,    60,   117,   204,    78,    -1,   116,    60,   103,
      78,    -1,    35,    60,   110,    83,   110,    83,   110,    78,
      -1,    36,    60,   189,    83,   189,    78,    -1,   116,    61,
     102,    85,    -1,   116,    59,   100,    -1,   116,    62,   100,
      -1,   116,    56,    -1,   116,    55,    -1,   305,    -1,   311,
      -1,   312,    -1,   313,    -1,   119,    -1,     9,    -1,   118,
       9,    -1,    77,    -1,   119,    77,    -1,    -1,   122,    -1,
     122,    10,    -1,   209,   210,   123,    -1,   121,    -1,   197,
      -1,   122,   121,    -1,   121,   197,    -1,   131,   126,   139,
      79,    -1,   134,   126,   140,    79,    -1,   131,    79,    -1,
     134,    79,    -1,   209,   210,   128,    -1,   124,    -1,   197,
      -1,   125,   124,    -1,   124,   197,    -1,    -1,    -1,   129,
     126,   139,    79,    -1,   133,   126,   140,    79,    -1,   129,
     126,   162,    -1,   133,   126,   165,    -1,   129,    79,    -1,
     133,    79,    -1,   244,   128,    -1,   137,   130,    -1,   133,
     137,   130,    -1,    -1,   130,   138,    -1,   130,     5,    -1,
     130,   147,    -1,   137,   132,    -1,   134,   137,   132,    -1,
      -1,   132,   138,    -1,   132,     5,    -1,   134,    -1,   147,
      -1,   133,   134,    -1,   133,   147,    -1,     7,    -1,     5,
      -1,   134,     7,    -1,   134,     5,    -1,   137,   136,    -1,
     191,   137,   136,    -1,    -1,   136,   138,    -1,     6,    -1,
     175,    -1,     4,    -1,    69,   261,    -1,    74,   261,    -1,
     262,    -1,    28,    60,   102,    78,    -1,    28,    60,   189,
      78,    -1,     6,    -1,     7,    -1,   175,    -1,   142,    -1,
     139,    83,   142,    -1,   144,    -1,   140,    83,   142,    -1,
      -1,    27,    60,   118,    78,    -1,    -1,   168,   141,   146,
      37,   143,   152,    -1,   168,   141,   146,    -1,    -1,   171,
     141,   146,    37,   145,   152,    -1,   171,   141,   146,    -1,
      -1,   147,    -1,   148,    -1,   147,   148,    -1,    30,    60,
      60,   149,    78,    78,    -1,   150,    -1,   149,    83,   150,
      -1,    -1,   151,    -1,   151,    60,     3,    78,    -1,   151,
      60,     3,    83,   104,    78,    -1,   151,    60,   103,    78,
      -1,   100,    -1,     5,    -1,     6,    -1,     7,    -1,   110,
      -1,    -1,    84,   153,   154,    80,    -1,     1,    -1,    -1,
     155,   180,    -1,   156,    -1,   155,    83,   156,    -1,   160,
      37,   158,    -1,   161,   158,    -1,    -1,   100,    40,   157,
     158,    -1,   158,    -1,    -1,    84,   159,   154,    80,    -1,
     110,    -1,     1,    -1,   161,    -1,   160,   161,    -1,    59,
     100,    -1,    -1,    -1,   168,   163,   120,   164,   204,    -1,
      -1,    -1,   171,   166,   120,   167,   204,    -1,   169,    -1,
     171,    -1,    60,   169,    78,    -1,   169,    60,   239,    -1,
     169,    61,   102,    85,    -1,   169,    61,    85,    -1,    52,
     192,   169,    -1,   147,   127,   169,    -1,     4,    -1,    74,
      -1,   170,    60,   239,    -1,   170,    61,   102,    85,    -1,
     170,    61,    85,    -1,    52,   192,   170,    -1,   147,   127,
     170,    -1,     4,    -1,   171,    60,   239,    -1,    60,   171,
      78,    -1,    52,   192,   171,    -1,   171,    61,   102,    85,
      -1,   171,    61,    85,    -1,   147,   127,   171,    -1,     3,
      -1,    13,    -1,    13,   147,    -1,    14,    -1,    14,   147,
      -1,    12,    -1,    12,   147,    -1,    -1,   172,   100,    84,
     176,   182,    80,   146,    -1,   172,    84,   182,    80,   146,
      -1,   172,   100,    -1,    -1,   173,   100,    84,   177,   182,
      80,   146,    -1,   173,    84,   182,    80,   146,    -1,   173,
     100,    -1,    -1,   174,   100,    84,   178,   187,   181,    80,
     146,    -1,    -1,   174,    84,   179,   187,   181,    80,   146,
      -1,   174,   100,    -1,    -1,    83,    -1,    -1,    83,    -1,
     183,    -1,   183,   184,    -1,    -1,   183,   184,    79,    -1,
     183,    79,    -1,    67,    60,    69,    78,    -1,   135,   126,
     185,    -1,   135,    -1,   191,   126,   185,    -1,   191,    -1,
       1,    -1,   244,   184,    -1,   186,    -1,   185,    83,   186,
      -1,   209,   210,   168,   146,    -1,   209,   210,   168,    40,
     110,   146,    -1,   209,   210,    40,   110,   146,    -1,   188,
      -1,   187,    83,   188,    -1,     1,    -1,   100,    -1,   100,
      37,   110,    -1,   135,   190,    -1,   191,   190,    -1,    -1,
     193,    -1,     7,    -1,   191,     7,    -1,    -1,   192,     7,
      -1,    60,   193,    78,    -1,    52,   192,   193,    -1,    52,
     192,    -1,   193,    60,   232,    -1,   193,    61,   102,    85,
      -1,   193,    61,    85,    -1,    60,   232,    -1,    61,   102,
      85,    -1,    61,    85,    -1,   147,   127,   193,    -1,   195,
      -1,   212,    -1,   195,   212,    -1,   195,   197,    -1,    -1,
     194,    -1,     1,    79,    -1,    -1,    -1,   200,    -1,   201,
      -1,   200,   201,    -1,    32,   243,    79,    -1,   204,    -1,
       1,   204,    -1,    84,    -1,   203,    80,    -1,   203,   198,
     199,   125,   196,    80,    -1,   203,   198,   199,     1,    80,
      -1,   203,   198,   199,   194,    80,    -1,   206,   211,    -1,
     206,     1,    -1,    15,    60,   102,    78,    -1,    -1,    18,
     208,   211,    17,    -1,    -1,    -1,   209,   210,   214,    -1,
     209,   210,   225,   211,    -1,   209,   210,   213,    -1,   214,
      -1,   225,    -1,   204,    -1,   222,    -1,   102,    79,    -1,
      -1,   205,    16,   215,   211,    -1,   205,    -1,   205,    16,
       1,    -1,    -1,    -1,    17,   216,    60,   102,    78,   217,
     211,    -1,   207,    60,   102,    78,    79,    -1,   207,     1,
      -1,    -1,    -1,    -1,    19,    60,   227,    79,   218,   227,
      79,   219,   227,    78,   220,   211,    -1,    -1,    20,    60,
     102,    78,   221,   211,    -1,    23,    79,    -1,    24,    79,
      -1,    25,    79,    -1,    25,   102,    79,    -1,    27,   226,
      60,   102,    78,    79,    -1,    27,   226,    60,   102,    40,
     228,    78,    79,    -1,    27,   226,    60,   102,    40,   228,
      40,   228,    78,    79,    -1,    27,   226,    60,   102,    40,
     228,    40,   228,    40,   231,    78,    79,    -1,    26,   100,
      79,    -1,    26,    52,   102,    79,    -1,    79,    -1,   223,
      -1,    -1,    19,    60,   116,    78,   224,   211,    -1,    21,
     110,    40,    -1,    21,   110,    10,   110,    40,    -1,    22,
      40,    -1,   100,    40,   146,    -1,    -1,     7,    -1,    -1,
     102,    -1,    -1,   229,    -1,   230,    -1,   229,    83,   230,
      -1,     9,    60,   102,    78,    -1,   118,    -1,   231,    83,
     118,    -1,    -1,   233,   234,    -1,   236,    78,    -1,    -1,
     237,    79,   235,   234,    -1,     1,    78,    -1,    -1,    10,
      -1,   237,    -1,   237,    83,    10,    -1,   238,    -1,   237,
      83,   238,    -1,   129,   126,   170,   146,    -1,   129,   126,
     171,   146,    -1,   129,   126,   190,   146,    -1,   133,   126,
     171,   146,    -1,   133,   126,   190,   146,    -1,    -1,   240,
     241,    -1,   234,    -1,   242,    78,    -1,     3,    -1,   242,
      83,     3,    -1,   100,    -1,   243,    83,   100,    -1,    31,
      -1,   249,    -1,   247,    -1,   248,    -1,   259,    -1,   269,
      -1,    65,    -1,   100,    -1,   246,    83,   100,    -1,    75,
     246,    79,    -1,    76,   100,   100,    79,    -1,    -1,    -1,
      63,   100,   261,    84,   250,   263,    80,   251,   276,    65,
      -1,    -1,    63,   100,   261,   252,   276,    65,    -1,    -1,
      -1,    63,   100,    40,   100,   261,    84,   253,   263,    80,
     254,   276,    65,    -1,    -1,    63,   100,    40,   100,   261,
     255,   276,    65,    -1,    -1,    64,   100,    84,   256,   263,
      80,    -1,    64,   100,    -1,    -1,    64,   100,    40,   100,
      84,   257,   263,    80,    -1,    64,   100,    40,   100,    -1,
      -1,    63,   100,    60,   100,    78,   261,   258,   276,    65,
      -1,    64,   100,    60,   100,    78,    -1,    -1,    73,   100,
     261,   260,   276,    65,    -1,    -1,   262,    -1,    47,   246,
      47,    -1,   263,   264,   265,    -1,   265,    -1,    71,    -1,
      72,    -1,    70,    -1,    -1,   265,   266,    79,    -1,   265,
      79,    -1,   135,   126,   267,    -1,   191,   126,   267,    -1,
       1,    -1,    -1,   268,    -1,   267,    83,   268,    -1,   168,
      -1,   168,    40,   110,    -1,    40,   110,    -1,    -1,    -1,
      -1,    50,   270,   286,   271,   287,   272,   202,    -1,    -1,
      -1,    -1,    51,   273,   286,   274,   287,   275,   202,    -1,
      -1,    -1,   277,   278,    -1,   281,    -1,    92,    -1,   278,
     281,    -1,    -1,   278,   279,    92,    -1,    79,    -1,     1,
      -1,    -1,    -1,    50,   282,   286,   283,   280,    -1,    -1,
      -1,    51,   284,   286,   285,   280,    -1,    60,   189,    78,
     295,    -1,   295,    -1,    60,   189,    78,   296,   293,    -1,
     296,   293,    -1,    -1,    79,   288,    -1,    -1,   289,    -1,
     290,    -1,   197,    -1,   289,   290,    -1,   290,   197,    -1,
     129,   126,   291,    79,    -1,   129,    79,    -1,   133,    79,
      -1,   292,    -1,   291,    83,   292,    -1,   170,   146,    -1,
     171,   146,    -1,   190,   146,    -1,    -1,    83,    10,    -1,
      -1,    83,   294,   236,    -1,   297,    -1,   299,    -1,   296,
     299,    -1,     3,    -1,     4,    -1,    74,    -1,   298,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    11,    -1,    28,    -1,    29,    -1,     6,    -1,
       7,    -1,   297,    40,    60,   189,    78,   100,    -1,   297,
      40,   100,    -1,    40,    60,   189,    78,   100,    -1,    40,
     100,    -1,   297,    -1,   301,    -1,   303,    -1,   301,   303,
      -1,   104,    -1,   297,    40,   302,    -1,    40,   302,    -1,
     102,    -1,    69,    -1,    -1,    -1,    61,   306,   304,   307,
     300,    85,    -1,   297,    -1,   309,    -1,   310,    -1,   309,
     310,    -1,   297,    40,    -1,    40,    -1,    66,    60,   308,
      78,    -1,    73,    60,   100,    78,    -1,    68,    60,   189,
      78,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   234,   234,   238,   253,   253,   254,   254,   258,   259,
     260,   261,   269,   274,   284,   289,   294,   296,   298,   299,
     300,   307,   312,   306,   319,   325,   330,   324,   337,   343,
     348,   342,   355,   363,   364,   365,   366,   369,   371,   373,
     375,   377,   379,   381,   385,   391,   392,   396,   398,   403,
     404,   407,   410,   414,   442,   448,   451,   454,   457,   459,
     464,   468,   472,   473,   477,   476,   508,   509,   511,   513,
     515,   517,   519,   521,   523,   525,   527,   529,   531,   534,
     533,   540,   539,   546,   549,   545,   555,   554,   564,   572,
     584,   743,   744,   746,   752,   755,   754,   791,   793,   803,
     812,   814,   826,   840,   842,   844,   846,   848,   850,   852,
     858,   859,   866,   867,   871,   873,   874,   885,   890,   891,
     892,   893,   901,   906,   911,   914,   923,   928,   929,   930,
     931,   939,   950,   954,   959,   964,   969,   974,   976,   978,
     988,   990,   995,   996,   998,  1003,  1008,  1010,  1016,  1017,
    1019,  1032,  1034,  1036,  1038,  1043,  1046,  1048,  1051,  1065,
    1067,  1072,  1073,  1081,  1082,  1083,  1087,  1089,  1094,  1096,
    1098,  1104,  1105,  1106,  1110,  1111,  1115,  1116,  1121,  1122,
    1130,  1129,  1137,  1146,  1145,  1154,  1163,  1164,  1169,  1171,
    1176,  1181,  1183,  1189,  1190,  1192,  1194,  1196,  1204,  1205,
    1206,  1207,  1213,  1215,  1214,  1227,  1234,  1236,  1240,  1241,
    1247,  1248,  1250,  1249,  1252,  1257,  1256,  1260,  1262,  1266,
    1267,  1271,  1280,  1289,  1279,  1303,  1312,  1302,  1328,  1329,
    1335,  1337,  1342,  1344,  1346,  1353,  1355,  1356,  1365,  1370,
    1372,  1374,  1381,  1383,  1390,  1395,  1397,  1399,  1401,  1408,
    1410,  1414,  1416,  1421,  1423,  1428,  1430,  1436,  1435,  1441,
    1445,  1448,  1447,  1451,  1455,  1458,  1457,  1464,  1463,  1469,
    1473,  1475,  1478,  1480,  1486,  1488,  1494,  1495,  1497,  1501,
    1526,  1532,  1537,  1543,  1548,  1550,  1556,  1557,  1562,  1565,
    1569,  1580,  1581,  1586,  1592,  1594,  1599,  1601,  1607,  1608,
    1612,  1614,  1620,  1621,  1626,  1629,  1631,  1633,  1635,  1637,
    1639,  1641,  1643,  1647,  1656,  1664,  1665,  1667,  1671,  1673,
    1676,  1680,  1692,  1694,  1700,  1701,  1705,  1719,  1721,  1724,
    1726,  1728,  1736,  1744,  1756,  1760,  1764,  1779,  1778,  1791,
    1795,  1799,  1804,  1809,  1814,  1816,  1822,  1824,  1825,  1843,
    1842,  1850,  1862,  1865,  1875,  1864,  1885,  1893,  1898,  1910,
    1913,  1896,  1940,  1939,  1953,  1958,  1963,  1967,  1971,  1982,
    1989,  1996,  2003,  2014,  2020,  2024,  2030,  2029,  2085,  2116,
    2147,  2162,  2178,  2180,  2186,  2187,  2193,  2194,  2198,  2199,
    2204,  2209,  2211,  2218,  2218,  2228,  2230,  2229,  2239,  2246,
    2247,  2257,  2259,  2264,  2266,  2273,  2282,  2291,  2300,  2310,
    2325,  2325,  2335,  2336,  2346,  2348,  2354,  2356,  2361,  2369,
    2370,  2371,  2372,  2373,  2374,  2389,  2391,  2396,  2402,  2409,
    2415,  2408,  2426,  2425,  2439,  2445,  2438,  2456,  2455,  2469,
    2468,  2480,  2489,  2488,  2500,  2509,  2508,  2521,  2532,  2531,
    2547,  2550,  2554,  2564,  2565,  2569,  2570,  2571,  2576,  2579,
    2580,  2598,  2604,  2610,  2616,  2617,  2618,  2622,  2629,  2635,
    2646,  2654,  2661,  2645,  2671,  2679,  2686,  2670,  2700,  2702,
    2702,  2706,  2707,  2708,  2709,  2709,  2713,  2714,  2719,  2725,
    2718,  2733,  2739,  2732,  2748,  2753,  2758,  2763,  2772,  2774,
    2780,  2782,  2786,  2787,  2788,  2789,  2793,  2798,  2800,  2805,
    2807,  2815,  2820,  2825,  2834,  2837,  2843,  2842,  2855,  2859,
    2861,  2868,  2869,  2870,  2871,  2875,  2876,  2877,  2878,  2879,
    2880,  2881,  2882,  2883,  2884,  2885,  2886,  2887,  2888,  2889,
    2890,  2891,  2892,  2893,  2894,  2894,  2898,  2903,  2908,  2913,
    2920,  2921,  2925,  2926,  2934,  2946,  2950,  2957,  2958,  2966,
    2968,  2965,  2976,  2977,  2981,  2982,  2989,  2993,  3000,  3007,
    3016
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
  "'~'", "'!'", "','", "'{'", "']'", "$accept", "program", "extdefs", "@1",
  "@2", "extdef", "datadef", "fndef", "@3", "@4", "@5", "@6", "@7", "@8",
  "identifier", "unop", "expr", "exprlist", "nonnull_exprlist",
  "unary_expr", "sizeof", "alignof", "cast_expr", "@9", "expr_no_commas",
  "@10", "@11", "@12", "@13", "@14", "primary", "@15", "string",
  "objc_string", "old_style_parm_decls", "lineno_datadecl", "datadecls",
  "datadecl", "lineno_decl", "decls", "setspecs", "setattrs", "decl",
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
  "nonnull_asm_operands", "asm_operand", "asm_clobbers", "parmlist", "@38",
  "parmlist_1", "@39", "parmlist_2", "parms", "parm",
  "parmlist_or_identifiers", "@40", "parmlist_or_identifiers_1",
  "identifiers", "identifiers_or_typenames", "extension", "objcdef",
  "identifier_list", "classdecl", "aliasdecl", "classdef", "@41", "@42",
  "@43", "@44", "@45", "@46", "@47", "@48", "@49", "protocoldef", "@50",
  "protocolrefs", "non_empty_protocolrefs", "ivar_decl_list",
  "visibility_spec", "ivar_decls", "ivar_decl", "ivars", "ivar_declarator",
  "methoddef", "@51", "@52", "@53", "@54", "@55", "@56", "methodprotolist",
  "@57", "methodprotolist2", "@58", "semi_or_error", "methodproto", "@59",
  "@60", "@61", "@62", "methoddecl", "optarglist", "myxdecls", "mydecls",
  "mydecl", "myparms", "myparm", "optparmlist", "@63", "unaryselector",
  "keywordselector", "selector", "reservedwords", "keyworddecl",
  "messageargs", "keywordarglist", "keywordexpr", "keywordarg", "receiver",
  "objcmessageexpr", "@64", "@65", "selectorarg", "keywordnamelist",
  "keywordname", "objcselectorexpr", "objcprotocolexpr", "objcencodeexpr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
static const unsigned short int yyr1[] =
{
       0,    86,    87,    87,    89,    88,    90,    88,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    94,    95,    93,    93,    96,    97,    93,    93,    98,
      99,    93,    93,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   108,   108,   109,   108,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     110,   112,   110,   113,   114,   110,   115,   110,   110,   110,
     116,   116,   116,   116,   116,   117,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     118,   118,   119,   119,   120,   120,   120,   121,   122,   122,
     122,   122,   123,   123,   123,   123,   124,   125,   125,   125,
     125,   126,   127,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   130,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   133,   133,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   140,   140,   141,   141,
     143,   142,   142,   145,   144,   144,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   152,   153,   152,   152,   154,   154,   155,   155,
     156,   156,   157,   156,   156,   159,   158,   158,   158,   160,
     160,   161,   163,   164,   162,   166,   167,   165,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   176,   175,   175,
     175,   177,   175,   175,   175,   178,   175,   179,   175,   175,
     180,   180,   181,   181,   182,   182,   183,   183,   183,   183,
     184,   184,   184,   184,   184,   184,   185,   185,   186,   186,
     186,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   194,   195,   195,   195,   196,   196,
     197,   198,   199,   199,   200,   200,   201,   202,   202,   203,
     204,   204,   204,   204,   205,   205,   206,   208,   207,   209,
     210,   211,   211,   212,   213,   213,   214,   214,   214,   215,
     214,   214,   214,   216,   217,   214,   214,   214,   218,   219,
     220,   214,   221,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   222,   224,   223,   225,   225,
     225,   225,   226,   226,   227,   227,   228,   228,   229,   229,
     230,   231,   231,   233,   232,   234,   235,   234,   234,   236,
     236,   236,   236,   237,   237,   238,   238,   238,   238,   238,
     240,   239,   241,   241,   242,   242,   243,   243,   244,   245,
     245,   245,   245,   245,   245,   246,   246,   247,   248,   250,
     251,   249,   252,   249,   253,   254,   249,   255,   249,   256,
     249,   249,   257,   249,   249,   258,   249,   249,   260,   259,
     261,   261,   262,   263,   263,   264,   264,   264,   265,   265,
     265,   266,   266,   266,   267,   267,   267,   268,   268,   268,
     270,   271,   272,   269,   273,   274,   275,   269,   276,   277,
     276,   278,   278,   278,   279,   278,   280,   280,   282,   283,
     281,   284,   285,   281,   286,   286,   286,   286,   287,   287,
     288,   288,   289,   289,   289,   289,   290,   290,   290,   291,
     291,   292,   292,   292,   293,   293,   294,   293,   295,   296,
     296,   297,   297,   297,   297,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   299,   299,   299,   299,
     300,   300,   301,   301,   302,   303,   303,   304,   304,   306,
     307,   305,   308,   308,   309,   309,   310,   310,   311,   312,
     313
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     0,     2,     0,     3,     1,     1,
       1,     5,     2,     3,     4,     4,     2,     2,     2,     2,
       1,     0,     0,     7,     4,     0,     0,     7,     4,     0,
       0,     6,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     4,     2,     4,     2,     2,
       1,     1,     1,     4,     0,     7,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       4,     0,     4,     0,     0,     7,     0,     5,     3,     3,
       1,     1,     1,     3,     3,     0,     4,     4,     8,     6,
       4,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     0,     1,     2,     3,     1,     1,
       2,     2,     4,     4,     2,     2,     3,     1,     1,     2,
       2,     0,     0,     4,     4,     3,     3,     2,     2,     2,
       2,     3,     0,     2,     2,     2,     2,     3,     0,     2,
       2,     1,     1,     2,     2,     1,     1,     2,     2,     2,
       3,     0,     2,     1,     1,     1,     2,     2,     1,     4,
       4,     1,     1,     1,     1,     3,     1,     3,     0,     4,
       0,     6,     3,     0,     6,     3,     0,     1,     1,     2,
       6,     1,     3,     0,     1,     4,     6,     4,     1,     1,
       1,     1,     1,     0,     4,     1,     0,     2,     1,     3,
       3,     2,     0,     4,     1,     0,     4,     1,     1,     1,
       2,     2,     0,     0,     5,     0,     0,     5,     1,     1,
       3,     3,     4,     3,     3,     3,     1,     1,     3,     4,
       3,     3,     3,     1,     3,     3,     3,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     2,     0,     7,     5,
       2,     0,     7,     5,     2,     0,     8,     0,     7,     2,
       0,     1,     0,     1,     1,     2,     0,     3,     2,     4,
       3,     1,     3,     1,     1,     2,     1,     3,     4,     6,
       5,     1,     3,     1,     1,     3,     2,     2,     0,     1,
       1,     2,     0,     2,     3,     3,     2,     3,     4,     3,
       2,     3,     2,     3,     1,     1,     2,     2,     0,     1,
       2,     0,     0,     1,     1,     2,     3,     1,     2,     1,
       2,     6,     5,     5,     2,     2,     4,     0,     4,     0,
       0,     3,     4,     3,     1,     1,     1,     1,     2,     0,
       4,     1,     3,     0,     0,     7,     5,     2,     0,     0,
       0,    12,     0,     6,     2,     2,     2,     3,     6,     8,
      10,    12,     3,     4,     1,     1,     0,     6,     3,     5,
       2,     3,     0,     1,     0,     1,     0,     1,     1,     3,
       4,     1,     3,     0,     2,     2,     0,     4,     2,     0,
       1,     1,     3,     1,     3,     4,     4,     4,     4,     4,
       0,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     0,
       0,    10,     0,     6,     0,     0,    12,     0,     8,     0,
       6,     2,     0,     8,     4,     0,     9,     5,     0,     6,
       0,     1,     3,     3,     1,     1,     1,     1,     0,     3,
       2,     3,     3,     1,     0,     1,     3,     1,     3,     2,
       0,     0,     0,     7,     0,     0,     0,     7,     0,     0,
       2,     1,     1,     2,     0,     3,     1,     1,     0,     0,
       5,     0,     0,     5,     4,     1,     5,     2,     0,     2,
       0,     1,     1,     1,     2,     2,     4,     2,     2,     1,
       3,     2,     2,     2,     0,     2,     0,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     3,     5,     2,
       1,     1,     1,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     1,     1,     2,     2,     1,     4,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   165,   156,   163,
     155,   255,   251,   253,     0,     0,     0,   418,     0,   470,
     474,     0,     0,   424,   450,     0,   450,     0,     0,    20,
       5,     9,     8,     0,   131,   131,   151,   142,   152,   188,
       0,     0,     0,   164,     0,    10,   420,   421,   419,   422,
     168,   423,     7,    18,    19,   256,   252,   254,     0,     0,
       0,    33,    34,    36,    35,   425,     0,     0,     0,   450,
     441,   166,   451,   450,   167,     0,     0,   250,   302,     0,
       0,   176,   132,     0,    17,     0,    16,     0,   153,   142,
     154,   158,   157,   140,   189,   276,   260,   276,   264,   267,
     269,    12,    90,    91,   110,    60,    61,     0,     0,     0,
       0,     0,    37,    39,    38,     0,    41,    40,     0,   559,
       0,     0,     0,   112,    42,    43,     0,     0,    44,    62,
       0,     0,    66,    47,    49,    92,   109,     0,   105,   106,
     107,   108,   300,     0,   298,   161,     0,   298,   193,   452,
       0,   521,   522,   544,   545,   541,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   542,   543,     0,     0,   523,   471,   495,   514,
     518,   524,   519,   475,     0,     0,   432,     0,     0,   439,
     448,   427,     0,     0,     0,    13,     0,     0,    32,     0,
     410,     0,     0,   186,   236,   302,     0,   237,     0,   174,
     132,     0,   228,   229,     0,     0,   141,   144,   171,   172,
     143,   145,   173,     0,     0,     0,   257,     0,   261,     0,
     265,    58,    59,     0,     0,    53,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    54,
       0,    56,     0,     0,    83,    81,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     103,     0,    45,     0,     0,   111,   113,    51,   169,   302,
     393,     0,   132,   296,   299,   159,   170,   301,   161,   297,
     199,   200,   201,   198,     0,   191,   194,   426,     0,   549,
       0,   498,   516,   497,     0,   520,     0,   498,   450,     0,
     429,   479,   444,     0,   458,   479,   428,   303,   246,   245,
     177,   178,   249,     0,   244,     0,   248,     0,     0,    30,
       0,   339,   119,   340,   185,   187,     0,     0,    15,     0,
       0,    24,     0,   186,   410,     0,    14,    28,     0,     0,
     186,   284,   278,   131,   275,   131,     0,   276,   186,   276,
     293,   294,   272,   291,     0,     0,     0,    94,    93,   329,
     321,     0,     0,   558,   557,   560,   567,   562,     0,   563,
     564,     0,     0,    11,    48,     0,     0,    88,    89,     0,
       0,     0,     0,    77,    78,    76,    75,    74,    73,    72,
      67,    68,    69,    70,    71,   101,     0,    46,     0,   102,
     306,     0,   310,     0,   312,     0,     0,   393,     0,   162,
     160,     0,   193,    45,     0,     0,     0,   472,   515,   399,
       0,   547,   476,   437,   450,   458,     0,     0,   442,   447,
       0,     0,     0,     0,     0,   414,   400,   131,   131,   412,
       0,   401,   403,   411,     0,   247,   320,     0,   121,   116,
     120,     0,   183,   234,   230,   175,   235,    22,   182,   231,
     233,     0,    26,     0,   259,   339,   277,   339,   285,     0,
     263,     0,     0,   273,     0,   272,     0,     0,   330,   322,
      96,    64,    63,     0,   566,   568,     0,   565,   570,   569,
      55,    57,     0,     0,    82,    80,    97,   100,   305,   304,
     394,   311,   313,   307,   309,     0,   190,   192,    90,     0,
       0,   494,   514,   131,     0,   503,   499,   501,     0,     0,
     517,   401,     0,     0,   434,   479,   445,     0,   433,   488,
     491,   482,     0,   131,   131,   484,   481,   458,   457,   455,
     456,   440,   458,   463,   460,   131,   131,     0,   449,   179,
     398,   298,   298,   395,   396,     0,   413,     0,     0,    31,
     327,   117,   131,   131,   148,     0,     0,   180,   232,     0,
     279,   280,   286,   340,   282,   186,   186,   295,   292,   186,
       0,     0,     0,     0,     0,   323,   324,     0,     0,   550,
       0,   551,   552,    84,    87,   308,   195,     0,   197,   548,
     496,   507,   298,   508,   504,   505,   473,     0,   477,   458,
       0,   479,   430,     0,     0,   178,     0,     0,     0,   483,
       0,     0,   464,   464,   459,   243,   302,   393,   132,   186,
     186,   186,   302,   132,   186,   186,     0,   402,   404,   415,
     328,   124,     0,   125,     0,   148,   146,   205,   203,   202,
     184,    23,     0,    27,   339,     0,   258,   262,   268,   186,
       0,    99,   416,     0,     0,     0,   339,     0,     0,   128,
     340,   315,   325,   218,    90,     0,   215,     0,   217,     0,
     270,   208,   214,     0,     0,   554,   556,     0,   561,     0,
     553,     0,     0,   186,   186,   186,     0,   509,   546,     0,
     438,     0,   479,   489,   492,   485,   443,     0,   467,   461,
     465,   462,   306,     0,   410,     0,   405,   406,   407,   306,
       0,   408,   409,   397,     0,     0,   147,   150,   149,     0,
     181,   287,     0,   186,   266,     0,   326,     0,   332,   130,
     129,   319,     0,   333,   317,   340,   316,     0,   221,     0,
     212,    65,     0,   207,     0,   220,   211,   555,    85,   196,
     511,   512,   513,   506,   298,   435,   446,     0,     0,     0,
     469,     0,     0,   241,   242,   238,   240,     0,   122,   123,
       0,   186,     0,   288,    98,   417,   331,     0,   165,     0,
     353,   337,     0,     0,     0,     0,     0,     0,     0,     0,
     382,   450,   450,   374,     0,     0,   126,   131,   131,   346,
     351,     0,     0,   343,   344,   347,   375,   345,     0,     0,
       0,   209,   210,   510,   479,   431,   487,   486,   490,   493,
     468,   466,   239,   204,   290,   186,     0,     0,   339,   384,
       0,     0,   380,   364,   365,   366,     0,     0,     0,   383,
       0,   186,   348,   137,     0,   138,     0,     0,   335,   340,
     334,   357,     0,   139,   216,   213,     0,   289,     0,     0,
       0,   385,    49,     0,     0,     0,   378,   367,     0,   372,
       0,   381,     0,   135,   222,     0,   136,   225,   352,   339,
       0,     0,   436,   336,     0,   338,   376,   358,   362,     0,
     373,     0,   133,     0,   134,     0,   350,   341,   339,     0,
     354,   339,   384,   339,   379,   386,     0,   223,   226,   342,
     356,   339,   377,     0,   363,     0,     0,   387,   388,   368,
       0,     0,   355,   359,     0,   386,     0,     0,   224,   227,
     384,     0,     0,   369,   389,     0,   390,     0,     0,   360,
     391,     0,   370,   339,     0,     0,   361,   371,   392
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,     3,     5,    30,    31,    32,   342,   576,
     348,   579,   202,   457,   687,   126,   238,   406,   128,   129,
     130,   131,   132,   597,   133,   392,   391,   389,   701,   390,
     134,   239,   135,   136,   329,   330,   331,   571,   675,   676,
      33,   197,   816,   447,    93,   572,   656,   448,    36,   144,
     285,    37,   220,   208,    80,   203,   209,   662,    81,   575,
     334,   335,    39,   294,   295,   296,   660,   739,   689,   690,
     691,   830,   692,   759,   693,   694,   893,   913,   940,   896,
     915,   941,   321,   212,   703,   213,    40,    41,    42,    43,
     357,   359,   364,   229,   763,   484,   224,   225,   354,   581,
     582,   362,   363,   146,   705,   147,   193,   284,   677,   678,
     752,   332,   489,   594,   595,   596,   569,   370,   570,   820,
     821,   822,   848,   869,   461,   870,   681,   823,   824,   899,
     847,   931,   922,   950,   963,   923,   825,   826,   921,   827,
     860,   883,   936,   937,   938,   961,   412,   413,   449,   646,
     450,   451,   452,   324,   325,   453,   454,   673,   137,    45,
      66,    46,    47,    48,   435,   712,   311,   619,   834,   535,
     314,   547,   621,    49,   315,    71,    50,   440,   552,   441,
     557,   719,   720,    51,    67,   301,   529,    68,   307,   533,
     436,   437,   545,   628,   838,   546,   623,   778,   624,   779,
     177,   427,   526,   527,   528,   706,   707,   303,   429,   178,
     179,   180,   181,   182,   600,   601,   696,   602,   375,   138,
     241,   493,   378,   379,   380,   139,   140,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -813
static const short int yypact[] =
{
     135,   151,   163,  3097,  -813,  3097,   153,  -813,  -813,  -813,
    -813,    91,    91,    91,   147,   186,   189,  -813,   322,  -813,
    -813,   322,   322,  -813,   220,   322,   220,   322,   322,  -813,
    -813,  -813,  -813,    88,   191,  2566,   328,  -813,    91,  -813,
     125,   290,   293,  -813,  3097,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,    91,    91,    91,  2797,  2635,
     221,  -813,  -813,  -813,  -813,  -813,    62,  3347,  3347,   177,
     199,  -813,  -813,   220,  -813,   212,   322,  -813,  -813,    88,
     264,  -813,    91,  1771,  -813,   394,  -813,    88,   328,  -813,
      91,  -813,  -813,   670,  -813,   237,   236,   237,   239,  -813,
     245,  -813,  -813,  -813,  -813,  -813,  -813,  2797,  2797,   291,
     303,   322,  -813,  -813,  -813,  2797,  -813,  -813,  1406,  -813,
     312,   330,   335,  -813,  -813,  -813,  2797,   310,   320,  -813,
    2851,  2905,  -813,  3698,   996,   396,   340,  2797,  -813,  -813,
    -813,  -813,  -813,   347,   611,  -813,   352,  1887,   333,  -813,
     322,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   447,  1984,  -813,  -813,  -813,  2525,
     424,  -813,  -813,  -813,   322,   322,   393,   322,   322,  -813,
    -813,  -813,   401,   558,    45,  -813,   394,    88,  -813,   422,
    -813,  1974,  1959,    91,  -813,  -813,   394,  -813,   274,  -813,
      91,   689,   228,   359,   301,  1799,   670,  -813,  -813,  -813,
    -813,    91,  -813,   429,   404,  3043,  -813,   423,  -813,   250,
    -813,  -813,  -813,  2797,  1984,  -813,  -813,   439,   442,   443,
     452,  2689,  3377,  1984,   322,  -813,   454,  2797,  1406,  -813,
    1406,  -813,  2797,  2797,   496,  -813,  -813,  2797,  2797,  2797,
    2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,  -813,
    -813,   322,  2797,  2797,   322,  -813,  -813,  -813,  -813,  -813,
     611,  2041,    91,  -813,   438,   869,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,    33,  -813,   477,  -813,  1984,  -813,
     461,   467,   546,  -813,   424,  -813,   488,   467,   220,   480,
    -813,   503,   487,   495,  -813,   503,  -813,  -813,   359,  -813,
    -813,   547,   359,   571,  -813,  1663,  -813,   499,   502,  -813,
    1857,    86,  -813,  -813,   548,    91,    90,   184,  -813,   394,
     394,  -813,  1959,    91,  -813,  2102,  -813,  -813,  1959,   518,
      91,  -813,  -813,   421,   510,   299,  3283,   237,    91,   237,
    -813,   555,   514,  -813,   250,  3558,   515,  -813,  -813,  -813,
     513,   526,  2443,  -813,  -813,  -813,  -813,   566,   535,  3377,
    -813,   537,   549,  -813,  3698,   550,   551,  3698,  3698,  2797,
     595,  2797,  2797,  3274,  1345,  1377,  2013,  3030,   656,   656,
     405,   405,  -813,  -813,  -813,  -813,   561,   320,   562,  -813,
     213,   315,  -813,  3208,  -813,   576,   611,  -813,  2163,  -813,
     869,   567,   333,  2959,   584,  3412,  1883,  -813,  -813,  3471,
    1984,  -813,  -813,   572,   220,  -813,   599,  3128,  -813,  -813,
     470,   739,   601,    79,   590,  -813,  -813,  -813,  3519,  -813,
     600,   302,  -813,  -813,   114,  -813,  -813,    82,  -813,  -813,
    -813,  3515,  -813,   228,  -813,  -813,   228,  -813,   651,  -813,
    -813,   604,  -813,   602,  -813,  -813,  -813,  -813,  -813,   612,
    -813,   617,  2797,   322,   644,   514,  2797,  1984,  -813,   659,
    -813,  -813,  -813,  3442,  -813,  -813,   566,  -813,  -813,  -813,
    -813,  -813,   690,  2797,  1540,  2607,  -813,  -813,   438,  -813,
    -813,  -813,   438,  -813,  -813,   647,  -813,  -813,   201,   655,
     322,  -813,  2525,   650,  3047,  -813,  -813,  3519,  1915,    82,
    -813,   654,   660,    82,  -813,   503,  -813,   578,  -813,  -813,
    -813,  -813,    88,   191,  2566,   126,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  3547,   663,  -813,  -813,
    -813,   774,   613,  -813,  -813,  3483,  -813,   741,   443,  -813,
    -813,  -813,   676,  3266,  -813,  1305,    82,  -813,  -813,    82,
    -813,   678,  -813,  -813,   678,    91,    91,  3698,  -813,    91,
     679,  3581,   682,   322,   993,   659,  -813,  1488,  2797,   724,
     680,  3442,  -813,  -813,  1459,  -813,  -813,  2797,  -813,  -813,
    -813,  -813,   774,  -813,  -813,  -813,  -813,   322,  -813,  -813,
     701,   503,  -813,  3347,  3347,   203,   394,    88,  3180,  -813,
     643,  3017,   560,   560,  -813,  -813,  -813,   613,    91,   248,
     326,    91,  -813,    91,   326,    91,  3208,  -813,  -813,  -813,
    -813,  -813,   394,  -813,    88,  -813,   967,  -813,  -813,  3698,
    -813,  -813,  1305,  -813,  -813,   798,  -813,  -813,  -813,    91,
    2797,  -813,  -813,   321,   426,   909,   691,   694,  1079,  -813,
    -813,  -813,  -813,  -813,   729,   322,  -813,   730,  3698,   696,
     697,  -813,  -813,   119,  1652,   320,  -813,  2797,  -813,   724,
    -813,  2797,   224,   248,   326,    91,   349,  -813,  -813,   677,
    -813,   717,   503,  -813,  -813,  -813,  -813,  2797,   745,   706,
    -813,   706,   592,   774,  -813,  2224,  -813,  -813,  -813,   458,
     613,  -813,  -813,  -813,   357,   360,   967,  -813,  -813,  1488,
    -813,  -813,  2797,    74,  -813,  3624,  -813,   322,  -813,  -813,
    -813,  -813,   714,  -813,  -813,  -813,  -813,  2307,  -813,  1488,
    -813,  -813,  1570,  -813,  1713,  -813,  -813,  -813,  1459,  -813,
    -813,  -813,  -813,  -813,   774,  -813,  -813,   735,    75,    75,
    3698,  2797,   560,   453,   453,  -813,  -813,   710,  -813,  -813,
     723,  3662,  2797,  -813,  -813,  -813,  -813,  2389,   766,   752,
    -813,  -813,   755,   756,  2797,   777,   743,   748,  2743,   121,
     813,   120,   229,  -813,   789,   751,  -813,   757,  3238,  -813,
     815,  1163,    84,  -813,  -813,  -813,  -813,  -813,  2555,   759,
    1713,  -813,  -813,  -813,   503,  -813,  -813,  -813,  -813,  -813,
    3698,  -813,  -813,  -813,  -813,  3662,  2797,   780,  -813,  2797,
    2797,  3605,  -813,  -813,  -813,  -813,   758,  2797,   762,  -813,
     783,    91,  -813,  -813,   394,  -813,    88,  1249,  -813,  -813,
    -813,  -813,  2797,  -813,  -813,  -813,   779,  -813,   767,  2797,
     830,  -813,   801,   770,   773,  2797,  -813,  -813,   786,  -813,
    2797,  -813,   362,  -813,   192,   387,  -813,   542,  -813,  -813,
    2389,   775,  -813,  -813,   781,  -813,  -813,  -813,  -813,  3680,
    -813,    63,  -813,  1959,  -813,  1959,  -813,  -813,  -813,   787,
    -813,  -813,  2797,  -813,  -813,   843,   788,  -813,  -813,  -813,
    -813,  -813,  -813,   791,  -813,   808,    68,   790,  -813,  -813,
     443,   443,  -813,  -813,  2797,   843,   799,   843,  -813,  -813,
    2797,   802,    77,  -813,  -813,   809,  -813,   571,   810,  -813,
     396,   288,  -813,  -813,   811,   571,  -813,  -813,   396
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -813,  -813,  -813,  -813,  -813,    95,  -371,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   -16,  -813,   -58,   468,  -237,   395,
    -813,  -813,   -74,  -813,   641,  -813,  -813,  -813,  -813,  -813,
      28,  -813,  -278,  -813,  -289,   564,  -813,  -813,   235,  -813,
     -21,  -167,    69,    18,   807,  -813,   270,    26,   -13,  -175,
     631,    67,  -227,  -587,   -68,  -208,  -121,  -813,  -813,  -813,
    -231,     5,    17,  -813,   519,  -813,   284,  -813,  -577,  -813,
     185,  -813,  -605,  -813,  -813,   255,  -813,  -813,  -813,  -813,
    -813,  -813,   -57,  -105,  -482,   -18,  -813,  -813,  -813,   -51,
    -813,  -813,  -813,  -813,  -813,   464,   -43,  -813,   594,   475,
     289,   591,   474,   -38,   -66,  -169,  -157,  -236,   282,  -813,
    -813,  -200,  -813,  -813,  -813,   367,  -329,  -813,  -219,  -813,
    -813,  -813,  -813,  -195,  -519,  -715,   285,  -813,    66,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,    71,
    -813,  -812,    22,  -813,    21,  -813,   559,  -813,  -346,  -813,
     556,   563,   419,  -287,  -813,  -813,  -813,  -813,    27,  -813,
     960,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   -22,    13,  -358,  -813,   451,
    -813,   376,   243,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -279,  -813,  -813,  -813,   216,   485,  -813,  -813,  -813,  -813,
     -41,   727,  -813,  -813,   504,  -813,   262,   517,  -813,   616,
     621,  -111,  -813,  -133,  -813,  -813,   345,   436,  -813,  -813,
    -813,  -813,  -813,  -813,   668,  -813,  -813,  -813
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -503
static const short int yytable[] =
{
     127,   143,    65,   343,    74,    69,    70,   333,    38,    73,
      38,    65,    76,    85,    87,    83,    55,    56,    57,   214,
     371,    34,    88,    34,    96,    98,   100,   183,   211,    35,
      44,    35,    44,   231,   232,   407,   442,    72,    82,    72,
      90,   236,   222,   340,   411,   443,   305,   186,   336,    38,
     353,   190,   245,   467,   227,    94,   355,   469,   419,   472,
     192,   194,    34,   277,   665,   734,   541,   510,   304,   215,
      35,    44,    94,    94,    94,   320,   836,   537,   283,   639,
     240,   289,    72,   568,    82,   871,    72,  -115,   275,   766,
     210,    77,    82,    77,   204,   235,   459,   317,   221,    94,
      52,   337,    89,   925,    16,   200,   201,    94,   945,   149,
     933,   421,   468,   343,   792,   416,   422,   957,    16,   474,
      16,    16,   410,   319,    61,    62,   145,   480,    61,    62,
     458,   377,   293,   880,   297,    -2,   333,   300,   955,   101,
      78,   926,   205,   327,   872,   150,   946,   333,    79,   282,
     206,     4,   282,   333,   837,   958,   764,   559,   299,   832,
     -36,   757,   790,    -3,   207,   222,   369,    18,   308,   309,
    -115,   312,   313,   857,   508,   318,   539,   540,   685,   322,
     512,   353,   829,   374,   916,   145,   407,   355,   194,   630,
      63,  -480,   566,   419,    63,    64,   366,   567,    82,    64,
     616,   210,    82,   929,   618,   381,   932,    58,   934,    95,
     385,   210,   386,   361,   288,   408,   942,   184,   465,   199,
     317,   221,  -178,   415,    18,   875,   525,    94,   382,  -178,
     199,   463,    53,    54,   222,   466,   797,   185,    94,   187,
     783,   784,   145,    16,   344,   345,    59,   661,   966,    60,
     663,   360,   356,    61,    62,   405,   620,   715,   409,   188,
     424,   709,   464,   200,   201,   279,   555,    18,   496,   -35,
      84,  -178,   556,   280,   281,  -178,    18,   892,    16,   606,
     583,   148,   583,   189,   607,   282,   433,   471,   344,   345,
     431,   191,   145,    61,    62,   150,    61,    62,   492,    94,
     733,   145,   769,     7,   223,     9,   287,   247,   724,   725,
     145,    11,    12,    13,   479,   145,   481,   145,   318,    63,
     226,    72,   322,   228,    64,    61,    62,    15,   615,   230,
      38,   502,   475,    91,   477,    92,    61,    62,   290,   291,
     292,   210,   711,   195,   210,   210,    18,   196,   361,   650,
     900,   233,    94,   338,   666,   667,    16,   339,   668,    63,
     515,   695,    63,   234,    64,   145,   964,    64,    24,   222,
     702,   965,   242,    26,    97,   417,   418,    99,  -283,  -283,
     346,   564,   599,   356,   196,   565,   200,   201,   246,   305,
     243,    63,   532,   509,   679,   244,    64,    77,   204,   680,
     746,   411,    63,   247,   747,   275,   293,    64,   726,   727,
     728,   304,   536,   731,   732,   282,   542,   276,    38,   200,
     201,   282,   288,   145,    16,   278,   561,   562,   773,   738,
     286,    38,   774,   777,    38,    88,   788,   785,   744,   789,
     339,   912,    38,   196,   523,   339,   205,    72,   573,   592,
      61,    62,   524,    90,   206,   543,   555,   266,   267,   268,
     695,    77,   556,   544,   306,   317,   914,   361,   207,   583,
     196,   723,   770,   771,   772,   749,   730,   310,   754,   722,
     316,   680,   323,   755,   350,   729,   508,   512,    16,   349,
     699,    61,    62,   508,   512,   641,   645,   145,   417,   418,
    -281,  -281,   612,   358,   609,   456,   748,   298,   145,   738,
     642,    88,   793,   724,   725,    89,    63,   367,   637,   281,
     368,    64,   626,   627,   625,   249,   251,   369,   574,    90,
     372,    88,    38,   383,   632,   633,   -86,   423,   819,   425,
     548,   549,   550,   640,   644,   523,   426,    82,   430,    90,
     551,   652,   654,   524,   145,   876,   428,    63,   434,   214,
     844,    77,    64,    77,   204,   317,   638,   643,  -478,   199,
      38,   438,  -178,   439,   199,   718,   718,   672,   819,  -178,
     104,   456,   713,   714,   455,   462,   735,   473,    16,   476,
      16,    89,   482,   488,   704,    77,   635,   483,   487,   317,
     717,   708,   200,   201,   490,   222,   494,   542,   743,   625,
      78,    89,   205,   495,   877,   498,    77,   638,    79,   194,
     206,  -178,    16,   288,   927,  -178,   928,   499,   500,   501,
     891,   210,    82,    38,   207,   503,   625,   210,   210,   506,
     655,    16,   643,    16,   636,   516,   543,   507,   548,   549,
     550,    38,   637,   281,   544,    94,   534,   210,   622,    82,
      94,   511,   520,   279,   538,   642,   558,   787,   560,   758,
     210,   280,   281,   637,   281,   217,   218,   219,   563,   960,
     580,   819,    11,    12,    13,   222,   343,   968,   577,   578,
     341,   593,   585,   -21,   -21,   -21,   -21,   586,   145,   815,
      16,   -21,   -21,   -21,   318,   322,   264,   265,   266,   267,
     268,   318,   322,   548,   549,   550,   199,   -21,   333,  -178,
     333,   948,   949,   716,   589,   718,  -178,   638,   638,   611,
     603,   795,   605,   608,   643,   643,   -21,   565,   617,   815,
     553,   814,   634,     7,   649,     9,   142,   548,   549,   550,
     856,    11,    12,    13,   277,   651,   704,   775,   -21,   669,
     671,   664,    38,   -21,   697,   698,   710,    15,  -178,   -33,
     760,  -318,  -178,   -21,   753,   817,   761,    77,   635,   638,
     762,   814,   776,   818,   828,   781,    18,   210,   878,   782,
      74,   881,   884,   858,   796,   842,   864,   866,   895,   888,
     835,    77,   204,   843,    16,    88,   -34,   894,    24,  -454,
    -454,  -454,   846,    26,   901,   849,   850,   852,   554,  -454,
     859,   904,   853,    90,    72,    72,   636,   854,    16,   861,
     862,   867,   911,    38,   637,   281,   863,   887,   742,   874,
     879,   889,   815,   890,   902,   903,   817,   905,   897,   907,
     205,   908,   935,   919,   818,   828,   269,   270,   206,   920,
     271,   272,   273,   274,   881,   910,   930,   939,   944,   210,
     943,    82,   207,   947,   365,   218,   219,   882,   953,   906,
     956,    11,    12,    13,   814,    89,   951,   959,   384,   962,
     967,   519,   881,   387,   388,   460,   216,   873,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     328,   750,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   420,
    -127,  -127,  -127,  -127,  -127,   736,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,   517,  -127,  -127,  -127,  -127,   740,   831,   765,   590,
     478,  -127,   584,   741,  -127,   485,  -127,   588,   751,  -127,
    -127,  -127,   682,   756,  -127,  -127,   917,   952,   954,  -127,
    -127,   918,   737,   218,   219,  -127,   513,  -127,  -127,    11,
      12,    13,  -127,  -127,   648,   530,  -127,    75,  -127,  -127,
    -127,  -127,   531,  -127,   674,   839,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,   631,  -339,  -339,  -339,  -339,  -339,   721,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,   841,  -339,  -339,  -339,  -339,
     629,   614,   504,   505,   432,  -339,   833,   700,  -339,   610,
    -339,   521,   767,  -339,  -339,  -339,   522,   497,  -339,  -339,
       0,   269,   270,  -339,  -339,   271,   272,   273,   274,  -339,
       0,  -339,  -339,     0,     0,     0,  -339,  -339,     0,     0,
    -339,     0,  -339,     0,  -339,  -339,     0,  -339,     0,     0,
     328,     0,  -339,  -339,     0,     0,     0,  -339,  -339,     0,
    -339,     0,     0,     0,  -339,     0,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,     0,  -339,     0,
    -339,     0,  -339,  -339,  -339,  -339,     0,     0,     0,     0,
       0,  -339,     0,   587,  -339,     0,     0,   591,     0,  -339,
    -339,  -339,     0,     0,  -339,  -339,     0,     0,     0,  -339,
    -339,     0,     0,     0,   604,  -339,     0,  -339,  -339,     0,
       0,     0,  -339,  -339,     0,     0,  -339,     0,  -339,  -314,
    -339,  -339,     0,  -339,   868,     0,  -339,  -339,     0,     0,
       0,  -339,  -339,     0,  -339,     0,     0,     0,  -339,     0,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,     0,  -339,     0,  -339,     0,  -339,  -339,  -339,  -339,
       0,     0,     0,     0,     0,  -339,     0,     0,  -339,     0,
       0,     0,     0,  -339,  -339,  -339,   659,     0,  -339,  -339,
       0,     0,     0,  -339,  -339,     0,     0,     0,     0,  -339,
       0,  -339,  -339,     0,     0,     0,  -339,  -339,   688,     0,
    -339,     0,  -339,     0,  -339,  -339,     0,  -339,     0,     0,
     898,     0,  -349,  -349,     0,     0,     0,  -349,  -349,     0,
    -349,     0,     0,     0,  -349,     0,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,     0,  -349,     0,
    -349,     0,  -349,  -349,  -349,  -349,     0,     0,     0,     0,
       0,  -349,     0,     0,  -349,     0,     0,     0,     0,  -349,
    -349,  -349,     0,   659,  -349,  -349,   657,     0,   102,  -349,
    -349,   745,     0,   103,   104,  -349,   105,  -349,  -349,     0,
       0,     0,  -349,  -349,     0,     0,  -349,     0,  -349,     0,
    -349,  -349,     0,  -349,   106,   688,    17,     0,   107,   108,
     109,   110,   768,     0,     0,     0,     0,   111,     0,     0,
     112,     0,     0,     0,     0,   113,   114,   115,   780,     0,
     116,   117,     0,     0,     0,   118,   119,     0,     0,     0,
       0,   120,     0,   121,     0,     0,     0,     0,   122,     0,
     688,     0,   123,   791,     0,     0,   124,   125,     0,   658,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     688,     0,     0,   688,     0,   688,     0,   237,     0,   102,
       7,     0,     9,   142,   103,   104,     0,   105,    11,    12,
      13,     0,   840,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   845,    15,   106,     0,    17,     0,   107,
     108,   109,   110,     0,     0,   851,     0,     0,   111,     0,
       0,   112,     0,    18,     0,     0,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,   118,   119,     0,     0,
       0,   688,   120,     0,   121,    24,     0,     0,     0,   122,
      26,     0,     0,   123,     0,     0,     0,   124,   125,   683,
     -95,   684,    62,     0,     0,     0,   103,   104,   254,   105,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,     0,     0,   106,     0,    17,
       0,   107,   108,   109,   110,     0,   909,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,   113,   114,
     115,     0,     0,   116,   117,     0,     0,   685,   118,   119,
       0,     0,     0,     0,   120,     0,   121,    63,     0,     0,
       0,   122,    64,     0,     0,   123,     0,     0,  -206,   124,
     125,   683,   686,   684,    62,     0,     0,     0,   103,   104,
       0,   105,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,     0,     0,     0,   106,
       0,    17,     0,   107,   108,   109,   110,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
     113,   114,   115,     0,     0,   116,   117,     0,     0,   685,
     118,   119,     0,     0,     0,     0,   120,     0,   121,    63,
       0,     0,     0,   122,    64,     0,     0,   123,     0,     0,
    -271,   124,   125,   683,   686,   102,     0,     0,     0,     0,
     103,   104,     0,   105,   444,     0,   445,     7,     8,     9,
      10,     0,     0,   446,     0,    11,    12,    13,     0,     0,
       0,   106,     0,    17,     0,   107,   108,   109,   110,  -219,
       0,    15,     0,    16,   111,     0,     0,   112,     0,     0,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
      18,  -219,   118,   119,   683,     0,   102,     0,   120,     0,
     121,   103,   104,     0,   105,   122,     0,     0,     0,   123,
       0,     0,    24,   124,   125,     0,   686,    26,     0,     0,
       0,  -399,   106,     0,    17,     0,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,   198,   118,   119,   -29,   -29,   -29,   -29,   120,
       0,   121,     0,   -29,   -29,   -29,   122,     0,     0,     0,
     123,     0,     0,     0,   124,   125,     0,   686,   199,   -29,
     347,  -178,     0,   -25,   -25,   -25,   -25,     0,  -178,     0,
       0,   -25,   -25,   -25,     0,     0,     0,     0,   -29,     0,
       0,     0,     0,     0,     0,     0,   199,   -25,     0,  -178,
       0,   200,   201,     0,     0,     0,  -178,     0,     0,     0,
     -29,     0,     0,     0,     0,   -29,   -25,     0,     0,     0,
    -178,     0,     0,     0,  -178,   -29,     0,     0,   328,   200,
     201,  -118,  -118,  -118,  -118,     0,     0,  -118,   -25,  -118,
    -118,  -118,     0,   -25,     0,     0,     0,     0,  -178,     0,
       0,     0,  -178,   -25,   328,  -118,     0,     7,     8,     9,
      10,     7,     0,     9,   287,    11,    12,    13,     0,    11,
      12,    13,     0,     0,  -118,     0,     0,     0,     0,     0,
       0,    15,     0,    16,     0,    15,   328,    16,     0,  -502,
    -502,  -502,  -502,     0,     0,     0,  -118,  -502,  -502,  -502,
      18,  -118,     0,     0,    18,     0,     0,     0,     0,   279,
       0,  -118,     0,  -502,     0,  -502,     0,   280,   281,     0,
       0,     0,    24,     0,     0,     0,    24,    26,     0,     0,
     328,    26,  -502,  -339,  -339,  -339,  -339,  -500,     0,     0,
       0,  -339,  -339,  -339,     0,     0,     0,   102,     0,     0,
       0,     0,   103,   104,  -502,   105,     0,  -339,     7,  -502,
       9,   142,     0,     0,     0,     0,    11,    12,    13,  -502,
       0,     0,     0,   106,     0,    17,  -339,   107,   108,   109,
     110,     0,    15,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,   113,   114,   115,     0,  -339,   116,
     117,    18,     0,  -339,   118,   119,     0,     0,     0,     0,
     120,     0,   121,  -114,   102,     0,     0,   122,     0,   103,
     104,   123,   105,    24,     0,   124,   125,     0,    26,   326,
     261,   262,   263,   264,   265,   266,   267,   268,     0,     0,
     106,     0,    17,     0,   107,   108,   109,   110,     0,     0,
       0,     0,     0,   111,     0,     0,   112,     0,     0,     0,
       0,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,   118,   119,     0,     0,   102,     0,   120,     0,   121,
     103,   104,     0,   105,   122,     0,     0,     0,   123,     0,
       0,     0,   124,   125,     0,     0,   414,     0,     0,     0,
       0,   106,     0,    17,     0,   107,   108,   109,   110,     0,
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,   113,   114,   115,     0,     0,   116,   117,     0,
       0,     0,   118,   119,     0,     0,   102,     0,   120,     0,
     121,   103,   104,     0,   105,   122,     0,     0,     0,   123,
       0,     0,     0,   124,   125,     0,     0,   470,     0,     0,
       0,     0,   106,     0,    17,     0,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,   118,   119,     0,     0,   102,     0,   120,
       0,   121,   103,   104,     0,   105,   122,     0,     0,     0,
     123,     0,     0,     0,   124,   125,     0,     0,   514,     0,
       0,     0,     0,   106,     0,    17,     0,   107,   108,   109,
     110,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,   113,   114,   115,     0,     0,   116,
     117,     0,     0,     0,   118,   119,     0,     0,     0,     0,
     120,     0,   121,     0,     0,     0,     0,   122,     0,     0,
       0,   123,     0,     0,     0,   124,   125,     0,     0,   786,
     684,   798,     8,     9,    10,   103,   104,     0,   105,    11,
      12,    13,   799,     0,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,    15,   106,    16,    17,     0,
     107,   108,   109,   110,     0,     0,     0,     0,     0,   111,
       0,     0,   112,     0,    18,     0,     0,   113,   114,   115,
       0,     0,   116,   117,     0,     0,     0,   118,   119,     0,
       0,     0,     0,   120,     0,   121,   811,     0,     0,     0,
     122,   812,     0,     0,   123,     0,   813,     0,   124,   125,
       0,   369,   684,    62,     0,     0,     0,   103,   104,     0,
     105,     0,     0,     0,   799,     0,   800,   801,   802,   803,
     804,   805,   806,   807,   808,   809,   810,     0,   106,     0,
      17,     0,   107,   108,   109,   110,     0,     0,     0,     0,
       0,   111,     0,     0,   112,     0,     0,     0,     0,   113,
     114,   115,     0,     0,   116,   117,   102,     0,     0,   118,
     119,   103,   104,     0,   105,   120,     0,   121,    63,     0,
       0,     0,   122,    64,     0,     0,   123,     0,   813,     0,
     124,   125,   106,   369,    17,     0,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,   118,   119,     0,     0,     0,     0,   120,
       0,   121,     0,     0,     0,     0,   122,     0,     0,     0,
     123,     0,     0,     0,   124,   125,     0,   491,   151,   152,
       0,   153,   154,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,     0,     0,     0,   102,     7,
       8,     9,    10,   103,   104,   174,   105,    11,    12,    13,
       7,     8,     9,    10,     0,     0,     0,     0,    11,    12,
      13,     0,     0,    15,   106,    16,    17,     0,   107,   108,
     109,   110,     0,     0,    15,     0,    16,   111,     0,   176,
     112,     0,    18,     0,     0,   113,   114,   115,   302,     0,
     116,   117,     0,    18,     0,   118,   119,     0,     0,     0,
       0,   120,     0,   121,    24,     0,     0,     0,   122,    26,
       0,     0,   123,     0,     0,    24,   124,   125,   102,     7,
      26,     9,   142,   103,   104,    86,   105,    11,    12,    13,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,    15,   106,     0,    17,     0,   107,   108,
     109,   110,     0,     0,     0,     0,     0,   111,     0,     0,
     112,     0,    18,     0,     0,   113,   114,   115,     0,     0,
     116,   117,   102,     0,     0,   118,   119,   103,   104,     0,
     105,   120,     0,   121,    24,     0,     0,     0,   122,    26,
       0,     0,   123,     0,     0,     0,   124,   125,   106,     0,
      17,     0,   107,   108,   109,   110,     0,     0,     0,     0,
       0,   111,     0,     0,   112,     0,     0,     0,     0,   113,
     114,   115,     0,     0,   116,   117,   102,     0,     0,   118,
     119,   103,   104,     0,   105,   120,     0,   121,   373,     0,
       0,     0,   122,     0,     0,     0,   123,     0,     0,     0,
     124,   125,   106,     0,    17,     0,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   113,   114,   115,     0,     0,   116,   117,
     102,     0,     0,   118,   119,   103,   104,     0,   105,   120,
       0,   121,     0,     0,     0,     0,   122,     0,     0,     0,
     123,     0,   855,     0,   124,   125,   106,     0,    17,     0,
     107,   108,   109,   110,     0,     0,     0,     0,     0,   111,
       0,     0,   112,     0,     0,     0,     0,   113,   114,   115,
       0,     0,   116,   117,   102,     0,     0,   118,   119,   103,
     104,     0,   105,   120,     0,   121,     0,     0,     0,     0,
     122,     0,     0,     0,   123,     0,     0,     0,   124,   125,
     106,     0,    17,     0,   107,   108,   109,   110,     0,     0,
       0,     0,     0,   111,     0,     0,   112,     0,     0,     0,
       0,   113,   114,   115,     0,     0,   116,   117,   102,     0,
       0,   248,   119,   103,   104,     0,   105,   120,     0,   121,
       0,     0,     0,     0,   122,     0,     0,     0,   123,     0,
       0,     0,   124,   125,   106,     0,    17,     0,   107,   108,
     109,   110,     0,     0,     0,     0,     0,   111,     0,     0,
     112,     0,     0,     0,     0,   113,   114,   115,     0,     0,
     116,   117,   518,     0,     0,   250,   119,   103,   104,     0,
     105,   120,     0,   121,     0,     0,     0,     0,   122,     0,
       0,     0,   123,     0,     0,     0,   124,   125,   106,     0,
      17,     0,   107,   108,   109,   110,     0,     0,     0,     0,
       0,   111,     0,     0,   112,     0,     0,     0,     0,   113,
     114,   115,     0,     0,   116,   117,     0,     0,   553,   118,
     119,     7,     0,     9,   142,   120,     0,   121,     0,    11,
      12,    13,   122,     0,     0,     0,   123,     0,     0,     0,
     124,   125,     0,     0,   351,    15,     0,     7,     0,     9,
     142,     7,     8,     9,    10,    11,    12,    13,     0,    11,
      12,    13,     0,     0,    18,     0,     0,     0,     0,     0,
       0,    15,     0,     0,    17,    15,     0,    16,   262,   263,
     264,   265,   266,   267,   268,     0,    24,  -453,  -453,  -453,
      18,    26,     0,     0,    18,     0,   554,  -453,     6,     0,
    -131,     7,     8,     9,    10,     0,     0,     0,     0,    11,
      12,    13,    24,     0,     0,     0,    24,    26,     0,     0,
       0,    26,   352,  -274,    14,    15,   613,    16,    17,     6,
       0,  -131,     7,     8,     9,    10,     0,     0,     0,     0,
      11,    12,    13,     0,    18,     0,     0,    19,    20,  -131,
       0,     0,     0,     0,     0,     0,    15,  -131,    16,     0,
      21,    22,    23,     0,     0,     0,    24,     0,     0,     0,
      25,    26,    27,    28,     0,    18,    29,     0,   539,   540,
    -131,     6,     0,  -131,     7,     8,     9,    10,  -131,     0,
       0,     0,    11,    12,    13,     0,     0,    24,     0,     0,
       0,     0,    26,     0,     0,     0,     0,    29,    15,   444,
      16,     0,     7,     8,     9,    10,     0,     0,   446,     0,
      11,    12,    13,     0,     0,     0,     0,    18,     0,     0,
       0,     0,  -131,     0,     0,     0,    15,     0,    16,     0,
    -131,     0,     7,     8,     9,    10,     0,     0,     0,    24,
      11,    12,    13,     0,    26,    18,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    15,     0,    16,     0,
       7,    91,     9,    92,     0,     0,     0,    24,    11,    12,
      13,     0,    26,     0,   351,    18,  -399,     7,     0,     9,
     142,     0,     0,     0,    15,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    15,    26,    18,    17,     0,     0,   865,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
      18,     0,     0,     0,     0,    24,     0,     0,     0,     0,
      26,     0,     0,     0,     0,   653,     0,     0,     0,     0,
     151,   152,    24,   153,   154,     0,     0,    26,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
     151,   152,     0,   153,   154,     0,     0,   174,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   175,     0,     0,
       0,     0,     0,     0,     0,   151,   152,   376,   153,   154,
       0,   176,     0,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,     0,   151,   152,     0,   153,   154,
       0,   176,   174,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,     0,     7,     8,     9,    10,     0,
       0,   446,   598,    11,    12,    13,   176,     7,     8,     9,
      10,     0,     0,   647,     0,    11,    12,    13,     0,    15,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,    16,     0,     0,   176,     0,    18,     7,
       8,     9,    10,     7,     8,     9,    10,    11,    12,    13,
      18,    11,    12,    13,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    15,     0,    26,     0,    15,     0,    16,
       0,     7,    24,     9,   287,     0,     0,    26,     0,    11,
      12,    13,    18,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    24,    26,
       0,     0,     0,    26,    18,   252,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,     0,   885,    24,     0,   252,   253,
     254,    26,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,     0,     0,     0,
       0,   486,   252,   253,   254,   886,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   252,   253,   254,   670,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,   252,
     253,   254,   794,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   252,   253,   254,
     924,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   252,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268
};

static const short int yycheck[] =
{
      58,    59,    18,   211,    26,    21,    22,   202,     3,    25,
       5,    27,    28,    34,    35,    33,    11,    12,    13,    87,
     239,     3,    35,     5,    40,    41,    42,    68,    85,     3,
       3,     5,     5,   107,   108,   272,   315,    24,    33,    26,
      35,   115,    93,   210,   280,   323,   179,    69,   205,    44,
     225,    73,   126,   342,    97,    38,   225,   344,   285,   348,
      76,    79,    44,   137,   583,   652,   437,   413,   179,    87,
      44,    44,    55,    56,    57,   196,     1,   435,   144,   561,
     118,   147,    69,     1,    79,     1,    73,     1,     9,   694,
      85,     3,    87,     3,     4,   111,    10,     7,    93,    82,
       5,   206,    35,    40,    30,    60,    61,    90,    40,    47,
     922,    78,   343,   321,    40,   282,    83,    40,    30,   350,
      30,    30,   279,    78,     3,     4,    59,   358,     3,     4,
     330,   242,   148,   848,   150,     0,   331,   175,   950,    44,
      52,    78,    52,   201,    60,    83,    78,   342,    60,   144,
      60,     0,   147,   348,    79,    78,    37,    78,   174,   764,
      40,   680,   739,     0,    74,   216,    84,    47,   184,   185,
      84,   187,   188,    52,   410,   193,    50,    51,    59,   197,
     416,   356,   759,   241,   899,   118,   423,   356,   206,   547,
      69,    65,    78,   420,    69,    74,   234,    83,   193,    74,
     529,   196,   197,   918,   533,   243,   921,    60,   923,    84,
     248,   206,   250,   229,   147,   273,   931,    40,   339,    27,
       7,   216,    30,   281,    47,   830,   426,   210,   244,    37,
      27,   336,    79,    80,   285,   340,   755,    60,   221,    40,
     722,   723,   175,    30,    60,    61,    60,   576,   963,    60,
     579,     1,   225,     3,     4,   271,   535,   628,   274,    60,
     298,   619,    78,    60,    61,    52,   441,    47,   379,    40,
      79,    79,   441,    60,    61,    83,    47,   864,    30,    78,
     475,    60,   477,    84,    83,   280,   308,   345,    60,    61,
     306,    79,   225,     3,     4,    83,     3,     4,   372,   282,
     646,   234,    78,     4,    67,     6,     7,    83,    60,    61,
     243,    12,    13,    14,   357,   248,   359,   250,   336,    69,
      84,   308,   340,    84,    74,     3,     4,    28,   528,    84,
     325,   389,   353,     5,   355,     7,     3,     4,     5,     6,
       7,   336,   621,    79,   339,   340,    47,    83,   364,   568,
     869,    60,   335,    79,   585,   586,    30,    83,   589,    69,
     418,   598,    69,    60,    74,   298,    78,    74,    69,   420,
     607,    83,    60,    74,    84,    60,    61,    84,    79,    80,
      79,    79,   493,   356,    83,    83,    60,    61,    78,   522,
      60,    69,   430,    78,   594,    60,    74,     3,     4,   594,
      79,   637,    69,    83,    83,     9,   422,    74,   639,   640,
     641,   522,   434,   644,   645,   410,   437,    77,   413,    60,
      61,   416,   355,   356,    30,    78,   447,   448,    79,   656,
      78,   426,    83,   712,   429,   448,    79,   724,   669,    79,
      83,    79,   437,    83,   426,    83,    52,   434,   461,   487,
       3,     4,   426,   448,    60,   437,   631,    52,    53,    54,
     697,     3,   631,   437,    40,     7,    79,   483,    74,   664,
      83,   638,   703,   704,   705,   675,   643,    84,   678,   636,
      79,   676,    60,   678,    80,   642,   722,   723,    30,    60,
     601,     3,     4,   729,   730,   561,   562,   430,    60,    61,
      79,    80,   523,    80,   520,    79,    80,    60,   441,   736,
      52,   524,   743,    60,    61,   448,    69,    78,    60,    61,
      78,    74,   543,   544,   542,   130,   131,    84,   461,   524,
      78,   544,   527,    79,   555,   556,    40,    60,   757,    78,
      70,    71,    72,   561,   562,   527,    79,   542,    60,   544,
      80,   572,   573,   527,   487,   834,    10,    69,    78,   627,
     791,     3,    74,     3,     4,     7,   561,   562,    65,    27,
     565,    84,    30,    78,    27,   632,   633,   593,   797,    37,
       9,    79,   623,   624,    85,    37,   654,    69,    30,    79,
      30,   524,    37,    80,   612,     3,     4,    83,    83,     7,
      40,   617,    60,    61,    78,   656,    40,   628,   665,   627,
      52,   544,    52,    78,   845,    78,     3,   612,    60,   637,
      60,    79,    30,   556,   913,    83,   915,    78,    78,    78,
     861,   626,   627,   628,    74,    40,   654,   632,   633,    78,
     573,    30,   637,    30,    52,    78,   628,    85,    70,    71,
      72,   646,    60,    61,   628,   638,    84,   652,    80,   654,
     643,    85,    78,    52,    65,    52,    65,   725,    78,   685,
     665,    60,    61,    60,    61,     5,     6,     7,    78,   957,
      78,   900,    12,    13,    14,   736,   894,   965,    37,    85,
       1,    32,    80,     4,     5,     6,     7,    80,   631,   757,
      30,    12,    13,    14,   722,   723,    50,    51,    52,    53,
      54,   729,   730,    70,    71,    72,    27,    28,   913,    30,
     915,   940,   941,    80,    80,   782,    37,   722,   723,    79,
      40,   747,    85,    78,   729,   730,    47,    83,    78,   797,
       1,   757,    79,     4,     3,     6,     7,    70,    71,    72,
     808,    12,    13,    14,   828,    79,   774,    80,    69,    80,
      78,    83,   757,    74,    40,    85,    65,    28,    79,    40,
      40,    80,    83,    84,    80,   757,    80,     3,     4,   774,
      83,   797,    65,   757,   757,    40,    47,   782,   846,    83,
     812,   849,   850,   809,    80,    85,   817,   818,   866,   857,
      65,     3,     4,    80,    30,   818,    40,   864,    69,    70,
      71,    72,    60,    74,   872,    60,    60,    40,    79,    80,
       7,   879,    79,   818,   811,   812,    52,    79,    30,    40,
      79,    16,   890,   828,    60,    61,    79,    79,    40,    80,
      60,    79,   900,    60,    65,    78,   828,    17,   866,    79,
      52,    78,     9,    78,   828,   828,    55,    56,    60,    78,
      59,    60,    61,    62,   922,    79,    79,    79,    60,   864,
      79,   866,    74,    83,   233,     6,     7,   849,    79,    78,
      78,    12,    13,    14,   900,   818,   944,    78,   247,    79,
      79,   423,   950,   252,   253,   331,    89,   828,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       1,   676,     3,     4,     5,     6,     7,     8,     9,   288,
      11,    12,    13,    14,    15,   655,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   422,    33,    34,    35,    36,   662,   762,   693,   485,
     356,    42,   477,   664,    45,   364,    47,   483,   676,    50,
      51,    52,   595,   678,    55,    56,   900,   945,   947,    60,
      61,   900,     5,     6,     7,    66,   417,    68,    69,    12,
      13,    14,    73,    74,   565,   429,    77,    27,    79,    80,
      81,    82,   429,    84,     1,   779,     3,     4,     5,     6,
       7,     8,     9,   552,    11,    12,    13,    14,    15,   633,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   782,    33,    34,    35,    36,
     545,   527,   391,   392,   307,    42,   774,   601,    45,   522,
      47,   425,   697,    50,    51,    52,   425,   379,    55,    56,
      -1,    55,    56,    60,    61,    59,    60,    61,    62,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    74,    -1,    -1,
      77,    -1,    79,    -1,    81,    82,    -1,    84,    -1,    -1,
       1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,   482,    45,    -1,    -1,   486,    -1,    50,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,   503,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    79,    80,
      81,    82,    -1,    84,     1,    -1,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,   575,    -1,    55,    56,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    74,   597,    -1,
      77,    -1,    79,    -1,    81,    82,    -1,    84,    -1,    -1,
       1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,   662,    55,    56,     1,    -1,     3,    60,
      61,   670,    -1,     8,     9,    66,    11,    68,    69,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    79,    -1,
      81,    82,    -1,    84,    29,   694,    31,    -1,    33,    34,
      35,    36,   701,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,   717,    -1,
      55,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    66,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,
     739,    -1,    77,   742,    -1,    -1,    81,    82,    -1,    84,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     759,    -1,    -1,   762,    -1,   764,    -1,     1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,   781,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,   792,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    -1,   804,    -1,    -1,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    50,    51,    52,    -1,
      -1,    55,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,   830,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    -1,    -1,    -1,    81,    82,     1,
      84,     3,     4,    -1,    -1,    -1,     8,     9,    39,    11,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    -1,   885,    -1,    -1,    -1,
      42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    -1,    -1,    77,    -1,    -1,    80,    81,
      82,     1,    84,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    11,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    -1,    -1,    77,    -1,    -1,
      80,    81,    82,     1,    84,     3,    -1,    -1,    -1,    -1,
       8,     9,    -1,    11,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    28,    -1,    30,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,
      47,    59,    60,    61,     1,    -1,     3,    -1,    66,    -1,
      68,     8,     9,    -1,    11,    73,    -1,    -1,    -1,    77,
      -1,    -1,    69,    81,    82,    -1,    84,    74,    -1,    -1,
      -1,    78,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,     1,    60,    61,     4,     5,     6,     7,    66,
      -1,    68,    -1,    12,    13,    14,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    -1,    84,    27,    28,
       1,    30,    -1,     4,     5,     6,     7,    -1,    37,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    60,    61,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    47,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    83,    84,    -1,    -1,     1,    60,
      61,     4,     5,     6,     7,    -1,    -1,    10,    69,    12,
      13,    14,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    83,    84,     1,    28,    -1,     4,     5,     6,
       7,     4,    -1,     6,     7,    12,    13,    14,    -1,    12,
      13,    14,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    28,     1,    30,    -1,     4,
       5,     6,     7,    -1,    -1,    -1,    69,    12,    13,    14,
      47,    74,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      -1,    84,    -1,    28,    -1,    30,    -1,    60,    61,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    69,    74,    -1,    -1,
       1,    74,    47,     4,     5,     6,     7,    84,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    69,    11,    -1,    28,     4,    74,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    84,
      -1,    -1,    -1,    29,    -1,    31,    47,    33,    34,    35,
      36,    -1,    28,    -1,    -1,    -1,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    69,    55,
      56,    47,    -1,    74,    60,    61,    -1,    -1,    -1,    -1,
      66,    -1,    68,    84,     3,    -1,    -1,    73,    -1,     8,
       9,    77,    11,    69,    -1,    81,    82,    -1,    74,    85,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    61,    -1,    -1,     3,    -1,    66,    -1,    68,
       8,     9,    -1,    11,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,
      -1,    -1,    60,    61,    -1,    -1,     3,    -1,    66,    -1,
      68,     8,     9,    -1,    11,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    60,    61,    -1,    -1,     3,    -1,    66,
      -1,    68,     8,     9,    -1,    11,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,
      56,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      66,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    -1,    -1,    -1,
      73,    74,    -1,    -1,    77,    -1,    79,    -1,    81,    82,
      -1,    84,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,    56,     3,    -1,    -1,    60,
      61,     8,     9,    -1,    11,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    79,    -1,
      81,    82,    29,    84,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    -1,    84,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    40,    11,    12,    13,    14,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    28,    -1,    30,    42,    -1,    74,
      45,    -1,    47,    -1,    -1,    50,    51,    52,    83,    -1,
      55,    56,    -1,    47,    -1,    60,    61,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      -1,    -1,    77,    -1,    -1,    69,    81,    82,     3,     4,
      74,     6,     7,     8,     9,    79,    11,    12,    13,    14,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    28,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    50,    51,    52,    -1,    -1,
      55,    56,     3,    -1,    -1,    60,    61,     8,     9,    -1,
      11,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    81,    82,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,    56,     3,    -1,    -1,    60,
      61,     8,     9,    -1,    11,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    82,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,    56,
       3,    -1,    -1,    60,    61,     8,     9,    -1,    11,    66,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    82,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,     3,    -1,    -1,    60,    61,     8,
       9,    -1,    11,    66,    -1,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    82,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,     3,    -1,
      -1,    60,    61,     8,     9,    -1,    11,    66,    -1,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      55,    56,     3,    -1,    -1,    60,    61,     8,     9,    -1,
      11,    66,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    82,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,     1,    60,
      61,     4,    -1,     6,     7,    66,    -1,    68,    -1,    12,
      13,    14,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    82,    -1,    -1,     1,    28,    -1,     4,    -1,     6,
       7,     4,     5,     6,     7,    12,    13,    14,    -1,    12,
      13,    14,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    28,    -1,    30,    48,    49,
      50,    51,    52,    53,    54,    -1,    69,    70,    71,    72,
      47,    74,    -1,    -1,    47,    -1,    79,    80,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    69,    -1,    -1,    -1,    69,    74,    -1,    -1,
      -1,    74,    79,    80,    27,    28,    79,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    60,    30,    -1,
      63,    64,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    47,    79,    -1,    50,    51,
      52,     1,    -1,     3,     4,     5,     6,     7,    60,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    28,     1,
      30,    -1,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    28,    -1,    30,    -1,
      60,    -1,     4,     5,     6,     7,    -1,    -1,    -1,    69,
      12,    13,    14,    -1,    74,    47,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    69,    12,    13,
      14,    -1,    74,    -1,     1,    47,    78,     4,    -1,     6,
       7,    -1,    -1,    -1,    28,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    28,    74,    47,    31,    -1,    -1,    79,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      47,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
       3,     4,    69,     6,     7,    -1,    -1,    74,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    40,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    40,     6,     7,
      -1,    74,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,    74,    40,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    10,    40,    12,    13,    14,    74,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    12,    13,    14,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    74,    -1,    47,     4,
       5,     6,     7,     4,     5,     6,     7,    12,    13,    14,
      47,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    28,    -1,    74,    -1,    28,    -1,    30,
      -1,     4,    69,     6,     7,    -1,    -1,    74,    -1,    12,
      13,    14,    47,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    69,    74,
      -1,    -1,    -1,    74,    47,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    10,    69,    -1,    37,    38,
      39,    74,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    83,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    37,    38,    39,    83,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    78,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    87,    88,    89,     0,    90,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    47,    50,
      51,    63,    64,    65,    69,    73,    74,    75,    76,    79,
      91,    92,    93,   126,   129,   133,   134,   137,   147,   148,
     172,   173,   174,   175,   244,   245,   247,   248,   249,   259,
     262,   269,    91,    79,    80,   147,   147,   147,    60,    60,
      60,     3,     4,    69,    74,   100,   246,   270,   273,   100,
     100,   261,   262,   100,   261,   246,   100,     3,    52,    60,
     140,   144,   147,   171,    79,   126,    79,   126,   134,   137,
     147,     5,     7,   130,   148,    84,   100,    84,   100,    84,
     100,    91,     3,     8,     9,    11,    29,    33,    34,    35,
      36,    42,    45,    50,    51,    52,    55,    56,    60,    61,
      66,    68,    73,    77,    81,    82,   101,   102,   104,   105,
     106,   107,   108,   110,   116,   118,   119,   244,   305,   311,
     312,   313,     7,   102,   135,   137,   189,   191,    60,    47,
      83,     3,     4,     6,     7,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    40,    60,    74,   286,   295,   296,
     297,   298,   299,   286,    40,    60,   261,    40,    60,    84,
     261,    79,   100,   192,   171,    79,    83,   127,     1,    27,
      60,    61,    98,   141,     4,    52,    60,    74,   139,   142,
     147,   168,   169,   171,   140,   171,   130,     5,     6,     7,
     138,   147,   175,    67,   182,   183,    84,   182,    84,   179,
      84,   108,   108,    60,    60,   100,   108,     1,   102,   117,
     189,   306,    60,    60,    60,   108,    78,    83,    60,   105,
      60,   105,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    59,    60,    61,    62,     9,    77,   108,    78,    52,
      60,    61,   147,   190,   193,   136,    78,     7,   137,   190,
       5,     6,     7,   100,   149,   150,   151,   100,    60,   100,
     189,   271,    83,   293,   297,   299,    40,   274,   100,   100,
      84,   252,   100,   100,   256,   260,    79,     7,   171,    78,
     142,   168,   171,    60,   239,   240,    85,   102,     1,   120,
     121,   122,   197,   209,   146,   147,   192,   169,    79,    83,
     127,     1,    94,   141,    60,    61,    79,     1,    96,    60,
      80,     1,    79,   135,   184,   191,   244,   176,    80,   177,
       1,   100,   187,   188,   178,   110,   189,    78,    78,    84,
     203,   204,    78,    69,   102,   304,    40,   297,   308,   309,
     310,   189,   100,    79,   110,   189,   189,   110,   110,   113,
     115,   112,   111,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   100,   103,   104,   102,   100,
     192,   193,   232,   233,    85,   102,   127,    60,    61,   138,
     136,    78,    83,    60,   189,    78,    79,   287,    10,   294,
      60,   100,   287,   261,    78,   250,   276,   277,    84,    78,
     263,   265,   276,   118,     1,     3,    10,   129,   133,   234,
     236,   237,   238,   241,   242,    85,    79,    99,   197,    10,
     121,   210,    37,   169,    78,   142,   169,   120,   146,   239,
      85,   102,   120,    69,   146,   126,    79,   126,   184,   182,
     146,   182,    37,    83,   181,   187,    83,    83,    80,   198,
      78,    84,   108,   307,    40,    78,   297,   310,    78,    78,
      78,    78,   102,    40,   110,   110,    78,    85,   193,    78,
     234,    85,   193,   232,    85,   102,    78,   150,     3,   103,
      78,   295,   296,   129,   133,   197,   288,   289,   290,   272,
     236,   237,   189,   275,    84,   255,   261,   263,    65,    50,
      51,    92,   126,   129,   133,   278,   281,   257,    70,    71,
      72,    80,   264,     1,    79,   135,   191,   266,    65,    78,
      78,   126,   126,    78,    79,    83,    78,    83,     1,   202,
     204,   123,   131,   134,   137,   145,    95,    37,    85,    97,
      78,   185,   186,   209,   185,    80,    80,   110,   188,    80,
     181,   110,   189,    32,   199,   200,   201,   109,    40,   297,
     300,   301,   303,    40,   110,    85,    78,    83,    78,   100,
     293,    79,   126,    79,   290,   197,   202,    78,   202,   253,
     276,   258,    80,   282,   284,   171,   126,   126,   279,   281,
     263,   265,   126,   126,    79,     4,    52,    60,   147,   170,
     171,   190,    52,   147,   171,   190,   235,    10,   238,     3,
     204,    79,   126,    79,   126,   137,   132,     1,    84,   110,
     152,   202,   143,   202,    83,   210,   146,   146,   146,    80,
      83,    78,   100,   243,     1,   124,   125,   194,   195,   197,
     209,   212,   201,     1,     3,    59,    84,   100,   110,   154,
     155,   156,   158,   160,   161,   104,   302,    40,    85,   297,
     303,   114,   104,   170,   171,   190,   291,   292,   100,   263,
      65,   276,   251,   286,   286,    92,    80,    40,   168,   267,
     268,   267,   192,   127,    60,    61,   146,   146,   146,   192,
     127,   146,   146,   234,   139,   140,   132,     5,   138,   153,
     152,   186,    40,   168,   146,   110,    79,    83,    80,   197,
     124,   194,   196,    80,   197,   209,   212,   210,   100,   159,
      40,    80,    83,   180,    37,   161,   158,   302,   110,    78,
     146,   146,   146,    79,    83,    80,    65,   276,   283,   285,
     110,    40,    83,   170,   170,   239,    85,   102,    79,    79,
     154,   110,    40,   146,    78,   100,    80,   210,     4,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    69,    74,    79,   100,   102,   128,   129,   133,   204,
     205,   206,   207,   213,   214,   222,   223,   225,   244,   154,
     157,   156,   158,   292,   254,    65,     1,    79,   280,   280,
     110,   268,    85,    80,   146,   110,    60,   216,   208,    60,
      60,   110,    40,    79,    79,    79,   102,    52,   100,     7,
     226,    40,    79,    79,   126,    79,   126,    16,     1,   209,
     211,     1,    60,   128,    80,   158,   276,   146,   102,    60,
     211,   102,   116,   227,   102,    10,    40,    79,   102,    79,
      60,   146,   139,   162,   168,   140,   165,   171,     1,   215,
     210,   102,    65,    78,   102,    17,    78,    79,    78,   110,
      79,   102,    79,   163,    79,   166,   211,   214,   225,    78,
      78,   224,   218,   221,    40,    40,    78,   120,   120,   211,
      79,   217,   211,   227,   211,     9,   228,   229,   230,    79,
     164,   167,   211,    79,    60,    40,    78,    83,   204,   204,
     219,   102,   228,    79,   230,   227,    78,    40,    78,    78,
     118,   231,    79,   220,    78,    83,   211,    79,   118
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
#define YYERROR		goto yyerrorlab


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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
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
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
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
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

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


  yyvsp[0] = yylval;

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
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

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
#line 234 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids an empty source file");
		  finish_file ();
		;}
    break;

  case 3:
#line 239 "objc-parse.y"
    {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
		  finish_file ();
		;}
    break;

  case 4:
#line 253 "objc-parse.y"
    {(yyval.ttype) = NULL_TREE; ;}
    break;

  case 6:
#line 254 "objc-parse.y"
    {(yyval.ttype) = NULL_TREE; ;}
    break;

  case 11:
#line 262 "objc-parse.y"
    { STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    assemble_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); ;}
    break;

  case 12:
#line 270 "objc-parse.y"
    { pedantic = (yyvsp[-1].itype); ;}
    break;

  case 13:
#line 275 "objc-parse.y"
    { if (pedantic)
		    error ("ANSI C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 14:
#line 285 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 15:
#line 290 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  ;}
    break;

  case 16:
#line 295 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 17:
#line 297 "objc-parse.y"
    { shadow_tag ((yyvsp[-1].ttype)); ;}
    break;

  case 20:
#line 301 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C does not allow extra `;' outside of a function"); ;}
    break;

  case 21:
#line 307 "objc-parse.y"
    { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 22:
#line 312 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 23:
#line 314 "objc-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); ;}
    break;

  case 24:
#line 320 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 25:
#line 325 "objc-parse.y"
    { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 26:
#line 330 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 27:
#line 332 "objc-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); ;}
    break;

  case 28:
#line 338 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 29:
#line 343 "objc-parse.y"
    { if (! start_function (NULL_TREE, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); ;}
    break;

  case 30:
#line 348 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 31:
#line 350 "objc-parse.y"
    { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); ;}
    break;

  case 32:
#line 356 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 37:
#line 370 "objc-parse.y"
    { (yyval.code) = ADDR_EXPR; ;}
    break;

  case 38:
#line 372 "objc-parse.y"
    { (yyval.code) = NEGATE_EXPR; ;}
    break;

  case 39:
#line 374 "objc-parse.y"
    { (yyval.code) = CONVERT_EXPR; ;}
    break;

  case 40:
#line 376 "objc-parse.y"
    { (yyval.code) = PREINCREMENT_EXPR; ;}
    break;

  case 41:
#line 378 "objc-parse.y"
    { (yyval.code) = PREDECREMENT_EXPR; ;}
    break;

  case 42:
#line 380 "objc-parse.y"
    { (yyval.code) = BIT_NOT_EXPR; ;}
    break;

  case 43:
#line 382 "objc-parse.y"
    { (yyval.code) = TRUTH_NOT_EXPR; ;}
    break;

  case 44:
#line 386 "objc-parse.y"
    { (yyval.ttype) = build_compound_expr ((yyvsp[0].ttype)); ;}
    break;

  case 45:
#line 391 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 47:
#line 397 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); ;}
    break;

  case 48:
#line 399 "objc-parse.y"
    { chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); ;}
    break;

  case 50:
#line 405 "objc-parse.y"
    { (yyval.ttype) = build_indirect_ref ((yyvsp[0].ttype), "unary *"); ;}
    break;

  case 51:
#line 408 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); ;}
    break;

  case 52:
#line 411 "objc-parse.y"
    { (yyval.ttype) = build_unary_op ((yyvsp[-1].code), (yyvsp[0].ttype), 0);
		  overflow_warning ((yyval.ttype)); ;}
    break;

  case 53:
#line 415 "objc-parse.y"
    { tree label = lookup_label ((yyvsp[0].ttype));
		  if (pedantic)
		    pedwarn ("ANSI C forbids `&&'");
		  if (label == 0)
		    (yyval.ttype) = null_pointer_node;
		  else
		    {
		      TREE_USED (label) = 1;
		      (yyval.ttype) = build1 (ADDR_EXPR, ptr_type_node, label);
		      TREE_CONSTANT ((yyval.ttype)) = 1;
		    }
		;}
    break;

  case 54:
#line 443 "objc-parse.y"
    { skip_evaluation--;
		  if (TREE_CODE ((yyvsp[0].ttype)) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND ((yyvsp[0].ttype), 1)))
		    error ("`sizeof' applied to a bit-field");
		  (yyval.ttype) = c_sizeof (TREE_TYPE ((yyvsp[0].ttype))); ;}
    break;

  case 55:
#line 449 "objc-parse.y"
    { skip_evaluation--;
		  (yyval.ttype) = c_sizeof (groktypename ((yyvsp[-1].ttype))); ;}
    break;

  case 56:
#line 452 "objc-parse.y"
    { skip_evaluation--;
		  (yyval.ttype) = c_alignof_expr ((yyvsp[0].ttype)); ;}
    break;

  case 57:
#line 455 "objc-parse.y"
    { skip_evaluation--;
		  (yyval.ttype) = c_alignof (groktypename ((yyvsp[-1].ttype))); ;}
    break;

  case 58:
#line 458 "objc-parse.y"
    { (yyval.ttype) = build_unary_op (REALPART_EXPR, (yyvsp[0].ttype), 0); ;}
    break;

  case 59:
#line 460 "objc-parse.y"
    { (yyval.ttype) = build_unary_op (IMAGPART_EXPR, (yyvsp[0].ttype), 0); ;}
    break;

  case 60:
#line 464 "objc-parse.y"
    { skip_evaluation++; ;}
    break;

  case 61:
#line 468 "objc-parse.y"
    { skip_evaluation++; ;}
    break;

  case 63:
#line 474 "objc-parse.y"
    { tree type = groktypename ((yyvsp[-2].ttype));
		  (yyval.ttype) = build_c_cast (type, (yyvsp[0].ttype)); ;}
    break;

  case 64:
#line 477 "objc-parse.y"
    { start_init (NULL_TREE, NULL, 0);
		  (yyvsp[-2].ttype) = groktypename ((yyvsp[-2].ttype));
		  really_start_incremental_init ((yyvsp[-2].ttype)); ;}
    break;

  case 65:
#line 481 "objc-parse.y"
    { char *name;
		  tree result = pop_init_level (0);
		  tree type = (yyvsp[-5].ttype);
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
		  (yyval.ttype) = result;
		  if (TREE_CODE (type) == ARRAY_TYPE && TYPE_SIZE (type) == 0)
		    {
		      int failure = complete_array_type (type, (yyval.ttype), 1);
		      if (failure)
			abort ();
		    }
		;}
    break;

  case 67:
#line 510 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 68:
#line 512 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 69:
#line 514 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 70:
#line 516 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 71:
#line 518 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 72:
#line 520 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 73:
#line 522 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 74:
#line 524 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 75:
#line 526 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 76:
#line 528 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 77:
#line 530 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 78:
#line 532 "objc-parse.y"
    { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 79:
#line 534 "objc-parse.y"
    { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; ;}
    break;

  case 80:
#line 537 "objc-parse.y"
    { skip_evaluation -= (yyvsp[-3].ttype) == boolean_false_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ANDIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 81:
#line 540 "objc-parse.y"
    { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; ;}
    break;

  case 82:
#line 543 "objc-parse.y"
    { skip_evaluation -= (yyvsp[-3].ttype) == boolean_true_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ORIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 83:
#line 546 "objc-parse.y"
    { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; ;}
    break;

  case 84:
#line 549 "objc-parse.y"
    { skip_evaluation += (((yyvsp[-4].ttype) == boolean_true_node)
				      - ((yyvsp[-4].ttype) == boolean_false_node)); ;}
    break;

  case 85:
#line 552 "objc-parse.y"
    { skip_evaluation -= (yyvsp[-6].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-6].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 86:
#line 555 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  (yyvsp[0].ttype) = save_expr ((yyvsp[-1].ttype));
		  (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[0].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; ;}
    break;

  case 87:
#line 562 "objc-parse.y"
    { skip_evaluation -= (yyvsp[-4].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-4].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 88:
#line 565 "objc-parse.y"
    { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), NOP_EXPR, (yyvsp[0].ttype));
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), MODIFY_EXPR);
		;}
    break;

  case 89:
#line 573 "objc-parse.y"
    { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), (yyvsp[-1].code), (yyvsp[0].ttype));
		  /* This inhibits warnings in truthvalue_conversion.  */
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), ERROR_MARK);
		;}
    break;

  case 90:
#line 585 "objc-parse.y"
    {
		  (yyval.ttype) = lastiddecl;
		  if (!(yyval.ttype) || (yyval.ttype) == error_mark_node)
		    {
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			  tree decl;

			  if (objc_receiver_context
			      && ! (objc_receiver_context
				    && strcmp (IDENTIFIER_POINTER ((yyvsp[0].ttype)), "super")))
			    /* we have a message to super */
			    (yyval.ttype) = get_super_receiver ();
			  else if (objc_method_context
				   && (decl = is_ivar (objc_ivar_chain, (yyvsp[0].ttype))))
			    {
			      if (is_private (decl))
				(yyval.ttype) = error_mark_node;
			      else
				(yyval.ttype) = build_ivar_reference ((yyvsp[0].ttype));
			    }
			  else
			    {
			      /* Ordinary implicit function declaration.  */
			      (yyval.ttype) = implicitly_declare ((yyvsp[0].ttype));
			      assemble_external ((yyval.ttype));
			      TREE_USED ((yyval.ttype)) = 1;
			    }
			}
		      else if (current_function_decl == 0)
			{
			  error ("`%s' undeclared here (not in a function)",
				 IDENTIFIER_POINTER ((yyvsp[0].ttype)));
			  (yyval.ttype) = error_mark_node;
			}
		      else
			{
			  tree decl;

		          if (objc_receiver_context
			      && ! strcmp (IDENTIFIER_POINTER ((yyvsp[0].ttype)), "super"))
			    /* we have a message to super */
			    (yyval.ttype) = get_super_receiver ();
			  else if (objc_method_context
				   && (decl = is_ivar (objc_ivar_chain, (yyvsp[0].ttype))))
			    {
			      if (is_private (decl))
				(yyval.ttype) = error_mark_node;
			      else
				(yyval.ttype) = build_ivar_reference ((yyvsp[0].ttype));
			    }
			  else
			    {
			      if (IDENTIFIER_GLOBAL_VALUE ((yyvsp[0].ttype)) != error_mark_node
				  || IDENTIFIER_ERROR_LOCUS ((yyvsp[0].ttype)) != current_function_decl)
				{
				  error ("`%s' undeclared (first use in this function)",
					 IDENTIFIER_POINTER ((yyvsp[0].ttype)));

				  if (! undeclared_variable_notice)
				    {
				      error ("(Each undeclared identifier is reported only once");
				      error ("for each function it appears in.)");
				      undeclared_variable_notice = 1;
				    }
				}
			      (yyval.ttype) = error_mark_node;
			      /* Prevent repeated error messages.  */
			      IDENTIFIER_GLOBAL_VALUE ((yyvsp[0].ttype)) = error_mark_node;
			      IDENTIFIER_ERROR_LOCUS ((yyvsp[0].ttype)) = current_function_decl;
			    }
			}
		    }
		  else if (TREE_TYPE ((yyval.ttype)) == error_mark_node)
		    (yyval.ttype) = error_mark_node;
		  else if (C_DECL_ANTICIPATED ((yyval.ttype)))
		    {
		      /* The first time we see a build-in function used,
			 if it has not been declared.  */
		      C_DECL_ANTICIPATED ((yyval.ttype)) = 0;
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			  /* Omit the implicit declaration we
			     would ordinarily do, so we don't lose
			     the actual built in type.
			     But print a diagnostic for the mismatch.  */
			  if (objc_method_context
			      && is_ivar (objc_ivar_chain, (yyvsp[0].ttype)))
			    error ("Instance variable `%s' implicitly declared as function",
				   IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));
			  else
			    if (TREE_CODE ((yyval.ttype)) != FUNCTION_DECL)
			      error ("`%s' implicitly declared as function",
				     IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));
			  else if ((TYPE_MODE (TREE_TYPE (TREE_TYPE ((yyval.ttype))))
				    != TYPE_MODE (integer_type_node))
				   && (TREE_TYPE (TREE_TYPE ((yyval.ttype)))
				       != void_type_node))
			    pedwarn ("type mismatch in implicit declaration for built-in function `%s'",
				     IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));
			  /* If it really returns void, change that to int.  */
			  if (TREE_TYPE (TREE_TYPE ((yyval.ttype))) == void_type_node)
			    TREE_TYPE ((yyval.ttype))
			      = build_function_type (integer_type_node,
						     TYPE_ARG_TYPES (TREE_TYPE ((yyval.ttype))));
			}
		      else
			pedwarn ("built-in function `%s' used without declaration",
				 IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));

		      /* Do what we would ordinarily do when a fn is used.  */
		      assemble_external ((yyval.ttype));
		      TREE_USED ((yyval.ttype)) = 1;
		    }
		  else
		    {
		      assemble_external ((yyval.ttype));
		      TREE_USED ((yyval.ttype)) = 1;
		      /* we have a definition - still check if iVariable */

		      if (!objc_receiver_context
			  || (objc_receiver_context
			      && strcmp (IDENTIFIER_POINTER ((yyvsp[0].ttype)), "super")))
                        {
			  tree decl;

			  if (objc_method_context
			      && (decl = is_ivar (objc_ivar_chain, (yyvsp[0].ttype))))
                            {
                              if (IDENTIFIER_LOCAL_VALUE ((yyvsp[0].ttype)))
                                warning ("local declaration of `%s' hides instance variable",
	                                 IDENTIFIER_POINTER ((yyvsp[0].ttype)));
                              else
 				{
 				  if (is_private (decl))
 				    (yyval.ttype) = error_mark_node;
 				  else
 				    (yyval.ttype) = build_ivar_reference ((yyvsp[0].ttype));
 				}
                            }
			}
                      else /* we have a message to super */
		        (yyval.ttype) = get_super_receiver ();
		    }

		  if (TREE_CODE ((yyval.ttype)) == CONST_DECL)
		    {
		      (yyval.ttype) = DECL_INITIAL ((yyval.ttype));
		      /* This is to prevent an enum whose value is 0
			 from being considered a null pointer constant.  */
		      (yyval.ttype) = build1 (NOP_EXPR, TREE_TYPE ((yyval.ttype)), (yyval.ttype));
		      TREE_CONSTANT ((yyval.ttype)) = 1;
		    }
		;}
    break;

  case 92:
#line 745 "objc-parse.y"
    { (yyval.ttype) = combine_strings ((yyvsp[0].ttype)); ;}
    break;

  case 93:
#line 747 "objc-parse.y"
    { char class = TREE_CODE_CLASS (TREE_CODE ((yyvsp[-1].ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyvsp[-1].ttype), ERROR_MARK);
		  (yyval.ttype) = (yyvsp[-1].ttype); ;}
    break;

  case 94:
#line 753 "objc-parse.y"
    { (yyval.ttype) = error_mark_node; ;}
    break;

  case 95:
#line 755 "objc-parse.y"
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
		  (yyval.ttype) = expand_start_stmt_expr (); ;}
    break;

  case 96:
#line 769 "objc-parse.y"
    { tree rtl_exp;
		  if (pedantic)
		    pedwarn ("ANSI C forbids braced-groups within expressions");
		  pop_iterator_stack ();
		  pop_label_level ();
		  rtl_exp = expand_end_stmt_expr ((yyvsp[-2].ttype));
		  /* The statements have side effects, so the group does.  */
		  TREE_SIDE_EFFECTS (rtl_exp) = 1;

		  if (TREE_CODE ((yyvsp[-1].ttype)) == BLOCK)
		    {
		      /* Make a BIND_EXPR for the BLOCK already made.  */
		      (yyval.ttype) = build (BIND_EXPR, TREE_TYPE (rtl_exp),
				  NULL_TREE, rtl_exp, (yyvsp[-1].ttype));
		      /* Remove the block from the tree at this point.
			 It gets put back at the proper place
			 when the BIND_EXPR is expanded.  */
		      delete_block ((yyvsp[-1].ttype));
		    }
		  else
		    (yyval.ttype) = (yyvsp[-1].ttype);
		;}
    break;

  case 97:
#line 792 "objc-parse.y"
    { (yyval.ttype) = build_function_call ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 98:
#line 794 "objc-parse.y"
    {
		  tree c;

		  c = fold((yyvsp[-5].ttype));
		  STRIP_NOPS (c);
		  if (TREE_CODE (c) != INTEGER_CST)
		    error ("first argument to __builtin_choose_expr not a constant");
		  (yyval.ttype) = integer_zerop (c) ? (yyvsp[-1].ttype) : (yyvsp[-3].ttype);
		;}
    break;

  case 99:
#line 804 "objc-parse.y"
    {
		  tree e1, e2;

		  e1 = TYPE_MAIN_VARIANT (groktypename ((yyvsp[-3].ttype)));
		  e2 = TYPE_MAIN_VARIANT (groktypename ((yyvsp[-1].ttype)));
		  (yyval.ttype) = comptypes (e1, e2) ?
		    build_int_2 (1, 0) : build_int_2 (0, 0);
		;}
    break;

  case 100:
#line 813 "objc-parse.y"
    { (yyval.ttype) = build_array_ref ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 101:
#line 815 "objc-parse.y"
    {
                  if (doing_objc_thang)
                    {
		      if (is_public ((yyvsp[-2].ttype), (yyvsp[0].ttype)))
			(yyval.ttype) = build_component_ref ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		      else
			(yyval.ttype) = error_mark_node;
		    }
                  else
		    (yyval.ttype) = build_component_ref ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 102:
#line 827 "objc-parse.y"
    {
                  tree expr = build_indirect_ref ((yyvsp[-2].ttype), "->");

                  if (doing_objc_thang)
                    {
		      if (is_public (expr, (yyvsp[0].ttype)))
			(yyval.ttype) = build_component_ref (expr, (yyvsp[0].ttype));
		      else
			(yyval.ttype) = error_mark_node;
		    }
                  else
                    (yyval.ttype) = build_component_ref (expr, (yyvsp[0].ttype));
		;}
    break;

  case 103:
#line 841 "objc-parse.y"
    { (yyval.ttype) = build_unary_op (POSTINCREMENT_EXPR, (yyvsp[-1].ttype), 0); ;}
    break;

  case 104:
#line 843 "objc-parse.y"
    { (yyval.ttype) = build_unary_op (POSTDECREMENT_EXPR, (yyvsp[-1].ttype), 0); ;}
    break;

  case 105:
#line 845 "objc-parse.y"
    { (yyval.ttype) = build_message_expr ((yyvsp[0].ttype)); ;}
    break;

  case 106:
#line 847 "objc-parse.y"
    { (yyval.ttype) = build_selector_expr ((yyvsp[0].ttype)); ;}
    break;

  case 107:
#line 849 "objc-parse.y"
    { (yyval.ttype) = build_protocol_expr ((yyvsp[0].ttype)); ;}
    break;

  case 108:
#line 851 "objc-parse.y"
    { (yyval.ttype) = build_encode_expr ((yyvsp[0].ttype)); ;}
    break;

  case 109:
#line 853 "objc-parse.y"
    { (yyval.ttype) = build_objc_string_object ((yyvsp[0].ttype)); ;}
    break;

  case 111:
#line 860 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 113:
#line 868 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 116:
#line 876 "objc-parse.y"
    { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ANSI C does not permit use of `varargs.h'"); ;}
    break;

  case 117:
#line 886 "objc-parse.y"
    { ;}
    break;

  case 122:
#line 902 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 123:
#line 907 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);	
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 124:
#line 912 "objc-parse.y"
    { shadow_tag_warned ((yyvsp[-1].ttype), 1);
		  pedwarn ("empty declaration"); ;}
    break;

  case 125:
#line 915 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 126:
#line 924 "objc-parse.y"
    { ;}
    break;

  case 131:
#line 939 "objc-parse.y"
    { (yyval.itype) = suspend_momentary ();
		  pending_xref_error ();
		  declspec_stack = tree_cons (prefix_attributes,
					      current_declspecs,
					      declspec_stack);
		  split_specs_attrs ((yyvsp[0].ttype),
				     &current_declspecs, &prefix_attributes); ;}
    break;

  case 132:
#line 950 "objc-parse.y"
    { prefix_attributes = chainon (prefix_attributes, (yyvsp[0].ttype)); ;}
    break;

  case 133:
#line 955 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 134:
#line 960 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 135:
#line 965 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 136:
#line 970 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 137:
#line 975 "objc-parse.y"
    { shadow_tag ((yyvsp[-1].ttype)); ;}
    break;

  case 138:
#line 977 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 139:
#line 979 "objc-parse.y"
    { pedantic = (yyvsp[-1].itype); ;}
    break;

  case 140:
#line 989 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 141:
#line 991 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); ;}
    break;

  case 142:
#line 995 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 143:
#line 997 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 144:
#line 999 "objc-parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 145:
#line 1004 "objc-parse.y"
    { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); ;}
    break;

  case 146:
#line 1009 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 147:
#line 1011 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); ;}
    break;

  case 148:
#line 1016 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 149:
#line 1018 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 150:
#line 1020 "objc-parse.y"
    { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 151:
#line 1033 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 152:
#line 1035 "objc-parse.y"
    { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, NULL_TREE); ;}
    break;

  case 153:
#line 1037 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 154:
#line 1039 "objc-parse.y"
    { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); ;}
    break;

  case 155:
#line 1044 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; ;}
    break;

  case 156:
#line 1047 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 157:
#line 1049 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; ;}
    break;

  case 158:
#line 1052 "objc-parse.y"
    { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); ;}
    break;

  case 159:
#line 1066 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 160:
#line 1068 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); ;}
    break;

  case 161:
#line 1072 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 162:
#line 1074 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 165:
#line 1084 "objc-parse.y"
    { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  (yyval.ttype) = lookup_name ((yyvsp[0].ttype)); ;}
    break;

  case 166:
#line 1088 "objc-parse.y"
    { (yyval.ttype) = get_static_reference ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 167:
#line 1090 "objc-parse.y"
    { (yyval.ttype) = get_object_reference ((yyvsp[0].ttype)); ;}
    break;

  case 168:
#line 1095 "objc-parse.y"
    { (yyval.ttype) = get_object_reference ((yyvsp[0].ttype)); ;}
    break;

  case 169:
#line 1097 "objc-parse.y"
    { (yyval.ttype) = TREE_TYPE ((yyvsp[-1].ttype)); ;}
    break;

  case 170:
#line 1099 "objc-parse.y"
    { (yyval.ttype) = groktypename ((yyvsp[-1].ttype)); ;}
    break;

  case 178:
#line 1121 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 179:
#line 1123 "objc-parse.y"
    { if (TREE_CHAIN ((yyvsp[-1].ttype))) (yyvsp[-1].ttype) = combine_strings ((yyvsp[-1].ttype));
		  (yyval.ttype) = (yyvsp[-1].ttype);
		;}
    break;

  case 180:
#line 1130 "objc-parse.y"
    { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); ;}
    break;

  case 181:
#line 1135 "objc-parse.y"
    { finish_init ();
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); ;}
    break;

  case 182:
#line 1138 "objc-parse.y"
    { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); 
                ;}
    break;

  case 183:
#line 1146 "objc-parse.y"
    { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); ;}
    break;

  case 184:
#line 1151 "objc-parse.y"
    { finish_init ();
		  decl_attributes ((yyvsp[-1].ttype), (yyvsp[-3].ttype), prefix_attributes);
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); ;}
    break;

  case 185:
#line 1155 "objc-parse.y"
    { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); ;}
    break;

  case 186:
#line 1163 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 187:
#line 1165 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 188:
#line 1170 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 189:
#line 1172 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 190:
#line 1177 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[-2].ttype); ;}
    break;

  case 191:
#line 1182 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 192:
#line 1184 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 193:
#line 1189 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 194:
#line 1191 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 195:
#line 1193 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), build_tree_list (NULL_TREE, (yyvsp[-1].ttype))); ;}
    break;

  case 196:
#line 1195 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-5].ttype), tree_cons (NULL_TREE, (yyvsp[-3].ttype), (yyvsp[-1].ttype))); ;}
    break;

  case 197:
#line 1197 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 203:
#line 1215 "objc-parse.y"
    { really_start_incremental_init (NULL_TREE);
		  /* Note that the call to clear_momentary
		     is in process_init_element.  */
		  push_momentary (); ;}
    break;

  case 204:
#line 1220 "objc-parse.y"
    { (yyval.ttype) = pop_init_level (0);
		  if ((yyval.ttype) == error_mark_node
		      && ! (yychar == STRING || yychar == CONSTANT))
		    pop_momentary ();
		  else
		    pop_momentary_nofree (); ;}
    break;

  case 205:
#line 1228 "objc-parse.y"
    { (yyval.ttype) = error_mark_node; ;}
    break;

  case 206:
#line 1234 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids empty initializer braces"); ;}
    break;

  case 212:
#line 1250 "objc-parse.y"
    { set_init_label ((yyvsp[-1].ttype)); ;}
    break;

  case 215:
#line 1257 "objc-parse.y"
    { push_init_level (0); ;}
    break;

  case 216:
#line 1259 "objc-parse.y"
    { process_init_element (pop_init_level (0)); ;}
    break;

  case 217:
#line 1261 "objc-parse.y"
    { process_init_element ((yyvsp[0].ttype)); ;}
    break;

  case 221:
#line 1272 "objc-parse.y"
    { set_init_label ((yyvsp[0].ttype)); ;}
    break;

  case 222:
#line 1280 "objc-parse.y"
    { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); ;}
    break;

  case 223:
#line 1289 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 224:
#line 1297 "objc-parse.y"
    { finish_function (1);
		  pop_c_function_context (); ;}
    break;

  case 225:
#line 1303 "objc-parse.y"
    { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); ;}
    break;

  case 226:
#line 1312 "objc-parse.y"
    { store_parm_decls (); ;}
    break;

  case 227:
#line 1320 "objc-parse.y"
    { finish_function (1);
		  pop_c_function_context (); ;}
    break;

  case 230:
#line 1336 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[-1].ttype); ;}
    break;

  case 231:
#line 1338 "objc-parse.y"
    { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 232:
#line 1343 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 233:
#line 1345 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); ;}
    break;

  case 234:
#line 1347 "objc-parse.y"
    { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 235:
#line 1354 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 238:
#line 1366 "objc-parse.y"
    { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 239:
#line 1371 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 240:
#line 1373 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); ;}
    break;

  case 241:
#line 1375 "objc-parse.y"
    { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 242:
#line 1382 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 244:
#line 1391 "objc-parse.y"
    { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 245:
#line 1396 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[-1].ttype); ;}
    break;

  case 246:
#line 1398 "objc-parse.y"
    { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 247:
#line 1400 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 248:
#line 1402 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); ;}
    break;

  case 249:
#line 1409 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 251:
#line 1415 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 252:
#line 1417 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 253:
#line 1422 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 254:
#line 1424 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 255:
#line 1429 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 256:
#line 1431 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 257:
#line 1436 "objc-parse.y"
    { (yyval.ttype) = start_struct (RECORD_TYPE, (yyvsp[-1].ttype));
		  /* Start scope of tag before parsing components.  */
		;}
    break;

  case 258:
#line 1440 "objc-parse.y"
    { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); ;}
    break;

  case 259:
#line 1442 "objc-parse.y"
    { (yyval.ttype) = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		;}
    break;

  case 260:
#line 1446 "objc-parse.y"
    { (yyval.ttype) = xref_tag (RECORD_TYPE, (yyvsp[0].ttype)); ;}
    break;

  case 261:
#line 1448 "objc-parse.y"
    { (yyval.ttype) = start_struct (UNION_TYPE, (yyvsp[-1].ttype)); ;}
    break;

  case 262:
#line 1450 "objc-parse.y"
    { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); ;}
    break;

  case 263:
#line 1452 "objc-parse.y"
    { (yyval.ttype) = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		;}
    break;

  case 264:
#line 1456 "objc-parse.y"
    { (yyval.ttype) = xref_tag (UNION_TYPE, (yyvsp[0].ttype)); ;}
    break;

  case 265:
#line 1458 "objc-parse.y"
    { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum ((yyvsp[-1].ttype)); ;}
    break;

  case 266:
#line 1461 "objc-parse.y"
    { (yyval.ttype)= finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), chainon ((yyvsp[-7].ttype), (yyvsp[0].ttype)));
		  resume_momentary ((yyvsp[-5].itype)); ;}
    break;

  case 267:
#line 1464 "objc-parse.y"
    { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum (NULL_TREE); ;}
    break;

  case 268:
#line 1467 "objc-parse.y"
    { (yyval.ttype)= finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype)));
		  resume_momentary ((yyvsp[-5].itype)); ;}
    break;

  case 269:
#line 1470 "objc-parse.y"
    { (yyval.ttype) = xref_tag (ENUMERAL_TYPE, (yyvsp[0].ttype)); ;}
    break;

  case 273:
#line 1481 "objc-parse.y"
    { if (pedantic && ! flag_isoc9x)
		    pedwarn ("comma at end of enumerator list"); ;}
    break;

  case 274:
#line 1487 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 275:
#line 1489 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		  pedwarn ("no semicolon at end of struct or union"); ;}
    break;

  case 276:
#line 1494 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 277:
#line 1496 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 278:
#line 1498 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); ;}
    break;

  case 279:
#line 1502 "objc-parse.y"
    {
		  tree interface = lookup_interface ((yyvsp[-1].ttype));

		  if (interface)
		    (yyval.ttype) = get_class_ivars (interface);
		  else
		    {
		      error ("Cannot find interface declaration for `%s'",
			     IDENTIFIER_POINTER ((yyvsp[-1].ttype)));
		      (yyval.ttype) = NULL_TREE;
		    }
		;}
    break;

  case 280:
#line 1527 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 281:
#line 1533 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; ;}
    break;

  case 282:
#line 1538 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 283:
#line 1544 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; ;}
    break;

  case 284:
#line 1549 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 285:
#line 1551 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); ;}
    break;

  case 287:
#line 1558 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 288:
#line 1563 "objc-parse.y"
    { (yyval.ttype) = grokfield ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-1].ttype), current_declspecs, NULL_TREE);
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); ;}
    break;

  case 289:
#line 1567 "objc-parse.y"
    { (yyval.ttype) = grokfield ((yyvsp[-5].filename), (yyvsp[-4].lineno), (yyvsp[-3].ttype), current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); ;}
    break;

  case 290:
#line 1570 "objc-parse.y"
    { (yyval.ttype) = grokfield ((yyvsp[-4].filename), (yyvsp[-3].lineno), NULL_TREE, current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); ;}
    break;

  case 292:
#line 1582 "objc-parse.y"
    { if ((yyvsp[-2].ttype) == error_mark_node)
		    (yyval.ttype) = (yyvsp[-2].ttype);
		  else
		    (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-2].ttype)); ;}
    break;

  case 293:
#line 1587 "objc-parse.y"
    { (yyval.ttype) = error_mark_node; ;}
    break;

  case 294:
#line 1593 "objc-parse.y"
    { (yyval.ttype) = build_enumerator ((yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 295:
#line 1595 "objc-parse.y"
    { (yyval.ttype) = build_enumerator ((yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 296:
#line 1600 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 297:
#line 1602 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 298:
#line 1607 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 300:
#line 1613 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 301:
#line 1615 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 302:
#line 1620 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 303:
#line 1622 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 304:
#line 1627 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[-1].ttype); ;}
    break;

  case 305:
#line 1630 "objc-parse.y"
    { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 306:
#line 1632 "objc-parse.y"
    { (yyval.ttype) = make_pointer_declarator ((yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 307:
#line 1634 "objc-parse.y"
    { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 308:
#line 1636 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 309:
#line 1638 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); ;}
    break;

  case 310:
#line 1640 "objc-parse.y"
    { (yyval.ttype) = build_nt (CALL_EXPR, NULL_TREE, (yyvsp[0].ttype), NULL_TREE); ;}
    break;

  case 311:
#line 1642 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, (yyvsp[-1].ttype)); ;}
    break;

  case 312:
#line 1644 "objc-parse.y"
    { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, NULL_TREE); ;}
    break;

  case 313:
#line 1648 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 314:
#line 1657 "objc-parse.y"
    {
		  if (pedantic && (yyvsp[0].ends_in_label))
		    pedwarn ("ANSI C forbids label at end of compound statement");
		;}
    break;

  case 316:
#line 1666 "objc-parse.y"
    { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); ;}
    break;

  case 317:
#line 1668 "objc-parse.y"
    { (yyval.ends_in_label) = 0; ;}
    break;

  case 321:
#line 1680 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  pushlevel (0);
		  clear_last_expr ();
		  push_momentary ();
		  expand_start_bindings (0);
		  if (objc_method_context)
		    add_objc_decls ();
		;}
    break;

  case 323:
#line 1695 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids label declarations"); ;}
    break;

  case 326:
#line 1706 "objc-parse.y"
    { tree link;
		  for (link = (yyvsp[-1].ttype); link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      declare_nonlocal_label (label);
		    }
		;}
    break;

  case 327:
#line 1720 "objc-parse.y"
    {;}
    break;

  case 329:
#line 1724 "objc-parse.y"
    { compstmt_count++; ;}
    break;

  case 330:
#line 1727 "objc-parse.y"
    { (yyval.ttype) = convert (void_type_node, integer_zero_node); ;}
    break;

  case 331:
#line 1729 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), 1, 0);
		  (yyval.ttype) = poplevel (1, 1, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 332:
#line 1737 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 333:
#line 1745 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 336:
#line 1765 "objc-parse.y"
    { emit_line_note ((yyvsp[-5].filename), (yyvsp[-4].lineno));
		  c_expand_start_cond (truthvalue_conversion ((yyvsp[-1].ttype)), 0, 
				       compstmt_count);
		  (yyval.itype) = stmt_count;
		  if_stmt_file = (yyvsp[-5].filename);
		  if_stmt_line = (yyvsp[-4].lineno);
		  position_after_white_space (); ;}
    break;

  case 337:
#line 1779 "objc-parse.y"
    { stmt_count++;
		  compstmt_count++;
		  emit_line_note ((yyvsp[-2].filename), (yyvsp[-1].lineno));
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  expand_start_loop_continue_elsewhere (1);
		  position_after_white_space (); ;}
    break;

  case 338:
#line 1787 "objc-parse.y"
    { expand_loop_continue_here (); ;}
    break;

  case 339:
#line 1791 "objc-parse.y"
    { (yyval.filename) = input_filename; ;}
    break;

  case 340:
#line 1795 "objc-parse.y"
    { (yyval.lineno) = lineno; ;}
    break;

  case 341:
#line 1800 "objc-parse.y"
    { ;}
    break;

  case 342:
#line 1805 "objc-parse.y"
    { ;}
    break;

  case 343:
#line 1810 "objc-parse.y"
    { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); ;}
    break;

  case 344:
#line 1815 "objc-parse.y"
    { (yyval.ends_in_label) = 0; ;}
    break;

  case 345:
#line 1817 "objc-parse.y"
    { (yyval.ends_in_label) = 1; ;}
    break;

  case 346:
#line 1823 "objc-parse.y"
    { stmt_count++; ;}
    break;

  case 348:
#line 1826 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-3].filename), (yyvsp[-2].lineno));
/* It appears that this should not be done--that a non-lvalue array
   shouldn't get an error if the value isn't used.
   Section 3.2.2.1 says that an array lvalue gets converted to a pointer
   if it appears as a top-level expression,
   but says nothing about non-lvalue arrays.  */
#if 0
		  /* Call default_conversion to get an error
		     on referring to a register array if pedantic.  */
		  if (TREE_CODE (TREE_TYPE ((yyvsp[-1].ttype))) == ARRAY_TYPE
		      || TREE_CODE (TREE_TYPE ((yyvsp[-1].ttype))) == FUNCTION_TYPE)
		    (yyvsp[-1].ttype) = default_conversion ((yyvsp[-1].ttype));
#endif
		  iterator_expand ((yyvsp[-1].ttype));
		  clear_momentary (); ;}
    break;

  case 349:
#line 1843 "objc-parse.y"
    { c_expand_start_else ();
		  (yyvsp[-1].itype) = stmt_count;
		  position_after_white_space (); ;}
    break;

  case 350:
#line 1847 "objc-parse.y"
    { c_expand_end_cond ();
		  if (extra_warnings && stmt_count == (yyvsp[-3].itype))
		    warning ("empty body in an else-statement"); ;}
    break;

  case 351:
#line 1851 "objc-parse.y"
    { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == (yyvsp[0].itype))
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); ;}
    break;

  case 352:
#line 1863 "objc-parse.y"
    { c_expand_end_cond (); ;}
    break;

  case 353:
#line 1865 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-2].filename), (yyvsp[-1].lineno));
		  /* The emit_nop used to come before emit_line_note,
		     but that made the nop seem like part of the preceding line.
		     And that was confusing when the preceding line was
		     inside of an if statement and was not really executed.
		     I think it ought to work to put the nop after the line number.
		     We will see.  --rms, July 15, 1991.  */
		  emit_nop (); ;}
    break;

  case 354:
#line 1875 "objc-parse.y"
    { /* Don't start the loop till we have succeeded
		     in parsing the end test.  This is to make sure
		     that we end every loop we start.  */
		  expand_start_loop (1);
		  emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-1].ttype)));
		  position_after_white_space (); ;}
    break;

  case 355:
#line 1884 "objc-parse.y"
    { expand_end_loop (); ;}
    break;

  case 356:
#line 1887 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-2].ttype)));
		  expand_end_loop ();
		  clear_momentary (); ;}
    break;

  case 357:
#line 1894 "objc-parse.y"
    { expand_end_loop ();
		  clear_momentary (); ;}
    break;

  case 358:
#line 1898 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-5].filename), (yyvsp[-4].lineno));
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  if ((yyvsp[-1].ttype)) c_expand_expr_stmt ((yyvsp[-1].ttype));
		  /* Next step is to call expand_start_loop_continue_elsewhere,
		     but wait till after we parse the entire for (...).
		     Otherwise, invalid input might cause us to call that
		     fn without calling expand_end_loop.  */
		;}
    break;

  case 359:
#line 1910 "objc-parse.y"
    { (yyvsp[0].lineno) = lineno;
		  (yyval.filename) = input_filename; ;}
    break;

  case 360:
#line 1913 "objc-parse.y"
    { 
		  /* Start the loop.  Doing this after parsing
		     all the expressions ensures we will end the loop.  */
		  expand_start_loop_continue_elsewhere (1);
		  /* Emit the end-test, with a line number.  */
		  emit_line_note ((yyvsp[-2].filename), (yyvsp[-3].lineno));
		  if ((yyvsp[-4].ttype))
		    expand_exit_loop_if_false (NULL_PTR,
					       truthvalue_conversion ((yyvsp[-4].ttype)));
		  /* Don't let the tree nodes for $9 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  (yyvsp[-3].lineno) = lineno;
		  (yyvsp[-2].filename) = input_filename;
		  position_after_white_space (); ;}
    break;

  case 361:
#line 1929 "objc-parse.y"
    { /* Emit the increment expression, with a line number.  */
		  emit_line_note ((yyvsp[-4].filename), (yyvsp[-5].lineno));
		  expand_loop_continue_here ();
		  if ((yyvsp[-3].ttype))
		    c_expand_expr_stmt ((yyvsp[-3].ttype));
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary ();
		  expand_end_loop (); ;}
    break;

  case 362:
#line 1940 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-5].filename), (yyvsp[-4].lineno));
		  c_expand_start_case ((yyvsp[-1].ttype));
		  /* Don't let the tree nodes for $3 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  position_after_white_space (); ;}
    break;

  case 363:
#line 1948 "objc-parse.y"
    { expand_end_case ((yyvsp[-3].ttype));
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); ;}
    break;

  case 364:
#line 1954 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-3].filename), (yyvsp[-2].lineno));
		  if ( ! expand_exit_something ())
		    error ("break statement not within loop or switch"); ;}
    break;

  case 365:
#line 1959 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-3].filename), (yyvsp[-2].lineno));
		  if (! expand_continue_loop (NULL_PTR))
		    error ("continue statement not within a loop"); ;}
    break;

  case 366:
#line 1964 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-3].filename), (yyvsp[-2].lineno));
		  c_expand_return (NULL_TREE); ;}
    break;

  case 367:
#line 1968 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-4].filename), (yyvsp[-3].lineno));
		  c_expand_return ((yyvsp[-1].ttype)); ;}
    break;

  case 368:
#line 1972 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-7].filename), (yyvsp[-6].lineno));
		  STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    expand_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); ;}
    break;

  case 369:
#line 1983 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-9].filename), (yyvsp[-8].lineno));
		  c_expand_asm_operands ((yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE, NULL_TREE,
					 (yyvsp[-6].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 370:
#line 1990 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-11].filename), (yyvsp[-10].lineno));
		  c_expand_asm_operands ((yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE,
					 (yyvsp[-8].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 371:
#line 1998 "objc-parse.y"
    { stmt_count++;
		  emit_line_note ((yyvsp[-13].filename), (yyvsp[-12].lineno));
		  c_expand_asm_operands ((yyvsp[-8].ttype), (yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype),
					 (yyvsp[-10].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); ;}
    break;

  case 372:
#line 2004 "objc-parse.y"
    { tree decl;
		  stmt_count++;
		  emit_line_note ((yyvsp[-4].filename), (yyvsp[-3].lineno));
		  decl = lookup_label ((yyvsp[-1].ttype));
		  if (decl != 0)
		    {
		      TREE_USED (decl) = 1;
		      expand_goto (decl);
		    }
		;}
    break;

  case 373:
#line 2015 "objc-parse.y"
    { if (pedantic)
		    pedwarn ("ANSI C forbids `goto *expr;'");
		  stmt_count++;
		  emit_line_note ((yyvsp[-5].filename), (yyvsp[-4].lineno));
		  expand_computed_goto (convert (ptr_type_node, (yyvsp[-1].ttype))); ;}
    break;

  case 376:
#line 2030 "objc-parse.y"
    {
	    /* The value returned by this action is  */
	    /*      1 if everything is OK */ 
	    /*      0 in case of error or already bound iterator */

	    (yyval.itype) = 0;
	    if (TREE_CODE ((yyvsp[-1].ttype)) != VAR_DECL)
	      error ("invalid `for (ITERATOR)' syntax");
	    else if (! ITERATOR_P ((yyvsp[-1].ttype)))
	      error ("`%s' is not an iterator",
		     IDENTIFIER_POINTER (DECL_NAME ((yyvsp[-1].ttype))));
	    else if (ITERATOR_BOUND_P ((yyvsp[-1].ttype)))
	      error ("`for (%s)' inside expansion of same iterator",
		     IDENTIFIER_POINTER (DECL_NAME ((yyvsp[-1].ttype))));
	    else
	      {
		(yyval.itype) = 1;
		iterator_for_loop_start ((yyvsp[-1].ttype));
	      }
	  ;}
    break;

  case 377:
#line 2051 "objc-parse.y"
    {
	    if ((yyvsp[-1].itype))
	      iterator_for_loop_end ((yyvsp[-3].ttype));
	  ;}
    break;

  case 378:
#line 2086 "objc-parse.y"
    { register tree value = check_case_value ((yyvsp[-1].ttype));
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

  case 379:
#line 2117 "objc-parse.y"
    { register tree value1 = check_case_value ((yyvsp[-3].ttype));
		  register tree value2 = check_case_value ((yyvsp[-1].ttype));
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

  case 380:
#line 2148 "objc-parse.y"
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

  case 381:
#line 2163 "objc-parse.y"
    { tree label = define_label (input_filename, lineno, (yyvsp[-2].ttype));
		  stmt_count++;
		  emit_nop ();
		  if (label)
		    {
		      expand_label (label);
		      decl_attributes (label, (yyvsp[0].ttype), NULL_TREE);
		    }
		  position_after_white_space (); ;}
    break;

  case 382:
#line 2178 "objc-parse.y"
    { emit_line_note (input_filename, lineno);
		  (yyval.ttype) = NULL_TREE; ;}
    break;

  case 383:
#line 2181 "objc-parse.y"
    { emit_line_note (input_filename, lineno); ;}
    break;

  case 384:
#line 2186 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 386:
#line 2193 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 389:
#line 2200 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); ;}
    break;

  case 390:
#line 2205 "objc-parse.y"
    { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); ;}
    break;

  case 391:
#line 2210 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), NULL_TREE); ;}
    break;

  case 392:
#line 2212 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), (yyvsp[-2].ttype)); ;}
    break;

  case 393:
#line 2218 "objc-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); ;}
    break;

  case 394:
#line 2222 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 396:
#line 2230 "objc-parse.y"
    { tree parm;
		  if (pedantic)
		    pedwarn ("ANSI C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); ;}
    break;

  case 397:
#line 2238 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype); ;}
    break;

  case 398:
#line 2240 "objc-parse.y"
    { (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); ;}
    break;

  case 399:
#line 2246 "objc-parse.y"
    { (yyval.ttype) = get_parm_info (0); ;}
    break;

  case 400:
#line 2248 "objc-parse.y"
    { (yyval.ttype) = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ANSI C requires a named argument before `...'");
		;}
    break;

  case 401:
#line 2258 "objc-parse.y"
    { (yyval.ttype) = get_parm_info (1); ;}
    break;

  case 402:
#line 2260 "objc-parse.y"
    { (yyval.ttype) = get_parm_info (0); ;}
    break;

  case 403:
#line 2265 "objc-parse.y"
    { push_parm_decl ((yyvsp[0].ttype)); ;}
    break;

  case 404:
#line 2267 "objc-parse.y"
    { push_parm_decl ((yyvsp[0].ttype)); ;}
    break;

  case 405:
#line 2274 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 406:
#line 2283 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 407:
#line 2292 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 408:
#line 2301 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  ;}
    break;

  case 409:
#line 2311 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  ;}
    break;

  case 410:
#line 2325 "objc-parse.y"
    { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); ;}
    break;

  case 411:
#line 2329 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); ;}
    break;

  case 413:
#line 2337 "objc-parse.y"
    { tree t;
		  for (t = (yyvsp[-1].ttype); t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, (yyvsp[-1].ttype)); ;}
    break;

  case 414:
#line 2347 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); ;}
    break;

  case 415:
#line 2349 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); ;}
    break;

  case 416:
#line 2355 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); ;}
    break;

  case 417:
#line 2357 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); ;}
    break;

  case 418:
#line 2362 "objc-parse.y"
    { (yyval.itype) = pedantic;
		  pedantic = 0; ;}
    break;

  case 424:
#line 2375 "objc-parse.y"
    {
		  if (objc_implementation_context)
                    {
		      finish_class (objc_implementation_context);
		      objc_ivar_chain = NULL_TREE;
		      objc_implementation_context = NULL_TREE;
		    }
		  else
		    warning ("`@end' must appear in an implementation context");
		;}
    break;

  case 425:
#line 2390 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); ;}
    break;

  case 426:
#line 2392 "objc-parse.y"
    { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); ;}
    break;

  case 427:
#line 2397 "objc-parse.y"
    {
		  objc_declare_class ((yyvsp[-1].ttype));
		;}
    break;

  case 428:
#line 2403 "objc-parse.y"
    {
		  objc_declare_alias ((yyvsp[-2].ttype), (yyvsp[-1].ttype));
		;}
    break;

  case 429:
#line 2409 "objc-parse.y"
    {
		  objc_interface_context = objc_ivar_context
		    = start_class (CLASS_INTERFACE_TYPE, (yyvsp[-2].ttype), NULL_TREE, (yyvsp[-1].ttype));
                  objc_public_flag = 0;
		;}
    break;

  case 430:
#line 2415 "objc-parse.y"
    {
                  continue_class (objc_interface_context);
		;}
    break;

  case 431:
#line 2420 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 432:
#line 2426 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CLASS_INTERFACE_TYPE, (yyvsp[-1].ttype), NULL_TREE, (yyvsp[0].ttype));
                  continue_class (objc_interface_context);
		;}
    break;

  case 433:
#line 2433 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 434:
#line 2439 "objc-parse.y"
    {
		  objc_interface_context = objc_ivar_context
		    = start_class (CLASS_INTERFACE_TYPE, (yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  objc_public_flag = 0;
		;}
    break;

  case 435:
#line 2445 "objc-parse.y"
    {
                  continue_class (objc_interface_context);
		;}
    break;

  case 436:
#line 2450 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 437:
#line 2456 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CLASS_INTERFACE_TYPE, (yyvsp[-3].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  continue_class (objc_interface_context);
		;}
    break;

  case 438:
#line 2463 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 439:
#line 2469 "objc-parse.y"
    {
		  objc_implementation_context = objc_ivar_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, (yyvsp[-1].ttype), NULL_TREE, NULL_TREE);
                  objc_public_flag = 0;
		;}
    break;

  case 440:
#line 2475 "objc-parse.y"
    {
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 441:
#line 2481 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, (yyvsp[0].ttype), NULL_TREE, NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 442:
#line 2489 "objc-parse.y"
    {
		  objc_implementation_context = objc_ivar_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, (yyvsp[-3].ttype), (yyvsp[-1].ttype), NULL_TREE);
                  objc_public_flag = 0;
		;}
    break;

  case 443:
#line 2495 "objc-parse.y"
    {
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 444:
#line 2501 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CLASS_IMPLEMENTATION_TYPE, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 445:
#line 2509 "objc-parse.y"
    {
		  objc_interface_context
		    = start_class (CATEGORY_INTERFACE_TYPE, (yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
                  continue_class (objc_interface_context);
		;}
    break;

  case 446:
#line 2516 "objc-parse.y"
    {
		  finish_class (objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 447:
#line 2522 "objc-parse.y"
    {
		  objc_implementation_context
		    = start_class (CATEGORY_IMPLEMENTATION_TYPE, (yyvsp[-3].ttype), (yyvsp[-1].ttype), NULL_TREE);
                  objc_ivar_chain
		    = continue_class (objc_implementation_context);
		;}
    break;

  case 448:
#line 2532 "objc-parse.y"
    {
		  remember_protocol_qualifiers ();
		  objc_interface_context
		    = start_protocol(PROTOCOL_INTERFACE_TYPE, (yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 449:
#line 2538 "objc-parse.y"
    {
		  forget_protocol_qualifiers();
		  finish_protocol(objc_interface_context);
		  objc_interface_context = NULL_TREE;
		;}
    break;

  case 450:
#line 2547 "objc-parse.y"
    {
		  (yyval.ttype) = NULL_TREE;
		;}
    break;

  case 452:
#line 2555 "objc-parse.y"
    {
		  if ((yyvsp[-2].code) == LT_EXPR && (yyvsp[0].code) == GT_EXPR)
		    (yyval.ttype) = (yyvsp[-1].ttype);
		  else
		    YYERROR1;
		;}
    break;

  case 455:
#line 2569 "objc-parse.y"
    { objc_public_flag = 2; ;}
    break;

  case 456:
#line 2570 "objc-parse.y"
    { objc_public_flag = 0; ;}
    break;

  case 457:
#line 2571 "objc-parse.y"
    { objc_public_flag = 1; ;}
    break;

  case 458:
#line 2576 "objc-parse.y"
    {
                  (yyval.ttype) = NULL_TREE;
                ;}
    break;

  case 460:
#line 2581 "objc-parse.y"
    {
                  if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified");
                ;}
    break;

  case 461:
#line 2599 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 462:
#line 2605 "objc-parse.y"
    { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); ;}
    break;

  case 463:
#line 2611 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 464:
#line 2616 "objc-parse.y"
    { (yyval.ttype) = NULL_TREE; ;}
    break;

  case 467:
#line 2623 "objc-parse.y"
    {
		  (yyval.ttype) = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      (yyvsp[0].ttype), current_declspecs,
					      NULL_TREE);
                ;}
    break;

  case 468:
#line 2630 "objc-parse.y"
    {
		  (yyval.ttype) = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      (yyvsp[-2].ttype), current_declspecs, (yyvsp[0].ttype));
                ;}
    break;

  case 469:
#line 2636 "objc-parse.y"
    {
		  (yyval.ttype) = add_instance_variable (objc_ivar_context,
					      objc_public_flag,
					      NULL_TREE,
					      current_declspecs, (yyvsp[0].ttype));
                ;}
    break;

  case 470:
#line 2646 "objc-parse.y"
    {
		  remember_protocol_qualifiers ();
		  if (objc_implementation_context)
		    objc_inherit_code = CLASS_METHOD_DECL;
                  else
		    fatal ("method definition not in class context");
		;}
    break;

  case 471:
#line 2654 "objc-parse.y"
    {
		  forget_protocol_qualifiers ();
		  add_class_method (objc_implementation_context, (yyvsp[0].ttype));
		  start_method_def ((yyvsp[0].ttype));
		  objc_method_context = (yyvsp[0].ttype);
		;}
    break;

  case 472:
#line 2661 "objc-parse.y"
    {
		  continue_method_def ();
		;}
    break;

  case 473:
#line 2665 "objc-parse.y"
    {
		  finish_method_def ();
		  objc_method_context = NULL_TREE;
		;}
    break;

  case 474:
#line 2671 "objc-parse.y"
    {
		  remember_protocol_qualifiers ();
		  if (objc_implementation_context)
		    objc_inherit_code = INSTANCE_METHOD_DECL;
                  else
		    fatal ("method definition not in class context");
		;}
    break;

  case 475:
#line 2679 "objc-parse.y"
    {
		  forget_protocol_qualifiers ();
		  add_instance_method (objc_implementation_context, (yyvsp[0].ttype));
		  start_method_def ((yyvsp[0].ttype));
		  objc_method_context = (yyvsp[0].ttype);
		;}
    break;

  case 476:
#line 2686 "objc-parse.y"
    {
		  continue_method_def ();
		;}
    break;

  case 477:
#line 2690 "objc-parse.y"
    {
		  finish_method_def ();
		  objc_method_context = NULL_TREE;
		;}
    break;

  case 479:
#line 2702 "objc-parse.y"
    {(yyval.ttype) = NULL_TREE; ;}
    break;

  case 484:
#line 2709 "objc-parse.y"
    {(yyval.ttype) = NULL_TREE; ;}
    break;

  case 488:
#line 2719 "objc-parse.y"
    {
		  /* Remember protocol qualifiers in prototypes.  */
		  remember_protocol_qualifiers ();
		  objc_inherit_code = CLASS_METHOD_DECL;
		;}
    break;

  case 489:
#line 2725 "objc-parse.y"
    {
		  /* Forget protocol qualifiers here.  */
		  forget_protocol_qualifiers ();
		  add_class_method (objc_interface_context, (yyvsp[0].ttype));
		;}
    break;

  case 491:
#line 2733 "objc-parse.y"
    {
		  /* Remember protocol qualifiers in prototypes.  */
		  remember_protocol_qualifiers ();
		  objc_inherit_code = INSTANCE_METHOD_DECL;
		;}
    break;

  case 492:
#line 2739 "objc-parse.y"
    {
		  /* Forget protocol qualifiers here.  */
		  forget_protocol_qualifiers ();
		  add_instance_method (objc_interface_context, (yyvsp[0].ttype));
		;}
    break;

  case 494:
#line 2749 "objc-parse.y"
    {
		  (yyval.ttype) = build_method_decl (objc_inherit_code, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE);
		;}
    break;

  case 495:
#line 2754 "objc-parse.y"
    {
		  (yyval.ttype) = build_method_decl (objc_inherit_code, NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		;}
    break;

  case 496:
#line 2759 "objc-parse.y"
    {
		  (yyval.ttype) = build_method_decl (objc_inherit_code, (yyvsp[-3].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 497:
#line 2764 "objc-parse.y"
    {
		  (yyval.ttype) = build_method_decl (objc_inherit_code, NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 506:
#line 2794 "objc-parse.y"
    { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); ;}
    break;

  case 507:
#line 2799 "objc-parse.y"
    { shadow_tag ((yyvsp[-1].ttype)); ;}
    break;

  case 508:
#line 2801 "objc-parse.y"
    { pedwarn ("empty declaration"); ;}
    break;

  case 509:
#line 2806 "objc-parse.y"
    { push_parm_decl ((yyvsp[0].ttype)); ;}
    break;

  case 510:
#line 2808 "objc-parse.y"
    { push_parm_decl ((yyvsp[0].ttype)); ;}
    break;

  case 511:
#line 2816 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); ;}
    break;

  case 512:
#line 2821 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); ;}
    break;

  case 513:
#line 2826 "objc-parse.y"
    { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); ;}
    break;

  case 514:
#line 2834 "objc-parse.y"
    {
	    	  (yyval.ttype) = NULL_TREE;
		;}
    break;

  case 515:
#line 2838 "objc-parse.y"
    {
		  /* oh what a kludge! */
		  (yyval.ttype) = (tree)1;
		;}
    break;

  case 516:
#line 2843 "objc-parse.y"
    {
		  pushlevel (0);
		;}
    break;

  case 517:
#line 2847 "objc-parse.y"
    {
	  	  /* returns a tree list node generated by get_parm_info */
		  (yyval.ttype) = (yyvsp[0].ttype);
		  poplevel (0, 0, 0);
		;}
    break;

  case 520:
#line 2862 "objc-parse.y"
    {
		  (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 525:
#line 2875 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 526:
#line 2876 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 527:
#line 2877 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 528:
#line 2878 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 529:
#line 2879 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 530:
#line 2880 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 531:
#line 2881 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 532:
#line 2882 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 533:
#line 2883 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 534:
#line 2884 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 535:
#line 2885 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 536:
#line 2886 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 537:
#line 2887 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 538:
#line 2888 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 539:
#line 2889 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 540:
#line 2890 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 541:
#line 2891 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 542:
#line 2892 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 543:
#line 2893 "objc-parse.y"
    { (yyval.ttype) = get_identifier (token_buffer); ;}
    break;

  case 546:
#line 2899 "objc-parse.y"
    {
		  (yyval.ttype) = build_keyword_decl ((yyvsp[-5].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 547:
#line 2904 "objc-parse.y"
    {
		  (yyval.ttype) = build_keyword_decl ((yyvsp[-2].ttype), NULL_TREE, (yyvsp[0].ttype));
		;}
    break;

  case 548:
#line 2909 "objc-parse.y"
    {
		  (yyval.ttype) = build_keyword_decl (NULL_TREE, (yyvsp[-2].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 549:
#line 2914 "objc-parse.y"
    {
		  (yyval.ttype) = build_keyword_decl (NULL_TREE, NULL_TREE, (yyvsp[0].ttype));
		;}
    break;

  case 553:
#line 2927 "objc-parse.y"
    {
		  (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 554:
#line 2935 "objc-parse.y"
    {
		  if (TREE_CHAIN ((yyvsp[0].ttype)) == NULL_TREE)
		    /* just return the expr., remove a level of indirection */
		    (yyval.ttype) = TREE_VALUE ((yyvsp[0].ttype));
                  else
		    /* we have a comma expr., we will collapse later */
		    (yyval.ttype) = (yyvsp[0].ttype);
		;}
    break;

  case 555:
#line 2947 "objc-parse.y"
    {
		  (yyval.ttype) = build_tree_list ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 556:
#line 2951 "objc-parse.y"
    {
		  (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype));
		;}
    break;

  case 558:
#line 2959 "objc-parse.y"
    {
		  (yyval.ttype) = get_class_reference ((yyvsp[0].ttype));
		;}
    break;

  case 559:
#line 2966 "objc-parse.y"
    { objc_receiver_context = 1; ;}
    break;

  case 560:
#line 2968 "objc-parse.y"
    { objc_receiver_context = 0; ;}
    break;

  case 561:
#line 2970 "objc-parse.y"
    {
		  (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype));
		;}
    break;

  case 565:
#line 2983 "objc-parse.y"
    {
		  (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		;}
    break;

  case 566:
#line 2990 "objc-parse.y"
    {
		  (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), NULL_TREE);
		;}
    break;

  case 567:
#line 2994 "objc-parse.y"
    {
		  (yyval.ttype) = build_tree_list (NULL_TREE, NULL_TREE);
		;}
    break;

  case 568:
#line 3001 "objc-parse.y"
    {
		  (yyval.ttype) = (yyvsp[-1].ttype);
		;}
    break;

  case 569:
#line 3008 "objc-parse.y"
    {
		  (yyval.ttype) = (yyvsp[-1].ttype);
		;}
    break;

  case 570:
#line 3017 "objc-parse.y"
    {
		  (yyval.ttype) = groktypename ((yyvsp[-1].ttype));
		;}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6024 "objc-parse.c"

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
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
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
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
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


#line 3022 "objc-parse.y"



