/*
 * NOTES:
 * 地址运算符&只能作用于内存中的对象，即变量与数组元素。
 * 不能作用于表达式、常量、register类型的变量
 * 
 */

#include <stdio.h>

int main()
{
    int arr[] = {0, 1};
    int *px;

    px = arr;

    // 注意这里加括号才是把指针指向的内容+1，不加括号则是指针本身加1，再取内容
    printf("%d\n", (*px)++);
    printf("%d\n", *px++);

    printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

}