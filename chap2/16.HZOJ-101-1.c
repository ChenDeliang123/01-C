/*
题目描述
​ 输入一个不超过 10000 的整数
n，计算它每一位上的数字总和。

输入
​ 一个整数 n 。（1≤n<10000）

输出
​ 输出这个整数每一位的数字和。

样例输入
12
样例输出
3
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}