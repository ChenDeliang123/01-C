/*
变参函数

实现可变参数 max_int，从若干个传入的参数中返回最大值。

int max_int(int a, ...);

如何获得 a 往后的参数列表？ va_list 类型的变量
如何定位 a 后面第⼀个参数的位置？ va_start 函数
如何获取下⼀个可变参数列表中的参数？va_arg 函数
如何结束整个获取可变参数列表的动作？va_end 函数
*/

#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>

int max_int(int size, ...) {
    va_list args;
    va_start(args, size);
    int ans = INT32_MIN;
    for (int i = 0; i < size; i++) {
        int a = (int)va_arg(args, int);
        if (a > ans)
            ans = a;
    }
    va_end(args);
    return ans;
}

int main() {
    printf("max_int(3, 8, 7, 9) = %d\n", max_int(3, 8, 7, 9));
    printf("max_int(2, 8, 7, 9) = %d\n", max_int(2, 8, 7, 9));
    return 0;
}