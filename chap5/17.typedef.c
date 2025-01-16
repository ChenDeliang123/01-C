/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17.typedef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:05:18 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 15:14:08 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef long long LL;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test(int a) {
    printf("hello function pointer\n");
    return;
}

int main() {
    LL a;
    printf("sizeof(a) = %lu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p1 = arr;
    Func p2 = test;
    return 0;
}