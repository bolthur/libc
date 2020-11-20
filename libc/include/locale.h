
#if !defined( BLIBC_LOCALE_H )
#define BLIBC_LOCALE_H

#include <config.h>
#include <stddef.h>

#if defined( __cplusplus )
extern "C" {
#endif

#undef LC_ALL
#undef LC_COLLATE
#undef LC_CTYPE
#undef LC_MONETARY
#undef LC_NUMERIC
#undef LC_TIME

#define LC_ALL 0
#define LC_COLLATE 1
#define LC_CTYPE 2
#define LC_MONETARY 3
#define LC_NUMERIC 4
#define LC_TIME 5

struct lconv {
  char* decimal_point; /* "." */
  char* thousands_sep; /* "" */
  char* grouping; /* "" */
  char* int_curr_symbol; /* "" */
  char* currency_symbol; /* "" */
  char* mon_decimal_point; /* "" */
  char* mon_thousands_sep; /* "" */
  char* mon_grouping; /* "" */
  char* positive_sign; /* "" */
  char* negative_sign; /* "" */
  char int_frac_digits; /* CHAR_MAX */
  char frac_digits; /* CHAR_MAX */
  char p_cs_precedes; /* CHAR_MAX */
  char p_sep_by_space; /* CHAR_MAX */
  char n_cs_precedes; /* CHAR_MAX */
  char n_sep_by_space; /* CHAR_MAX */
  char p_sign_posn; /* CHAR_MAX */
  char n_sign_posn; /* CHAR_MAX */
};

_BLIBC_PUBLIC char* setlocale( int, const char* );
_BLIBC_PUBLIC struct lconv* localeconv( void );

#if defined( __cplusplus )
}
#endif

#endif
