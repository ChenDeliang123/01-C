#include <stdio.h>

int main() {
    int a;
    int int_max = 0x7fffffff;
    int int_min = 0x80000000;
    printf("int_max = %d\n", int_max);
    printf("int_min = %d\n", int_min);
    printf("input hex: ");
    scanf("%x", &a);
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    return 0;
}