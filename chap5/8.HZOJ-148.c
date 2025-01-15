/*
题目描述
​ 输入一个字符串，然后把这个字符串反转输出。

输入
​ 输入一个字符串，不包含空格。（长度小于 50）

输出
​ 输出这个字符串的反转。

样例输入
1234567890
样例输出
0987654321

*/

#include <stdio.h>
#include <string.h>

void char_swap(char* a, char* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    char s[55];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        char_swap(&s[i], &s[j]);
    }
    printf("%s\n", s);
    return 0;
}