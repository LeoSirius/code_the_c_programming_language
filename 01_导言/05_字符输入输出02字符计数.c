/*
 * NOTES:
 * 统计字符数
 */

#include <stdio.h>

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF) nc++;

    printf("%ld\n", nc);
}

// 还有一个换行符
// root@ubuntu18:~/c_test# ./a.out 
// 123
// 4