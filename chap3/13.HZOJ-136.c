/*
题目描述
​ 给定一个正整数 n，输出 n 以内（含）所有 7 的倍数。

输入
​ 输入一个正整数 n。（n≤1000）

输出
​ 输出所有小于等于 n 的 7 的倍数，每行一个数。

样例输入
21
样例输出
7
14
21
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) {
        printf("%d\n", i);
    }
    return 0;
}