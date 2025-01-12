/*
题目描述
​ 输入一个正整数n，求1~n之间的"回文数"的个数。

回文数是指一个数倒过来和原数一样，如12121、11、1221、1是回文数。

输入
​ 一行一个正整数n，1≤n≤10000。

输出
​ 一行一个正整数，表示1~n之间回文数的个数，包括1和n。

样例输入
12
样例输出
10
*/

#include <inttypes.h>
#include <stdio.h>

int is_palindrome(int x) {
    int y = 0;
    int z = x;
    while (z) {
        y = y * 10 + z % 10;
        z /= 10;
    }
    return x == y;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
