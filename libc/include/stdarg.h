
#if !defined( BLIBC_STDARG_H )
#define BLIBC_STDARG_H

#if defined( __cplusplus )
extern "C" {
#endif

typedef __builtin_va_list va_list;

#define va_start __builtin_va_start
#define va_arg __builtin_va_arg
#define va_end __builtin_va_end

#if defined( __cplusplus )
}
#endif

#endif
