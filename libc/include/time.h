
#if !defined( BLIBC_TIME_H )
#define BLIBC_TIME_H

#include <config.h>
#include <stddef.h>

#if defined( __cplusplus )
extern "C" {
#endif

#define CLK_TCK
typedef size_t clock_t;
typedef size_t time_t;

struct tm {
  int tm_sec; /* seconds after the minute --- [0, 60] */
  int tm_min; /* minutes after the hour --- [0, 59] */
  int tm_hour; /* hours since midnight --- [0, 23] */
  int tm_mday; /* day of the month --- [1, 31] */
  int tm_mon; /* months since January --- [0, 11] */
  int tm_year; /* years since 1900 */
  int tm_wday; /* days since Sunday --- [0, 6] */
  int tm_yday; /* days since January 1 --- [0, 365] */
  int tm_isdst; /* daylight saving time flag */
};

_BLIBC_PUBLIC clock_t clock( void );
_BLIBC_PUBLIC double difftime( time_t, time_t );
_BLIBC_PUBLIC time_t mktime( struct tm* );
_BLIBC_PUBLIC time_t time( time_t* );
_BLIBC_PUBLIC char* asctime( const struct tm* );
_BLIBC_PUBLIC char *ctime( const time_t* );
_BLIBC_PUBLIC struct tm* gmtime( const time_t* );
_BLIBC_PUBLIC struct tm* localtime( const time_t* );
_BLIBC_PUBLIC size_t strftime( char*, size_t, const char*, const struct tm* );

#if defined( __cplusplus )
}
#endif

#endif
