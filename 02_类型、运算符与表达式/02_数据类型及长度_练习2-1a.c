/*
 * NOTES:
 * 对象的类型 决定了 对象可取值的集合 以及 可对该对象执行的操作
 * 
 * 练习2-1：打印signed和unsigned char, short, int, long类型变量的取值范围。
 * 用打印头文件的值和直接计算两种方法
 * 
 */

#include <stdio.h>
#include <limits.h>

main()
{
    // 注意无符号数是%u，long是%ld
    /* signed types */
    printf("signed char min   = %d\n", SCHAR_MIN);
    printf("signed char max   = %d\n", SCHAR_MAX);
    printf("signed short min  = %d\n", SHRT_MIN);
    printf("signed short max  = %d\n", SHRT_MAX);
    printf("signed int min    = %d\n", INT_MIN);
    printf("signed int max    = %d\n", INT_MAX);
    printf("signed long min   = %ld\n", LONG_MIN);
    printf("signed long max   = %ld\n", LONG_MAX);

    /* unsigned types */
    printf("unsigned char max   = %u\n", UCHAR_MAX);
    printf("unsigned short max  = %u\n", USHRT_MAX);
    printf("unsigned int max    = %u\n", UINT_MAX);
    printf("unsigned long max   = %lu\n", ULONG_MAX);
}

// signed char min   = -128
// signed char max   = 127
// signed short min  = -32768
// signed short max  = 32767
// signed int min    = -2147483648
// signed int max    = 2147483647
// signed long min   = -9223372036854775808
// signed long max   = 9223372036854775807
// unsigned char max   = 255
// unsigned short max  = 65535
// unsigned int max    = 4294967295
// unsigned long max   = 18446744073709551615


