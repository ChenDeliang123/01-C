/*
题目描述
​
读入一个两位的个位不为零的正整数，将它的十位数和个位数调换后输出。

输入
​ 一个整数 n（11≤n≤99）

输出
​ 一个整数表示调换后的数。
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int shi = a / 10, ge = a % 10;
    int b = ge * 10 + shi;
    printf("%d", b);
    return 0;
}