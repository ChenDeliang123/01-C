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
    long long n;
    long long sum = 0; //用int的话结果会超数据类型
    scanf("%lld", &n);
    sum = n * (n + 1) / 2;
    printf("%lld", sum);
    return 0;
}