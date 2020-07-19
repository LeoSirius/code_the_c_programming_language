/*
 * NOTES:
 * 统计各个数字、空白符（空格、换行、制表符）和其他所有字符
 */

#include <stdio.h>

main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits: =");
    for (i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}

// root@ubuntu18:~/c_test# ./a.out 
// 123 Leo Sirius
// digits: = 0 1 1 1 0 0 0 0 0 0, white space = 3, other = 9