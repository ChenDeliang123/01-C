/*
题目描述
​ 输入一个正整数 n，并输出一个沙漏形，这个沙漏形有 2n+1
行，第一行有 2n+1 个字母，其中前 n+1 个字符是从 A 开始依次递增的，而后 n
个字符是由第 n+1 个字符开始依次递减的。之后的 n 行每行会少头尾两个字母。再之后的
n 行则正好是前 n 行反过来输出的结果。注意末尾不要有多余的输出。

输入
​ 输入一个正整数 n。（0<n<26）

输出
​ 按照样例输出。

样例输入
2
样例输出
ABCBA
 BCB
  C
 BCB
ABCBA

样例输入2
3
样例输出2
ABCDCBA
 BCDCB
  CDC
   D
  CDC
 BCDCB
ABCDCBA
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        int a_num = abs(i - n) * 2 + 1;
        int b_num = n - abs(n - i); // abs(n - i)--->第 i 行到第 n 行的距离
        char ch = 'A' + n;
        for (int j = 0; j < b_num; j++) {
            printf(" ");
        }
        for (int j = 0; j < a_num; j++) {
            printf("%c", ch - abs(j - a_num / 2));
        }
        printf("\n");
    }
    return 0;
}