/*
    请写⼀个程序，读⼊⼀个⾏字符串（可能包含空格），输出这个
字符串中字符的数量。
*/
#include <stdio.h>

int main()
{
    char str[100] = "hello world";
    //int num = scanf("[a-z || A-Z || ^\n]", str);
    printf("%s\n", str);
    scanf("%s", str);
    printf("scanf s: %s\n", str);
    getchar();         //吞掉空格
    scanf("%[a-z || A-Z]", str);
    printf("%%[a-z || A-Z]: %s\n", str);
    return 0;
}