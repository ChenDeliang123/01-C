/*
题目描述
输入一个字符串，统计其中字符 A 的数量并输出。

输入
输入一个不带空格的字符串，字符串长度不超过 100。

输出
输出字符串中字符 A 的数量。

样例输入
AabdkeaoektA
样例输出
2 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105];
    scanf("%s", str);
    int cnt = 0;
    for(int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == 'A')
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
