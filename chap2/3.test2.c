/*
    2、请写⼀个程序，读⼊⼀个⾏字符串（可能包含空格），输出这个
字符串中字符的数量。
*/
#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int num = printf("%s", str);
    printf(": %d\n", num);

    return 0;
}