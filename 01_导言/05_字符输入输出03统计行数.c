/*
 * NOTES:
 * 统计行数。通过数换行符来进行
 */

#include <stdio.h>

main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}

// root@ubuntu18:~/c_test# ./a.out 
// asd
// de
// 2