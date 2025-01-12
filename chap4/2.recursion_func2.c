#include <stdio.h>

int func(int n) {
    printf("in func(%d)\n", n);
    int ret;
    if (n == 1 || n == 2)
        ret = 1;
    else
        ret = func(n - 1) + func(n - 2);
    printf("out func(%d)\n", n);
    return ret;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("\nresult = %d\n", func(n));
    return 0;
}