/*
 * NOTES:
 * 对输入的行进行模式匹配
 */

#include <stdio.h>
#define MAXLINE 1000   /* 最大输入行长度 */

int my_getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

main()
{
    char line[MAXLINE];
    int found = 0;

    while (my_getline(line, MAXLINE) > 0) {
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);   //line本身有个\n，所以没加换行
            found++;
        }
    }
    return found;
}

int my_getline(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == s[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

// root@ubuntu18:~/c_test# ./a.out 
// I could do.
// I could do.

