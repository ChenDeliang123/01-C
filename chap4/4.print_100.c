/*
请在主函数中实现从1打印到100。

要求：不使用循环，不使用额外的函数定义。
*/

#include <stdio.h>

void print(int n) {
    if (n == 1) {
        printf("%d ", n);
        return;
    }
    print(n - 1);
    printf("%d ", n);
    return;
}

int cnt = 100;

int main() {
    // print(100);
    int n = cnt;
    cnt--;
    if (n == 1) {
        printf("%d\n", n);
        return 0;
    }
    main();
    printf("%d\n", n);
    return 0;
}