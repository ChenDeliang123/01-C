#include <stdio.h>

#define STR(n) #n
//将 n 的内容转换为字符串
#define RUN(fun)                                                               \
    {                                                                          \
        fun;                                                                   \
        printf("%s done\n", #fun);                                             \
    }

void test() {
    printf("this is test\n");
    return;
}

void test2(int a, int b) {
    printf("this is test2: a = %d, b = %d\n", a, b);
    return;
}

#define CAT(a, b) a##b
//##: 将两段内容链接到一起

int main() {
    printf("%s\n", STR(hello world));
    RUN(test());
    RUN(test2(2, 3));
    int n10 = 123, n11 = 456;
    CAT(n, 10) = 789;
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}