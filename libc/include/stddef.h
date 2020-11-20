
#if !defined( BLIBC_STDDEF_H )
#define BLIBC_STDDEF_H

#if defined( __cplusplus )
extern "C" {
#endif

#define NULL ( void* )0
#define offsetof __builtin_offsetof

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__ size_t;
typedef __WCHAR_TYPE__ wchar_t;

#if defined( __cplusplus )
}
#endif

#endif
