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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 87 "c-parse.y"
typedef union YYSTYPE {long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; } YYSTYPE;
/* Line 1248 of yacc.c.  */
#line 165 "c-parse.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



