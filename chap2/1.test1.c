/*
请使用 printf 函数，求解⼀个数字 n 的⼗进制表示的数字位数
*/

#include <stdio.h>

int main() {
    int n;
    printf("please input number: ");
    scanf("%d", &n);
    int num = printf("%d\n", n) - 1;
    printf("%d has %d digit(s)\n", n, num);
    return 0;
}