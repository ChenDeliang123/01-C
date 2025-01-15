/*
题目描述
 输入一个字符串，将其中所有的大写和小写字母改成该字母的下一个字母，z
的下一个字母为 a

输入
 输入一个不包含空格的字符串。字符串长度小于 50

输出
 输出一行，为转换后的字符串。

样例输入
ABCDZ123abcdefz
样例输出
BCDEA123bcdefga
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (islower(s[i])) { //判断字符是否为小写英文
            if (s[i] == 'z')
                s[i] = 'a';
            else
                s[i] += 1;
        }
        if (isupper(s[i])) { //判断字符是否为大写英文
            if (s[i] == 'Z')
                s[i] = 'A';
            else
                s[i] += 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
