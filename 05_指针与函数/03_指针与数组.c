/*
 * NOTES:
 * 
 * 通过数组下标能完成的任何操作都可以通过指针来完成。一般来说，通过指针比通过数组下标速度快
 * 
 */

// 函数的数组参数也可以写成print_arr(int arr[])
// 但是下面的形式更好一些，明确了传进来的就是一个指针
void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int a[] = {1,2,3};

    // 输出
    // 1 1
    // 2 2
    // 3 3
    for (int i = 0; i < 3; i++)
        printf("%d %d\n", a[i], *(a+i));  // 这两种访问方式是等价的

    // 但是注意，
    // 指针本身是变量，pa = a, pa++ 等操作都是合法的
    // 数组名本身不是变量，a = pa, a++ 等都是非法的

    // 当把数组名作为参数传递给函数时，实际上传递的是该数组的第一个元素的地址
    print_arr(a, 3);     // 1 2 3
    print_arr(a+1, 2);   // 2 3

    return 0;
}