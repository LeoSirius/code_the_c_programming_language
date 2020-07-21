/*
 * NOTES:
 * 
 * 常量相关:
 * - 没有后缀的浮点数是double类型
 * - 一个字符常量是一个整数， ‘\0’的数值就是0
 * - 常量表达式是只包含常量的表达式，在编译的时候求值
 * 
 * 声明：
 * - 默认情况下，外部变量和静态变量会被初始化为0。未经显示初始化的自动变量的值是未定义的。
 * - const限定符指定的变量的值不能被修改
 * - const限定符指定的数组的所有元素的值都不能被修改
 * 
 * 类型转换：
 * - 自动转换：把“比较窄”的操作数转换为“比较宽”的操作数
 * - 表达式中float不会自动转换为double
 * - 当包含unsigned时，无符号与带符号数之间的转换是机器相关的
 * 
 * 练习2-3：
 * 编写函数htoi(s)，把十六进制数的字符串（可包含前缀0x或0X）转换为与之等价的整型值。
 * 字符串中可出现的字符：0-9， a-z， A-Z
 */

#include <stdio.h>

#define YES   1
#define NO    0

int htoi(char s[])
{
    int hexdigit, i, inhex, n;

    i = 0;
    /* skip 0x or 0X */
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
          ++i;
    }

    n = 0;          /* result int value */
    inhex = YES;    /* flag show whether input str is valid */
    for (; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'z')
            hexdigit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO;
        if (inhex == YES)
            n = n * 16 + hexdigit;
    }
    return n;
}

void test(const char test_name[], char s[], int expected)
{
    int res = htoi(s);
    if (res == expected)
        printf("%s success.\n", test_name);
    else
        printf("%s failed.\n", test_name);
}

int main()
{
    char s1[] = "0xaa";
    int expected1 = 170;
    test("test1", s1, expected1);

    char s2[] = "123";
    int expected2 = 291;
    test("test2", s2, expected2);

    return 0;
}