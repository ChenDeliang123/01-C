/*
题目描述
​ 输入一个正整数 n，你需要计算 1+2+……+n 的值。​
公式如下：​ sum=n∗(1+n)/2

输入
​ 一个整数 n（1≤n≤1000000）

输出
​ 一个整数表示 1+2+……+n 的值。

样例输入
10
样例输出
55
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", 1LL * n * (1 + n) / 2);
    return 0;
}