#include <stdio.h>

void print_digit(int x) {
    /*
    1 << i：这是一个位运算，表示将数字1的二进制表示向左移动i位。
    例如，如果i是3，那么1 << 3的结果是1000（即十进制的8）。
    这个操作的目的是创建一个只在第i位为1，其余位为0的二进制数。
    */
    for (int i = 31; i >= 0; i--) {
        printf("%c", (x & (1 << i)) ? '1' : '0');
    }
    printf("\n");
    return;
}

int main() {
    int a = 3, b = 5;
    printf("a = ");
    print_digit(a);

    printf("b = ");
    print_digit(b);

    printf("a & b = ");
    print_digit(a & b); //与

    printf("a | b = ");
    print_digit(a | b); //或

    printf("a ^ b = ");
    print_digit(a ^ b); //异或
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a = ");
    print_digit(a);
    printf("b = ");
    print_digit(b);

    printf("~a = ");
    print_digit(~a); //按位取反

    printf("(~b + 1) = %d\n", (~b + 1)); //得到负值

    /*
        找到一串二进制数的最后一位(从左到右数)
    */
    int x;
    scanf("%d", &x);
    printf("x = ");
    print_digit(x);
    printf("(-x & x)= ");
    print_digit(-x & x);
    return 0;
}