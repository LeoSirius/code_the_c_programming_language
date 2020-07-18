/*
 * NOTES:
 * 打印华氏度，以及对应的摄氏度
 */

#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}

// root@ubuntu18:~/c_test# ./a.out 
// 0	-17
// 20	-6
// 40	4
// 60	15
// 80	26
// 100	37
// 120	48
// 140	60
// 160	71
// 180	82
// 200	93
// 220	104
// 240	115
// 260	126
// 280	137
// 300	148