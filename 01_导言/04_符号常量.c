/*
 * NOTES:
 * 华氏度转摄氏度
 * 
 * #define name 替换文本
 * 
 * 替换文本可以是任何字符序列，不限于数字
 */

#include <stdio.h>

#define LOWER 0
#define UPPEER 300
#define STEP 20

main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPEER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}

// root@ubuntu18:~/c_test# ./a.out 
//   0  -17.8
//  20   -6.7
//  40    4.4
//  60   15.6
//  80   26.7
// 100   37.8
// 120   48.9
// 140   60.0
// 160   71.1
// 180   82.2
// 200   93.3
// 220  104.4
// 240  115.6
// 260  126.7
// 280  137.8
// 300  148.9