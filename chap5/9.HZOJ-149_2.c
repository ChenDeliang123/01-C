/*
题目描述
​
给定由大写，小写字母和空格组成的字符串，返回最后一个单词的长度。

输入
​ 输入一行，为字符串 s。（长度小于 50）

输出
​ 输出 s 中最后一个单词的长度。

样例输入
Today is a nice day
样例输出
3
样例说明
​ 最后一个单词为 day。
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    int len = 0;
    while (scanf("%s", s) != EOF) {
    }
    len = strlen(s);
    printf("%d\n", len);
    return 0;
}