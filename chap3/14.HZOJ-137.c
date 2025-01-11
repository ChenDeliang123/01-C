/*
题目描述
​ 参照样例按要求输出字母三角形。

输入
​ 输入一个正整数 n。（0<n<7）

输出
​ 按照样例输出。

样例输入:
4
样例输出:
ABCD
EFG
HI
J

样例输入2:
3
样例输出2:
ABC
DE
F

样例输入3:
2
样例输出3:
AB
C
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}