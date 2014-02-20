/* C code produced by gperf version 2.7.2 */
/* Command-line: gperf -L C -F ', 0, 0' -p -j1 -i 1 -g -o -t -G -N is_reserved_word -k'1,3,$' /usr/pkgsrc/gcc/gcc-2.95.3pl4/gcc/c-parse.gperf  */
/* Command-line: gperf -L KR-C -F ', 0, 0' -p -j1 -i 1 -g -o -t -N is_reserved_word -k1,3,$ c-parse.gperf  */ 
struct resword { const char *name; short token; enum rid rid; };

#define TOTAL_KEYWORDS 85
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 28
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 144
/* maximum key range = 137, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145,  28, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145,   1, 145,  45,  60,  28,
       40,   6,   1,  24,   3,  13, 145,   1,  56,  43,
       58,   3,   6, 145,  19,   8,   1,  13,  34,   2,
       12,  20,   4, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145, 145, 145, 145, 145,
      145, 145, 145, 145, 145, 145
    };
  register int hval = len;

  switch (hval)
    {
      default:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static struct resword wordlist[] =
  {
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"out", TYPE_QUAL, RID_OUT},
    {"", 0, 0},
    {"float", TYPESPEC, RID_FLOAT},
    {"__typeof", TYPEOF, NORID},
    {"", 0, 0},
    {"__typeof__", TYPEOF, NORID},
    {"typeof", TYPEOF, NORID},
    {"typedef", SCSPEC, RID_TYPEDEF},
    {"if", IF, NORID},
    {"short", TYPESPEC, RID_SHORT},
    {"int", TYPESPEC, RID_INT},
    {"sizeof", SIZEOF, NORID},
    {"__signed__", TYPESPEC, RID_SIGNED},
    {"__extension__", EXTENSION, NORID},
    {"inout", TYPE_QUAL, RID_INOUT},
    {"__imag__", IMAGPART, NORID},
    {"else", ELSE, NORID},
    {"__inline__", SCSPEC, RID_INLINE},
    {"while", WHILE, NORID},
    {"__iterator__", SCSPEC, RID_ITERATOR},
    {"__inline", SCSPEC, RID_INLINE},
    {"__real__", REALPART, NORID},
    {"switch", SWITCH, NORID},
    {"__restrict", TYPE_QUAL, RID_RESTRICT},
    {"goto", GOTO, NORID},
    {"__restrict__", TYPE_QUAL, RID_RESTRICT},
    {"struct", STRUCT, NORID},
    {"oneway", TYPE_QUAL, RID_ONEWAY},
    {"restrict", TYPE_QUAL, RID_RESTRICT},
    {"__const", TYPE_QUAL, RID_CONST},
    {"", 0, 0},
    {"__const__", TYPE_QUAL, RID_CONST},
    {"", 0, 0},
    {"__complex__", TYPESPEC, RID_COMPLEX},
    {"for", FOR, NORID},
    {"__iterator", SCSPEC, RID_ITERATOR},
    {"__imag", IMAGPART, NORID},
    {"do", DO, NORID},
    {"case", CASE, NORID},
    {"@defs", DEFS, NORID},
    {"__volatile__", TYPE_QUAL, RID_VOLATILE},
    {"default", DEFAULT, NORID},
    {"__complex", TYPESPEC, RID_COMPLEX},
    {"__volatile", TYPE_QUAL, RID_VOLATILE},
    {"", 0, 0},
    {"auto", SCSPEC, RID_AUTO},
    {"__asm__", ASM_KEYWORD, NORID},
    {"id", OBJECTNAME, RID_ID},
    {"__alignof", ALIGNOF, NORID},
    {"__signed", TYPESPEC, RID_SIGNED},
    {"__alignof__", ALIGNOF, NORID},
    {"@compatibility_alias", ALIAS, NORID},
    {"__attribute__", ATTRIBUTE, NORID},
    {"@private", PRIVATE, NORID},
    {"@selector", SELECTOR, NORID},
    {"__attribute", ATTRIBUTE, NORID},
    {"", 0, 0},
    {"double", TYPESPEC, RID_DOUBLE},
    {"enum", ENUM, NORID},
    {"__label__", LABEL, NORID},
    {"", 0, 0},
    {"unsigned", TYPESPEC, RID_UNSIGNED},
    {"register", SCSPEC, RID_REGISTER},
    {"extern", SCSPEC, RID_EXTERN},
    {"break", BREAK, NORID},
    {"in", TYPE_QUAL, RID_IN},
    {"", 0, 0}, {"", 0, 0},
    {"@public", PUBLIC, NORID},
    {"", 0, 0},
    {"signed", TYPESPEC, RID_SIGNED},
    {"", 0, 0}, {"", 0, 0},
    {"inline", SCSPEC, RID_INLINE},
    {"__real", REALPART, NORID},
    {"", 0, 0},
    {"return", RETURN, NORID},
    {"byref", TYPE_QUAL, RID_BYREF},
    {"", 0, 0},
    {"static", SCSPEC, RID_STATIC},
    {"", 0, 0},
    {"union", UNION, NORID},
    {"", 0, 0},
    {"void", TYPESPEC, RID_VOID},
    {"const", TYPE_QUAL, RID_CONST},
    {"", 0, 0},
    {"__asm", ASM_KEYWORD, NORID},
    {"__builtin_types_compatible_p", TYPES_COMPATIBLE_P, NORID},
    {"char", TYPESPEC, RID_CHAR},
    {"@protected", PROTECTED, NORID},
    {"@class", CLASS, NORID},
    {"@encode", ENCODE, NORID},
    {"continue", CONTINUE, NORID},
    {"__builtin_choose_expr", CHOOSE_EXPR, NORID},
    {"@interface", INTERFACE, NORID},
    {"", 0, 0},
    {"volatile", TYPE_QUAL, RID_VOLATILE},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"@protocol", PROTOCOL, NORID},
    {"", 0, 0},
    {"bycopy", TYPE_QUAL, RID_BYCOPY},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"@end", END, NORID},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"asm", ASM_KEYWORD, NORID},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"", 0, 0}, {"", 0, 0}, {"", 0, 0},
    {"long", TYPESPEC, RID_LONG},
    {"", 0, 0},
    {"@implementation", IMPLEMENTATION, NORID}
  };

#ifdef __GNUC__
__inline
#endif
struct resword *
is_reserved_word (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
