/*
题目描述
​
给定一个三位数的整数，分别输出它的百位数、十位数和个位数。

输入
​   一个整数 a（100≤a≤999）

输出
​   第一行为 a 的百位数​ 第二行为 a 的十位数​ 第三行为
a 的个位数

样例输入
243
样例输出
2
4
3
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    //数学运算
    int i = a / 100;
    int j = a / 10 % 10;
    int k = a % 10;
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    return 0;
}