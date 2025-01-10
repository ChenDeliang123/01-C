/*
请使用 for 循环实现程序，输出斐波那契数列前20项的值。
F[n] = F[n-1] + F[n-2]， F[0]=1, F[1]=1
*/

#include <stdio.h>

int main() {
    int arr[20];
    arr[0] = 1, arr[1] = 1;
    for (int i = 2; i < 20; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("arr = ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}