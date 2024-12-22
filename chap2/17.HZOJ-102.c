/*
题目描述
​ 已知注水管 A 单独注满一池水需要 a 小时，注水管 B
单独注满一池水需要 b 小时，排水管 C 将一池水排净需要 c
小时。初始时水池中没有水，同时打开注水管 A 和 B。t 小时后，再打开排水管
C，问水池注满一共需要多少小时？

​ 保证打开水管 C
时水池还没有满，且保证水池最终可以注满。

输入
​ 输入四个整数 a,b,c,t （1≤a,b,c,t≤50）

输出
​
输出一个浮点数，表示水池注满一共需要多少小时（包括一开始的 t 小时）。

​ 结果保留两位小数。

样例输入
20 16 10 5
样例输出
40.00
*/

#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    double rest = (1 - (1.0 / a + 1.0 / b) * t);
    double t1 = rest / (1.0 / a + 1.0 / b - 1.0 / c);
    printf("%.2lf\n", t + t1);
    return 0;
}