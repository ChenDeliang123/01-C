/*
题目描述
​ 输入一个日期，计算这个日期前一天和后一天的日期。

输入
​ 输入三个整数 y,m,d 分别表示年月日
（1000≤y≤3000,1≤m≤12, 日期必合法）。

输出
​
第一行输出三个用空格分隔的整数，表示前一天的年月日。

​
第二行输出三个用空格分隔的整数，表示后一天的年月日。

样例输入
1900 2 28
样例输出
1900 2 27
1900 3 1
*/

#include <stdio.h>

int is_leap_year(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int days(int y, int m) {
    switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28 + is_leap_year(y);
    }
    return 0;
}

void output_preday(int y, int m, int d) {
    d -= 1;
    if (d == 0)
        m -= 1;
    if (m == 0)
        y -= 1;
    if (m == 0)
        m = 12;
    if (d == 0)
        d = days(y, m);
    printf("%d %d %d\n", y, m, d);
}

void output_nextday(int y, int m, int d) {
    d += 1;
    if (d > days(y, m))
        m += 1, d = 1;
    if (m > 12)
        y += 1, m = 1;
    printf("%d %d %d\n", y, m, d);
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    output_preday(y, m, d);
    output_nextday(y, m, d);
    return 0;
}