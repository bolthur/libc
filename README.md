
# libc

Experimental `libc` project.

## Progress

Some progress page.

### Finished header file content

| File          | Introduced | Status   |
| ------------- | :--------: | :------: |
| assert.h      |            | &cross;  |
| complex.h     | c99        | &cross;  |
| ctype.h       |            | &cross;  |
| errno.h       |            | &cross;  |
| fenv.h        | c99        | &cross;  |
| float.h       |            | &cross;  |
| inttypes.h    | c99        | &cross;  |
| iso646.h      | c95        | &cross;  |
| limits.h      |            | &cross;  |
| locale.h      |            | &cross;  |
| math.h        |            | &cross;  |
| setjmp.h      |            | &cross;  |
| signal.h      |            | &cross;  |
| stdalign.h    | c11        | &cross;  |
| stdarg.h      |            | &cross;  |
| stdatomic.h   | c11        | &cross;  |
| stdbool.h     | c99        | &cross;  |
| stddef.h      |            | &cross;  |
| stdint.h      | c99        | &cross;  |
| stdio.h       |            | &cross;  |
| stdlib.h      |            | &cross;  |
| stdnoreturn.h | c11        | &cross;  |
| string.h      |            | &cross;  |
| tgmath.h      | c99        | &cross;  |
| threads.h     | c11        | &cross;  |
| time.h        |            | &cross;  |
| uchar.h       | c11        | &cross;  |
| wchar.h       | c95        | &cross;  |
| wctype.h      | c95        | &cross;  |

### Finished function content

| File          | Status   |
| ------------- | :------: |
| assert.h      | &cross;  |
| complex.h     | &cross;  |
| ctype.h       | &cross;  |
| errno.h       | &cross;  |
| fenv.h        | &cross;  |
| float.h       | &cross;  |
| inttypes.h    | &cross;  |
| iso646.h      | &cross;  |
| limits.h      | &cross;  |
| locale.h      | &cross;  |
| math.h        | &cross;  |
| setjmp.h      | &cross;  |
| signal.h      | &cross;  |
| stdalign.h    | &cross;  |
| stdarg.h      | &cross;  |
| stdatomic.h   | &cross;  |
| stddef.h      | &cross;  |
| stdint.h      | &cross;  |
| stdio.h       | &cross;  |
| stdlib.h      | &cross;  |
| string.h      | &cross;  |
| tgmath.h      | &cross;  |
| threads.h     | &cross;  |
| time.h        | &cross;  |
| uchar.h       | &cross;  |
| wchar.h       | &cross;  |
| wctype.h      | &cross;  |


### Supported standards

| Standart | Status  |
| :------: | :-----: |
| c90      | &cross; |
| c94/c95  | &cross; |
| c99      | &cross; |
| c11      | &cross; |
| c17/c18  | &cross; |

## Notes

Some notes for experimenting.

### Possible C standard identifier

c89 and c90 standards are only detected by __STDC__ ( same standard - ANSI X3.159-1989 / ISO/IEC 9899:1990 )
```
__STDC_VERSION__ = 199409L ( c94 - ISO/IEC 9899-1:1994 )
__STDC_VERSION__ = 199901L ( c99 - ISO/IEC 9899:1999 )
__STDC_VERSION__ = 201112L ( c11 - ISO/IEC 9899:2011 )
__STDC_VERSION__ = 201710L ( c17 / c18 - ISO/IEC 9899:2018 )
```

### Possible C++ standard identifier

```
__cplusplus = 199711L ( C++98 - ISO/IEC 14882:1998 )
__cplusplus = 201103L ( C++11 - ISO/IEC 14882:2011 )
__cplusplus = 201402L ( C++14 - ISO/IEC 14882:2014 )
__cplusplus = 201703L ( C++17 - ISO/IEC 14882:2017 )
```
