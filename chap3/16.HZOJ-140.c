/*
题目描述
​ 输入一个正整数 n，并输出一个菱形，这个菱形有 2n−1
行，第一行有 1 个字母 A，之后的 n−1 行每行字母会变成上一行的下一个（A 的下一个是
B），且数量会递增 2 个，后面的 n+1 行至 2n−1 行，会变成上一行的上一个（B
的上一个是 A），且数量会递减 2
个，同时，我们需要在每行前输出一定数量的空格，以保证菱形居中，注意末尾不要有多余的输出。

输入
​ 输入一个正整数 n。（0<n≤26）

输出
​ 按照样例输出。

样例输入
2
样例输出
 A
BBB
 A

样例输入2:
3
样例输出2:
  A
 BBB
CCCCC
 BBB
  A
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int a_num = 2 * n - 2 * abs(n - i) - 1; //字母A数量
        int b_num = abs(n - i);                 //空格数量
        ch = 'A' + (n - 1) - b_num;
        // printf("%d %d %c\n", a_num, b_num, ch);
        for (int j = 1; j <= b_num; j++) {
            printf(" ");
        }
        for (int j = 1; j <= a_num; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}