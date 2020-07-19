/*
 * NOTES:
 * 输入一组文本，并把最长的文本打印出来
 */

#include <stdio.h>

#define MAXLINE 1000 /* 允许输入的一行最大长度 */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;                /* 当前行的长度 */
    int max;                /* 目前为止最长行的长度 */
    char line[MAXLINE];     /* 当前输入的行 */
    char longest[MAXLINE];  /* 用于保存最长的行 */

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* 将一行读入到s中，并返回其长度 */
int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';        // 如hello行会存储为： h e l l o \n \0
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

// root@ubuntu18:~/c_test# ./a.out 
// I am Leo Sirius.
// I love coding.
// I am Leo Sirius.