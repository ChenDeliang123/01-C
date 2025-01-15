/*
题目描述
​ 给出一个 n∗m 的整数矩阵，将这个矩阵顺时针旋转 90o
后输出。

输入
​ 第一行输入两个整数 n,m。（1≤n,m≤200）

​ 接下来 n 行，每行输入 m
个元素，表示输入的矩阵。矩阵中的元素都是绝对值小于 10000 的整数。

输出
​ 输出 m 行，每行 n 个元素，表示旋转后的矩阵。

样例输入
3 4
-1 3 6 3
7 7 9 1
10 3 4 6
样例输出
10 7 -1
3 7 3
4 9 6
6 1 3
*/

#include <stdio.h>

int arr[205][205];
int n, m;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = j;
            int y = n - 1 - i;
            scanf("%d", &arr[x][y]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j)
                printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}