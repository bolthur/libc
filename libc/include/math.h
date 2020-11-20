
#if !defined( BLIBC_MATH_H )
#define BLIBC_MATH_H

#include <config.h>

#if defined( __cplusplus )
extern "C" {
#endif

#undef HUGE_VAL
#define HUGE_VAL __builtin_huge_val()

_BLIBC_PUBLIC double acos( double );
_BLIBC_PUBLIC double asin( double );
_BLIBC_PUBLIC double atan( double );
_BLIBC_PUBLIC double atan2( double, double );
_BLIBC_PUBLIC double cos( double );
_BLIBC_PUBLIC double sin( double );
_BLIBC_PUBLIC double tan( double );
_BLIBC_PUBLIC double cosh( double );
_BLIBC_PUBLIC double sinh( double );
_BLIBC_PUBLIC double tanh( double );
_BLIBC_PUBLIC double exp( double );
_BLIBC_PUBLIC double frexp( double, int* );
_BLIBC_PUBLIC double ldexp( double, int );
_BLIBC_PUBLIC double log( double );
_BLIBC_PUBLIC double log10( double );
_BLIBC_PUBLIC double modf( double, double* );
_BLIBC_PUBLIC double pow( double, double );
_BLIBC_PUBLIC double sqrt( double );
_BLIBC_PUBLIC double ceil( double );
_BLIBC_PUBLIC double fabs( double );
_BLIBC_PUBLIC double floor( double );
_BLIBC_PUBLIC double fmod( double, double );

#if defined( __cplusplus )
}
#endif

#endif
