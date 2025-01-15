/*
题目描述
 小明的课外班上有 N 个同学，每个同学的名字长度都不一样。请找出班上名字长度最长的同学。

输入
 输入第一行为班级同学数量 N。（0≤N≤20）

 接下来 N 行每行是一个同学的名字（中间没有空格，长度小于 100）。

输出
 输出一行，为名字最长的同学的名字。

样例输入
3
Tom
Gaofei
Lobs
样例输出
Gaofei
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[105], t[105];
    int s_len, t_len = -1;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", s);
        s_len = strlen(s);
        if(s_len > t_len) {
            t_len = s_len;
            strcpy(t, s);
        }
    }
    printf("%s\n", t);
    return 0;
}
