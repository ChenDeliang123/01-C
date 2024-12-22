/*
题目描述
​   给定三个小于100的正整数，求它们的乘积。

输入
​   一行三个整数 a b c（1≤a,b,c≤100）

输出
​   一个整数表示三数的乘积

样例输入
2 3 4
样例输出
24
*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", a * b * c);
}
