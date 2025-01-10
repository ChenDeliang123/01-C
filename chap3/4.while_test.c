/*
请使用 while 循环实现程序，反复读入整数 x，并且输出2*x
的值，直到文件结束（EOF）。
*/

#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) != EOF) {
        printf("2 * x = %d", 2 * x);
    }
    return 0;
}