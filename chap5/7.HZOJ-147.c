/*
题目描述
​ 从键盘输入一个位数可能达到 10000
位的整数，判断它是否是一个偶数，如果是偶数输出 YES，否则输出 NO。

输入
​ 输入一行，包含一个正整数。（长度小于等于 10000）

输出
​ 如果是偶数输出 YES 否则输出 NO。

样例输入
1231393713904
样例输出
YES
*/

#include <stdio.h>
#include <string.h>

char s[10005];

int main() {
    scanf("%s", s);
    if ((s[strlen(s) - 1] - '0') % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}