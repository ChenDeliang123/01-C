/*
使用位域的相关技巧，实现输出整型数字的⼗六进制表示

注意：不能使用 %x 和 %X 占位符

思路：一个整形占4个字节，4个字节可以分为8个16进制位
*/

#include <stdio.h>

typedef union INT_NUMBER {
    struct {
        unsigned char b1 : 4;
        unsigned char b2 : 4;
    } bytes[4];
    unsigned int number;
} INT_NUMBER;

char code(unsigned int x) {
    if (x < 10)
        return ('0' + x);
    return (x - 10 + 'A');
}

int main() {
    INT_NUMBER num;
    int n = sizeof(num);
    // num.number = 0x6a6b6d6f;
    num.number = 12345678; //  注：小端机地址会倒置
    printf("output: ");
    for (int i = 0; i < n; i++) {
        printf("%c%c", code(num.bytes[i].b2), code(num.bytes[i].b1));
    }
    printf("\n");
    return 0;
}