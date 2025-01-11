/*
题目描述
​ 输入一个正整数 n，并输出一个菱形，这个菱形有 2n−1
行，第一行有 2 个字母 A，之后的 n−1 行每行字母 A 的数量会递增 2 个，后面的 n+1
行至 2n−1 行， 每行字母A 的数量会递减
2个，同时，我们需要在每行前输出一定数量的空格，
以保证菱形居中，注意末尾不要有多余的输出。

输入
​ 输入一个正整数 n。（0<n<40）

输出
​ 按照样例输出。

样例输入:
2
样例输出:
 AA
AAAA
 AA

样例输入2:
3
样例输出2:
  AA
 AAAA
AAAAAA
 AAAA
  AA
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++) {
        int a_num = 2 * n - 2 * abs(n - i); //字母A数量
        int b_num = abs(n - i);             //空格数量
        // printf("%d %d\n", a_num, b_num);
        for (int j = 1; j <= b_num; j++) {
            printf(" ");
        }
        for (int j = 1; j <= a_num; j++) {
            printf("A");
        }
        printf("\n");
    }
}