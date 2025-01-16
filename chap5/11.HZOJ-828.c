/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.HZOJ-828.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:18:37 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 12:18:41 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
2010年数据结构42题
*/

/*
题目描述
将 n（1<n≤10000）个整数存放到一维数组 R
中。试设计一个在时间和空间两方面都尽可能高效的算法， 将R中保存的序列循环左移 p
个位置（0<p<n），即将R中的数据序列由（X0，X1，…，Xn−1）
变换为（Xp，Xp+1，…，Xn−1，X0，X1，…，Xp−1）。

程序中的主要部分已经帮你写好了，你只需要将如下代码拷贝到你的环境中，并且补充
rotate_array 函数功能即可。你也可以添加额外的函数完成程序。函数功能描述如下：

输入参数
输入参数 num ：表示一维数组 R

输入参数 n ：如题目中所述，表示 n 个整数

输入参数 k : 如题目中所述，表示循环左移 p 个位置

返回值说明
函数无返回值
*/

/*
模版代码：
#include <stdio.h>

void rotate_array(int *nums, int n, int p) {
   //TODO
    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
解题思路：
1. 先翻转 0~p-1
2. 再翻转 p~n-1
3. 再翻转 0~n-1
例：1 2 3 4 5 6 封装前2位
step1---> 2 1 3 4 5 6
step2---> 2 1 6 5 4 3
step3---> 3 4 5 6 1 2
*/

#include <stdio.h>

void rotate_array(int* nums, int n, int p) {
    for (int i = 0, j = p - 1; i < j; i++, j--) {
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    for (int i = p, j = n - 1; i < j; i++, j--) {
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    return;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++) {
        if (i != 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}