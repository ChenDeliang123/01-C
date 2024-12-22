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
    char s[10];
    scanf("%s", s);
    int a = 0, b = 0, c = 0, d = 0;
    sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    printf("%d\n", sum);
    return 0;
}