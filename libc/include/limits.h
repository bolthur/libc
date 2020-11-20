
#if !defined( BLIBC_LIMITS_H )
#define BLIBC_LIMITS_H

#if defined( __cplusplus )
extern "C" {
#endif

#undef CHAR_BIT
#define CHAR_BIT __CHAR_BIT__

#undef SCHAR_MIN
#define SCHAR_MIN ( -__SCHAR_MAX__ - 1 )

#undef SCHAR_MAX
#define SCHAR_MAX __SCHAR_MAX__

#undef UCHAR_MAX
#define UCHAR_MAX 255

#undef CHAR_MIN
#if defined( __CHAR_UNSIGNED__ )
  #define CHAR_MIN 0
else
  #define CHAR_MIN SCHAR_MIN
#endif

#undef CHAR_MAX
#if defined( __CHAR_UNSIGNED__ )
  #define CHAR_MAX UCHAR_MAX
else
  #define CHAR_MAX SCHAR_MAX
#endif

#undef MB_LEN_MAX
#define MB_LEN_MAX 1

#undef INT_MIN
#define INT_MIN ( -__INT_MAX__ - 1 )

#undef INT_MAX
#define INT_MAX __INT_MAX__

#undef LONG_MIN
#define LONG_MIN ( -__LONG_MAX__ - 1 )

#undef LONG_MAX
#define LONG_MAX __LONG_MAX__

#undef SHRT_MIN
#define SHRT_MIN ( -__SHRT_MAX__ - 1 )

#undef SHRT_MAX
#define SHRT_MAX ( __SHRT_MAX__ )

#undef UINT_MAX
#define UINT_MAX ( __INT_MAX__ * 2U + 1U )

#undef ULONG_MAX
#define ULONG_MAX ( __LONG_MAX * 2UL + 1UL )

#undef USHRT_MAX
#if __SHRT_MAX__ == __INT_MAX__
#define USHRT_MAX ( __SHRT_MAX__ * 2U + 1U )
#else
#define USHRT_MAX ( __SHRT_MAX__ * 2 + 1 )
#endif

#if defined( __cplusplus )
}
#endif

#endif
