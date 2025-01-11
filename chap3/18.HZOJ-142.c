/*
题目描述
​ 质数：除了 1 和它本身，没有其他因数。

​ 回文数：正着看和反着看完全一样的数，如 12321,59595。

​ 给定两个五位正整数
a,b，找出这两个数之间（含）所有既是质数又是回文数的数。

输入
​ 输入两个五位正整数 a,b。（10000≤a,b≤99999）

输出
​ 输出一行，为从 a 到 b
之间所有的质数回文数，两个数字之间用空格隔开，最后一个数后没有空格。

样例输入
10000 10600
样例输出
10301 10501
数据规模与约定
​ 时间限制：1 s

​ 内存限制：256 M

​ 100% 的数据保证 10000≤a,b≤99999
*/

#include <stdio.h>

int is_palindrome(int n) {
    if (__builtin_expect(n < 0, 0))
        return 0;
    int y = 0;
    int x = n;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return n == y;
}

int main() {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if (i % j)
                continue;
            flag = 0;
        }
        if (flag && is_palindrome(i)) {
            if (c)
                printf(" ");
            c += printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}