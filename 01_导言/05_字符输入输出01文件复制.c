/*
 * NOTES:
 * 把输入的文本原样输出。
 */

#include <stdio.h>

main()
{
    int c;  // EOF 是int类型。所以这里用了int类型

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

// root@ubuntu18:~/c_test# ./a.out 
// q
// q
// t
// t
// asd
// asd