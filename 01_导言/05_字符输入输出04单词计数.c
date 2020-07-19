/*
 * NOTES: 统计单词数。同一个状态state来标志当前是在单词中，还是在单词外
 */

#include <stdio.h>

#define IN 1        /* inside word */
#define OUT 0       /* outside word */

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;    // 从右往左结合，相当于 nl = (nw = (nc = 0))
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')  // 三种分隔单词的字符
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("\nnl: %d, nw: %d, nc: %d\n", nl, nw, nc);
}

// root@ubuntu18:~/c_test# ./a.out 
// I am Leo Sirius.
// I like coding.

// nl: 2, nw: 7, nc: 32