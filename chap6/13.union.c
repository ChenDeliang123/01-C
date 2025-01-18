#include <stdio.h>

typedef union {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } byte;
    unsigned int num;
} A;

#define P(a, format)                                                           \
    { printf("%s = " format "\n", #a, a); }

int main() {
    A a;
    a.num = 0x11223344;
    P(a.num, "%x");
    P(a.byte.byte1, "%x");
    P(a.byte.byte2, "%x");
    P(a.byte.byte3, "%x");
    P(a.byte.byte4, "%x");
    printf("sizeof(A) = %lu\n", sizeof(A));
    printf("&a.num = %p\n", &a.num);
    printf("&a.byte.byte1 = %p\n", &a.byte.byte1);
    printf("&a.byte.byte2 = %p\n", &a.byte.byte2);
    printf("&a.byte.byte3 = %p\n", &a.byte.byte3);
    printf("&a.byte.byte4 = %p\n", &a.byte.byte4);
    return 0;
}