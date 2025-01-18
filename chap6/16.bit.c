#include <stdio.h>

typedef struct {
    int a : 1; //  将a设置为最多占1个2进制位
    int b : 2; //  将b设置为最多占2个2进制位
    int c : 3; //  将a设置为最多占3个2进制位
} A;

typedef struct {
    unsigned int a : 1; //  将a设置为最多占1个2进制位
    unsigned int b : 2; //  将b设置为最多占2个2进制位
    unsigned int c : 3; //  将a设置为最多占3个2进制位
} B;

#define P(a, format)                                                           \
    { printf("%s = " format "\n", #a, a); }

int main() {
    P(sizeof(A), "%lu");
    A obj;
    obj.a = 15;
    obj.b = 15;
    obj.c = 15;
    P(obj.a, "%d"); //有符号位会溢出产生补码
    P(obj.b, "%d"); //有符号位会溢出产生补码
    P(obj.c, "%d"); //有符号位会溢出产生补码
    B obj2;
    obj2.a = 15;
    obj2.b = 15;
    obj2.c = 15;
    P(obj2.a, "%d");
    P(obj2.b, "%d");
    P(obj2.c, "%d");
    return 0;
}