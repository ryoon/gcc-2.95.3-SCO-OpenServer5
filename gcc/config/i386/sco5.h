/* Definitions for Intel 386 running SCO Unix System V 3.2 Version 5.
   Copyright (C) 1992, 95-98, 1999 Free Software Foundation, Inc.
   Contributed by Kean Johnston (jkj@caldera.com)

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#include "i386/i386.h"	/* Base i386 target definitions */
#include "i386/att.h"	/* Use AT&T i386 assembler syntax */

#undef TARGET_VERSION
#define TARGET_VERSION fprintf (stderr, " (i386, SCO OpenServer 5 Syntax)");

#undef LPREFIX
#define LPREFIX				".L"

#undef ALIGN_ASM_OP
#define ALIGN_ASM_OP			"\t.align"

#undef ASCII_DATA_ASM_OP
#define ASCII_DATA_ASM_OP		"\t.ascii"

#undef ASM_BYTE_OP
#define ASM_BYTE_OP			"\t.byte"

#undef IDENT_ASM_OP
#define IDENT_ASM_OP			"\t.ident"

#undef COMMON_ASM_OP
#define COMMON_ASM_OP			"\t.comm"

#undef SET_ASM_OP
#define SET_ASM_OP			"\t.set"

#undef LOCAL_ASM_OP
#define LOCAL_ASM_OP			"\t.local"

#undef INT_ASM_OP
#define INT_ASM_OP			"\t.long"

#undef ASM_SHORT
#define ASM_SHORT			"\t.value"

#undef ASM_LONG
#define ASM_LONG			"\t.long"

#undef ASM_DOUBLE
#define ASM_DOUBLE			"\t.double"

#undef TYPE_ASM_OP
#define TYPE_ASM_OP			"\t.type"

#undef SIZE_ASM_OP
#define SIZE_ASM_OP			"\t.size"

#undef STRING_ASM_OP
#define STRING_ASM_OP			"\t.string"

#undef SKIP_ASM_OP
#define SKIP_ASM_OP			"\t.zero"

#undef GLOBAL_ASM_OP
#define GLOBAL_ASM_OP			"\t.globl"

#undef EH_FRAME_SECTION_ASM_OP
#define EH_FRAME_SECTION_ASM_OP		"\t.section\t.eh_frame, \"aw\""

#define DWARF2_UNWIND_INFO		1

#undef CONST_SECTION_ASM_OP
#define CONST_SECTION_ASM_OP		"\t.section\t.rodata"

#undef USE_CONST_SECTION
#define USE_CONST_SECTION		1

#undef INIT_SECTION_ASM_OP
#define INIT_SECTION_ASM_OP		"\t.section\t.init"

#undef CTORS_SECTION_ASM_OP
#define CTORS_SECTION_ASM_OP		"\t.section\t.ctors,\"aw\""

#undef DTORS_SECTION_ASM_OP
#define DTORS_SECTION_ASM_OP		"\t.section\t.dtors, \"aw\""

#undef FINI_SECTION_ASM_OP
#define FINI_SECTION_ASM_OP		"\t.section\t.fini"

#undef BSS_SECTION_ASM_OP
#define BSS_SECTION_ASM_OP		"\t.data"

#undef TEXT_SECTION_ASM_OP
#define TEXT_SECTION_ASM_OP		"\t.text"

#undef DATA_SECTION_ASM_OP
#define DATA_SECTION_ASM_OP		"\t.data"

#undef TYPE_OPERAND_FMT
#define TYPE_OPERAND_FMT		"@%s"

#undef ASM_DECLARE_FUNCTION_NAME
#define ASM_DECLARE_FUNCTION_NAME(FILE, NAME, DECL)			\
  do {									\
      fprintf (FILE, "%s\t ", TYPE_ASM_OP);				\
      assemble_name (FILE, NAME);					\
      putc (',', FILE);							\
      fprintf (FILE, TYPE_OPERAND_FMT, "function");			\
      putc ('\n', FILE);						\
      ASM_OUTPUT_LABEL(FILE, NAME);					\
  } while (0)

#undef ASM_DECLARE_FUNCTION_SIZE
#define ASM_DECLARE_FUNCTION_SIZE(FILE, FNAME, DECL)			\
  do {									\
    if (!flag_inhibit_size_directive)					\
      {									\
	fprintf (FILE, "%s\t ", SIZE_ASM_OP);				\
	assemble_name (FILE, (FNAME));					\
        fprintf (FILE, ",.-");						\
	assemble_name (FILE, (FNAME));					\
	putc ('\n', FILE);						\
      }									\
  } while (0)

#undef ASM_DECLARE_OBJECT_NAME
#define ASM_DECLARE_OBJECT_NAME(FILE, NAME, DECL)			\
  do {									\
      fprintf (FILE, "%s\t ", TYPE_ASM_OP);				\
      assemble_name (FILE, NAME);					\
      putc (',', FILE);							\
      fprintf (FILE, TYPE_OPERAND_FMT, "object");			\
      putc ('\n', FILE);						\
      size_directive_output = 0;					\
      if (!flag_inhibit_size_directive && DECL_SIZE (DECL))		\
        {								\
  	size_directive_output = 1;					\
	fprintf (FILE, "%s\t ", SIZE_ASM_OP);				\
	assemble_name (FILE, NAME);					\
	fprintf (FILE, ",%d\n",  int_size_in_bytes (TREE_TYPE (DECL)));	\
        }								\
      ASM_OUTPUT_LABEL(FILE, NAME);					\
  } while (0)

#undef ASM_FILE_START_1
#define ASM_FILE_START_1(FILE)

#undef ASM_FILE_START
#define ASM_FILE_START(FILE)						\
do {									\
  output_file_directive((FILE),main_input_filename);			\
  fprintf ((FILE), "\t.version\t\"01.01\"\n");				\
} while (0)

#undef ASM_FILE_END
#define ASM_FILE_END(FILE)						\
do {									\
     if (!flag_no_ident)						\
	fprintf ((FILE), "%s\t\"GCC: (GNU) %s\"\n",			\
		 IDENT_ASM_OP, version_string);				\
} while (0)

#undef ASM_FINISH_DECLARE_OBJECT
#define ASM_FINISH_DECLARE_OBJECT(FILE, DECL, TOP_LEVEL, AT_END)	 \
  do {									 \
     char *name = XSTR (XEXP (DECL_RTL (DECL), 0), 0);			 \
     if (!flag_inhibit_size_directive && DECL_SIZE (DECL)		 \
         && ! AT_END && TOP_LEVEL					 \
	 && DECL_INITIAL (DECL) == error_mark_node			 \
	 && !size_directive_output)					 \
       {								 \
	 size_directive_output = 1;					 \
	 fprintf (FILE, "%s\t ", SIZE_ASM_OP);			 	 \
	 assemble_name (FILE, name);					 \
	 fprintf (FILE, ",%d\n",  int_size_in_bytes (TREE_TYPE (DECL))); \
       }								 \
  } while (0)

#undef ASM_GENERATE_INTERNAL_LABEL
#define ASM_GENERATE_INTERNAL_LABEL(LABEL, PREFIX, NUM)			\
  sprintf (LABEL, "*.%s%d", (PREFIX), (NUM))

#undef ASM_OUTPUT_ADDR_DIFF_ELT
#define ASM_OUTPUT_ADDR_DIFF_ELT(FILE, BODY, VALUE, REL) 		\
  fprintf (FILE, "%s _GLOBAL_OFFSET_TABLE_+[.-%s%d]\n", ASM_LONG, LPREFIX, VALUE)

#undef ASM_OUTPUT_ALIGNED_COMMON
#define ASM_OUTPUT_ALIGNED_COMMON(FILE, NAME, SIZE, ALIGN)		\
do {									\
  fprintf ((FILE), "%s\t", COMMON_ASM_OP);				\
  assemble_name ((FILE), (NAME));					\
  fprintf ((FILE), ",%u,%u\n", (SIZE), (ALIGN) / BITS_PER_UNIT);	\
} while (0)

#undef ASM_OUTPUT_ALIGNED_LOCAL
#define ASM_OUTPUT_ALIGNED_LOCAL(FILE, NAME, SIZE, ALIGN)		\
  do {									\
    fprintf ((FILE), "%s\t", LOCAL_ASM_OP);				\
    assemble_name ((FILE), (NAME));					\
    fprintf ((FILE), "\n");						\
    ASM_OUTPUT_ALIGNED_COMMON (FILE, NAME, SIZE, ALIGN);		\
  } while (0)

/* A C statement (sans semicolon) to output to the stdio stream
   FILE the assembler definition of uninitialized global DECL named
   NAME whose size is SIZE bytes and alignment is ALIGN bytes.
   Try to use asm_output_aligned_bss to implement this macro.  */

#define ASM_OUTPUT_ALIGNED_BSS(FILE, DECL, NAME, SIZE, ALIGN) \
  asm_output_aligned_bss (FILE, DECL, NAME, SIZE, ALIGN)

#undef ESCAPES
#define ESCAPES \
"\1\1\1\1\1\1\1\1btn\1fr\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\
\0\0\"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\\\0\0\0\
\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\
\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\
\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\
\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\
\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1"

#undef STRING_LIMIT
#define STRING_LIMIT	((unsigned) 256)

#undef ASM_OUTPUT_LIMITED_STRING
#define ASM_OUTPUT_LIMITED_STRING(FILE, STR)				\
  do									\
    {									\
      register unsigned char *_limited_str = (unsigned char *) (STR);	\
      register unsigned ch;						\
      fprintf ((FILE), "%s\t\"", STRING_ASM_OP);			\
      for (; (ch = *_limited_str); _limited_str++)			\
        {								\
	  register int escape;						\
	  switch (escape = ESCAPES[ch])					\
	    {								\
	    case 0:							\
	      putc (ch, (FILE));					\
	      break;							\
	    case 1:							\
	      fprintf ((FILE), "\\%03o", ch);				\
	      break;							\
	    default:							\
	      putc ('\\', (FILE));					\
	      putc (escape, (FILE));					\
	      break;							\
	    }								\
        }								\
      fprintf ((FILE), "\"\n");						\
    }									\
  while (0)


#undef ASM_OUTPUT_ASCII
#define ASM_OUTPUT_ASCII(FILE, STR, LENGTH)				\
do {									\
      register unsigned char *_ascii_bytes = (unsigned char *) (STR);	\
      register unsigned char *limit = _ascii_bytes + (LENGTH);		\
      register unsigned bytes_in_chunk = 0;				\
      for (; _ascii_bytes < limit; _ascii_bytes++)			\
        {								\
	  register unsigned char *p;					\
	  if (bytes_in_chunk >= 64)					\
	    {								\
	      fputc ('\n', (FILE));					\
	      bytes_in_chunk = 0;					\
	    }								\
	  for (p = _ascii_bytes; p < limit && *p != '\0'; p++)		\
	    continue;							\
	  if (p < limit && (p - _ascii_bytes) <= STRING_LIMIT)		\
	    {								\
	      if (bytes_in_chunk > 0)					\
		{							\
		  fputc ('\n', (FILE));					\
		  bytes_in_chunk = 0;					\
		}							\
	      ASM_OUTPUT_LIMITED_STRING ((FILE), _ascii_bytes);		\
	      _ascii_bytes = p;						\
	    }								\
	  else								\
	    {								\
	      if (bytes_in_chunk == 0)					\
		fprintf ((FILE), "%s\t", ASM_BYTE_OP);			\
	      else							\
		fputc (',', (FILE));					\
	      fprintf ((FILE), "0x%02x", *_ascii_bytes);		\
	      bytes_in_chunk += 5;					\
	    }								\
	}								\
      if (bytes_in_chunk > 0)						\
        fprintf ((FILE), "\n");						\
} while (0) 

/* Must use data section for relocatable constants when pic.  */
#undef SELECT_RTX_SECTION
#define SELECT_RTX_SECTION(MODE,RTX)					\
  {									\
    if (flag_pic && symbolic_operand (RTX, VOIDmode))			\
      data_section ();							\
    else								\
      const_section ();							\
  }

#undef ASM_OUTPUT_CASE_LABEL
#define ASM_OUTPUT_CASE_LABEL(FILE,PREFIX,NUM,JUMPTABLE)		\
  do {									\
    ASM_OUTPUT_ALIGN ((FILE), 2);					\
    ASM_OUTPUT_INTERNAL_LABEL((FILE),(PREFIX),(NUM));			\
  } while (0)


#undef ASM_OUTPUT_CONSTRUCTOR
#define ASM_OUTPUT_CONSTRUCTOR(FILE,NAME)				\
  do {									\
     ctors_section ();							\
     fprintf (FILE, "%s\t ", INT_ASM_OP);				\
     assemble_name (FILE, NAME);					\
     fprintf (FILE, "\n");						\
  } while (0)

#undef ASM_OUTPUT_DESTRUCTOR
#define ASM_OUTPUT_DESTRUCTOR(FILE,NAME)				\
  do {									\
    dtors_section ();                   				\
    fprintf (FILE, "%s\t ", INT_ASM_OP);				\
    assemble_name (FILE, NAME);              				\
    fprintf (FILE, "\n");						\
  } while (0)

#undef ASM_OUTPUT_IDENT
#define ASM_OUTPUT_IDENT(FILE, NAME) 					\
  fprintf (FILE, "%s\t\"%s\"\n", IDENT_ASM_OP, NAME)

#undef ASM_GLOBALIZE_LABEL
#define ASM_GLOBALIZE_LABEL(FILE,NAME)					\
  (fprintf ((FILE), "%s ", GLOBAL_ASM_OP), assemble_name (FILE, NAME), fputs ("\n", FILE))

#undef ASM_OUTPUT_EXTERNAL_LIBCALL
#define ASM_OUTPUT_EXTERNAL_LIBCALL(FILE, FUN)				\
  ASM_GLOBALIZE_LABEL (FILE, XSTR (FUN, 0))

#undef ASM_OUTPUT_INTERNAL_LABEL
#define ASM_OUTPUT_INTERNAL_LABEL(FILE,PREFIX,NUM)			\
  fprintf (FILE, ".%s%d:\n", PREFIX, NUM)

/* The prefix to add to user-visible assembler symbols. */

#undef USER_LABEL_PREFIX
#define USER_LABEL_PREFIX ""

/* Switch into a generic section.
 
   We make the section read-only and executable for a function decl,
   read-only for a const data decl, and writable for a non-const data decl.
 
   If the section has already been defined, we must not
   emit the attributes here. The SVR4 assembler does not
   recognize section redefinitions.
   If DECL is NULL, no attributes are emitted.  */

#define ASM_OUTPUT_SECTION_NAME(FILE, DECL, NAME, RELOC)		\
do {									\
  static struct section_info						\
    {									\
      struct section_info *next;				        \
      char *name;						        \
      enum sect_enum {SECT_RW, SECT_RO, SECT_EXEC} type;		\
    } *sections;							\
  struct section_info *s;						\
  char *mode;								\
  enum sect_enum type;							\
									\
  for (s = sections; s; s = s->next)					\
    if (!strcmp (NAME, s->name))					\
      break;								\
									\
  if (DECL && TREE_CODE (DECL) == FUNCTION_DECL)			\
    type = SECT_EXEC, mode = "ax";					\
  else if (DECL && DECL_READONLY_SECTION (DECL, RELOC))			\
    type = SECT_RO, mode = "a";						\
  else									\
    type = SECT_RW, mode = "aw";					\
									\
  if (s == 0)								\
    {									\
      s = (struct section_info *) xmalloc (sizeof (struct section_info));  \
      s->name = xmalloc ((strlen (NAME) + 1) * sizeof (*NAME));		\
      strcpy (s->name, NAME);						\
      s->type = type;							\
      s->next = sections;						\
      sections = s;							\
      fprintf (FILE, ".section\t%s,\"%s\",@progbits\n", NAME, mode);	\
    }									\
  else									\
    {									\
      if (DECL && s->type != type)					\
	error_with_decl (DECL, "%s causes a section type conflict");	\
									\
      fprintf (FILE, ".section\t%s\n", NAME);				\
    }									\
} while (0)

#undef ASM_OUTPUT_SKIP
#define ASM_OUTPUT_SKIP(FILE,SIZE) 					\
  fprintf (FILE, "%s\t%u\n", SKIP_ASM_OP, (SIZE))

#undef DBX_BLOCKS_FUNCTION_RELATIVE
#define DBX_BLOCKS_FUNCTION_RELATIVE 1

#undef DBX_FUNCTION_FIRST
#define DBX_FUNCTION_FIRST 1

#undef DBX_REGISTER_NUMBER
#define DBX_REGISTER_NUMBER(n)						\
 ((n) == 0 ? 0 								\
  : (n) == 1 ? 2 							\
  : (n) == 2 ? 1 							\
  : (n) == 3 ? 3 							\
  : (n) == 4 ? 6 							\
  : (n) == 5 ? 7 							\
  : (n) == 6 ? 5 							\
  : (n) == 7 ? 4 							\
  : ((n) >= FIRST_STACK_REG && (n) <= LAST_STACK_REG) ? (n)+3 		\
  : (-1))

#undef DWARF_DEBUGGING_INFO
#undef DWARF2_DEBUGGING_INFO
#undef SDB_DEBUGGING_INFO
#undef DBX_DEBUGGING_INFO
#undef PREFERRED_DEBUGGING_TYPE

#define DWARF_DEBUGGING_INFO 1
#define DWARF2_DEBUGGING_INFO 1
#define SDB_DEBUGGING_INFO   1
#define DBX_DEBUGGING_INFO   1
#define PREFERRED_DEBUGGING_TYPE	DWARF2_DEBUG

#undef EXTRA_SECTIONS
#define EXTRA_SECTIONS in_const, in_ctors, in_dtors

#undef EXTRA_SECTION_FUNCTIONS
#define EXTRA_SECTION_FUNCTIONS						\
  CONST_SECTION_FUNCTION						\
  CTORS_SECTION_FUNCTION						\
  DTORS_SECTION_FUNCTION

#undef CONST_SECTION_FUNCTION
#define CONST_SECTION_FUNCTION						\
void									\
const_section ()							\
{									\
  extern void text_section();						\
  if (!USE_CONST_SECTION)						\
    text_section();							\
  else if (in_section != in_const)					\
    {									\
      fprintf (asm_out_file, "%s\n", CONST_SECTION_ASM_OP);		\
      in_section = in_const;						\
    }									\
}

#undef CTORS_SECTION_FUNCTION
#define CTORS_SECTION_FUNCTION						\
void									\
ctors_section ()							\
{									\
  if (in_section != in_ctors)						\
    {									\
      fprintf (asm_out_file, "%s\n", CTORS_SECTION_ASM_OP);		\
      in_section = in_ctors;						\
    }									\
}

#undef DTORS_SECTION_FUNCTION
#define DTORS_SECTION_FUNCTION						\
void									\
dtors_section ()							\
{									\
  if (in_section != in_dtors)						\
    {									\
      fprintf (asm_out_file, "%s\n", DTORS_SECTION_ASM_OP);		\
      in_section = in_dtors;						\
    }									\
}

#undef FRAME_POINTER_REQUIRED
#define FRAME_POINTER_REQUIRED		0

#undef JUMP_TABLES_IN_TEXT_SECTION
#define JUMP_TABLES_IN_TEXT_SECTION (flag_pic)

#undef LOCAL_LABEL_PREFIX
#define LOCAL_LABEL_PREFIX		""

/*
 * We use the standard assembler and link editor, and the standard CRT files.
 * However, you MUST have the "Linker and Libraries Update" patch installed.
 * This patch fixes many libc, ld and as bugs, and is now a requirement for
 * gcc.
 *
 * NOTE: It is important that /usr/gnu/lib is the STARTFILE_PREFIX, becuase
 * the %D spec uses the startfile prefixes to create -L options. If we have
 * /usr/ccs/lib first, then there will be a -L/usr/ccs/lib first, which
 * means we dont get the advantage of having the GNU tools pick up their
 * over-ride libraries. This is fatal, for example, with libintl.a. The
 * GNU gettext library very unfortunately uses the same name as a system
 * library. Most of the time though, when using GCC you are likely compiling
 * open source software, and -lintl is expected to find gettext, not SCO's
 * intl library.
 */
#define MD_STARTFILE_PREFIX	"/usr/gnu/lib/"
#define MD_STARTFILE_PREFIX_1	"/usr/ccs/lib/"

#if USE_GAS
# define MD_EXEC_PREFIX		"/usr/gnu/bin/"
#else
# define MD_EXEC_PREFIX		"/usr/ccs/bin/"
#endif

#undef NON_SAVING_SETJMP
#define NON_SAVING_SETJMP		0

#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1

#undef RETURN_POPS_ARGS
#define RETURN_POPS_ARGS(FUNDECL,FUNTYPE,SIZE) 				\
  i386_return_pops_args (FUNDECL, FUNTYPE, SIZE)

#undef SELECT_SECTION
#define SELECT_SECTION(DECL,RELOC)					\
{									\
  if (flag_pic && RELOC)						\
     data_section ();							\
  else if (TREE_CODE (DECL) == STRING_CST)				\
    {									\
      if (! flag_writable_strings)					\
	const_section ();						\
      else								\
	data_section ();						\
    }									\
  else if (TREE_CODE (DECL) == VAR_DECL)				\
    {									\
      if (! DECL_READONLY_SECTION (DECL, RELOC)) 			\
	data_section ();						\
      else								\
	const_section ();						\
    }									\
  else									\
    const_section ();							\
}

#undef SWITCH_TAKES_ARG
#define SWITCH_TAKES_ARG(CHAR) 						\
  (DEFAULT_SWITCH_TAKES_ARG(CHAR)					\
   || (CHAR) == 'h' 							\
   || (CHAR) == 'R' 							\
   || (CHAR) == 'Y' 							\
   || (CHAR) == 'z')

#undef WORD_SWITCH_TAKES_ARG
#define WORD_SWITCH_TAKES_ARG(STR)					\
 (DEFAULT_WORD_SWITCH_TAKES_ARG (STR)					\
  && strcmp (STR, "Tdata") && strcmp (STR, "Ttext")			\
  && strcmp (STR, "Tbss"))

#undef TARGET_DEFAULT
#define TARGET_DEFAULT (MASK_80387 | MASK_IEEE_FP | MASK_FLOAT_RETURNS)

#undef HANDLE_SYSV_PRAGMA
#define HANDLE_SYSV_PRAGMA 	1

#define SUPPORTS_WEAK 		1
#define ASM_WEAKEN_LABEL(FILE,NAME) 					\
  do {									\
    fputs ("\t.weak\t", FILE); assemble_name (FILE, NAME);		\
    fputc ('\n', FILE);							\
  } while (0)

#undef SCCS_DIRECTIVE
#define SCCS_DIRECTIVE 		1

/*
 * Define sizes and types
 */
#undef SIZE_TYPE
#undef PTRDIFF_TYPE
#undef WCHAR_TYPE
#undef WCHAR_TYPE_SIZE
#undef LONG_DOUBLE_TYPE_SIZE
#define LONG_DOUBLE_TYPE_SIZE 	96
#define SIZE_TYPE		"unsigned int"
#define PTRDIFF_TYPE		"int"
#define WCHAR_TYPE		"long int"
#define WCHAR_TYPE_SIZE		BITS_PER_WORD

/*
 * New for multilib support. Set the default switches for multilib,
 * which is -melf.
 */
#define MULTILIB_DEFAULTS { "melf" }


/* Please note that these specs may look messy but they are required in
   order to emulate the SCO Development system as closely as possible.
   With SCO Open Server 5.0, you now get the linker and assembler free,
   so that is what these specs are targeted for. These utilities are
   very argument sensitive: a space in the wrong place breaks everything.

   Parameters which can be passed to gcc, and their SCO equivalents:
   GCC Parameter                SCO Equivalent
   -ansi                        -a ansi
   -posix                       -a posix
   -Xpg4                        -a xpg4
   -Xpg4plus                    -a xpg4plus
   -Xods30                      -a ods30

   As with SCO, the default is XPG4 plus mode. SCO also allows you to
   specify a C dialect with -Xt, -Xa, -Xc, -Xk and -Xm. These are passed
   on to the assembler and linker in the same way that the SCO compiler
   does.
*/

/* Set up assembler flags for PIC and ELF compilations */
#if !USE_GAS
#undef ASM_SPEC
#define ASM_SPEC \
   "-b elf %{Ym,*} %{Yd,*} %{Wa,*:%*} \
    -E%{Xa:a}%{!Xa:%{Xc:c}%{!Xc:%{Xk:k}%{!Xk:%{Xt:t}%{!Xt:a}}}},%{ansi:ansi}%{!ansi:%{posix:posix}%{!posix:%{Xpg4:xpg4}%{!Xpg4:%{Xpg4plus:XPG4PLUS}%{!Xpg4plus:%{Xods30:ods30}%{!Xods30:XPG4PLUS}}}}},ELF %{Qn:} %{!Qy:-Qn}"
#endif

/*
 * Use crti.o for shared objects, crt1.o for normal executables. Make sure
 * to recognize both -G and -shared as a valid way of introducing shared
 * library generation. This is important for backwards compatibility.
 */

#undef STARTFILE_SPEC
#define STARTFILE_SPEC \
 "%{!shared:\
   %{!symbolic: \
    %{!G: \
     %{pg:gcrt1.o%s}%{!pg:%{p:mcrt1.o%s}%{!p:crt1.o%s}}}}} \
  %{pg:gcrti.o%s}%{!pg:crti.o%s} \
  %{ansi:values-Xc.o%s} \
  %{!ansi: \
   %{traditional:values-Xt.o%s} \
    %{!traditional: \
     %{Xa:values-Xa.o%s} \
      %{!Xa:%{Xc:values-Xc.o%s} \
       %{!Xc:%{Xk:values-Xk.o%s} \
        %{!Xk:%{Xt:values-Xt.o%s} \
         %{!Xt:values-Xa.o%s}}}}}} \
  crtbegin.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC \
 "crtend.o%s %{pg:gcrtn.o%s}%{!pg:crtn.o%s}"

#undef CPP_PREDEFINES
#define CPP_PREDEFINES \
 "-Asystem(svr3)"

/* You are in a maze of GCC specs ... all alike */

#undef CPP_SPEC
#define CPP_SPEC "%(cpp_cpu) \
  -D__i386 -D__unix -D_SCO_DS=1 -D_M_I386 -D_M_XENIX -D_M_UNIX \
  -isystem /usr/gnu/include \
  %{!Xods30:-D_STRICT_NAMES} \
  %{!ansi:%{!posix:%{!Xods30:-D_SCO_XPG_VERS=4}}} \
  %{ansi:-isystem include/ansi%s -isystem /usr/include/ansi -D_STRICT_ANSI} \
  %{!ansi: \
   %{posix:-isystem include/posix%s -isystem /usr/include/posix \
           -D_POSIX_C_SOURCE=2 -D_POSIX_SOURCE=1} \
    %{!posix:%{Xpg4:-isystem include/xpg4%s -isystem /usr/include/xpg4 \
                    -D_XOPEN_SOURCE=1} \
     %{!Xpg4:-D_M_I86 -D_M_I86SM -D_M_INTERNAT -D_M_SDATA -D_M_STEXT \
             -D_M_BITFIELDS -D_M_SYS5 -D_M_SYSV -D_M_SYSIII \
             -D_M_WORDSWAP -Dunix -DM_I386 -DM_UNIX -DM_XENIX \
             %{Xods30:-isystem include/ods_30_compat%s \
                      -isystem /usr/include/ods_30_compat \
                      -D_SCO_ODS_30 -DM_I86 -DM_I86SM -DM_SDATA -DM_STEXT \
                      -DM_BITFIELDS -DM_SYS5 -DM_SYSV -DM_INTERNAT -DM_SYSIII \
                      -DM_WORDSWAP}}}} \
  %{scointl:-DM_INTERNAT -D_M_INTERNAT} \
  %{traditional:-D_KR -D_SVID -D_NO_PROTOTYPE} \
  -D_SCO_ELF \
  %{fpic:-D__PIC__ -D__pic__} %{fPIC:%{!fpic:-D__PIC__ -D__pic__}} \
  %{Xa:-D_SCO_C_DIALECT=1} \
  %{!Xa:%{Xc:-D_SCO_C_DIALECT=3} \
   %{!Xc:%{Xk:-D_SCO_C_DIALECT=4} \
    %{!Xk:%{Xt:-D_SCO_C_DIALECT=2} \
     %{!Xt:-D_SCO_C_DIALECT=1}}}} \
  %{traditional:-traditional -D_KR -D_NO_PROTOTYPE}"

#undef LINK_SPEC
#define LINK_SPEC \
 "%{!shared:%{!symbolic:%{!G:-E%{Xa:a}%{!Xa:%{Xc:c}%{!Xc:%{Xk:k}%{!Xk:%{Xt:t}%{!Xt:a}}}},%{ansi:ansi}%{!ansi:%{posix:posix}%{!posix:%{Xpg4:xpg4}%{!Xpg4:%{Xpg4plus:XPG4PLUS}%{!Xpg4plus:%{Xods30:ods30}%{!Xods30:XPG4PLUS}}}}},ELF}}} \
  %{Wl,*%*} %{YP,*} %{YL,*} %{YU,*} \
  %{!YP,*:%{p:-YP,/usr/ccs/libp:/lib/libp:/usr/lib/libp:/usr/ccs/lib:/lib:/usr/lib} \
   %{!p:-YP,/usr/ccs/lib:/lib:/usr/lib}} \
  %{h*} %{static:-dn -Bstatic %{G:%e-G and -static are mutually exclusive}} \
  %{shared:%{!G:-G}} %{G:%{!shared:-G}} %{shared:%{G:-G}} \
  %{shared:-dy %{symbolic:-Bsymbolic -G} %{z*}} %{R*} %{Y*} \
  %{Qn:} %{!Qy:-Qn}"

/* Library spec. If we are not building a shared library, provide the
   standard libraries, as per the SCO compiler.  */

#undef LIB_SPEC
#define LIB_SPEC \
 "%{shared:%{!G:pic/libgcc.a%s}} \
  %{G:%{!shared:pic/libgcc.a%s}} \
  %{shared:%{G:pic/libgcc.a%s}} \
  %{!shared:%{!symbolic:%{!G:-lcrypt -lgen -lc}}}"

#undef LIBGCC_SPEC
#define LIBGCC_SPEC \
 "%{!shared:%{!G:-lgcc}}"

#define MASK_ELF     		010000000000	/* Mask for elf generation */
#define TARGET_ELF              1

#undef SUBTARGET_SWITCHES
#define SUBTARGET_SWITCHES 		\
	{ "elf", MASK_ELF, "Generate ELF output"  },

#define NO_DOLLAR_IN_LABEL

/* Implicit library calls should use memcpy, not bcopy, etc.  They are 
   faster on OpenServer libraries. */

#define TARGET_MEM_FUNCTIONS

/* Biggest alignment supported by the object file format of this
   machine.  Use this macro to limit the alignment which can be
   specified using the `__attribute__ ((aligned (N)))' construct.  If
   not defined, the default value is `BIGGEST_ALIGNMENT'.  */

#define MAX_OFILE_ALIGNMENT (32768*8)

#define OBJECT_FORMAT_ELF	1
#define HAVE_ATEXIT 		1
