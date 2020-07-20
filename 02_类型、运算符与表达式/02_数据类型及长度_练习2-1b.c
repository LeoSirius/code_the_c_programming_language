#include <stdio.h>
#include <limits.h>

main()
{
    // 取最大值的思路

    // 1. 先把0的取反，即全部是1   ~0
    // 2. 1中是常量，再确定类型，(unsnged char)~0
    // 3. 再把无符号数右移一位，高位的0空出来 (unsnged char)~0 >> 1
    // 4. 最后再转换成有符号的类型 (char)((unsnged char)~0 >> 1)

    // 如果是最小值的话，再多一步取负加一

    // 无符号的直接全部取1，再加个类型转换即可

    /* signed types */
    printf("signed char min   = %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("signed char max   = %d\n", (char)((unsigned char)~0 >> 1));
    printf("signed short min  = %d\n", -(short)((unsigned short)~0 >> 1) - 1);
    printf("signed short max  = %d\n", (short)((unsigned short)~0 >> 1));
    printf("signed int min    = %d\n", -(int)((unsigned int)~0 >> 1) - 1);
    printf("signed int max    = %d\n", (int)((unsigned int)~0 >> 1));
    printf("signed long min   = %ld\n", -(long)((unsigned long)~0 >> 1) - 1);
    printf("signed long max   = %ld\n", (long)((unsigned long)~0 >> 1));

    /* unsigned types */
    printf("unsigned char max   = %u\n", (unsigned char)~0);
    printf("unsigned short max  = %u\n", (unsigned short)~0);
    printf("unsigned int max    = %u\n", (unsigned int)~0);
    printf("unsigned long max   = %lu\n", (unsigned long)~0);
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
