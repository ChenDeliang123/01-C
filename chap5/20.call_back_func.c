/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20.call_back_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 21:46:02 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 22:19:41 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
实现对任一定义域在 [0, 1000] 内的单调函数求解的方法，测试的时候，
你的方法可以尝试对以下单调函数进行求解：
(给出f(x)的值， 求出x)
1. f(x) = x * x
2. f(x) = 3x^2 + 2x – 5
3. f(x) = 1.2x
要求：实现一个方法，能同时对以上三个函数进行求解
*/

#include <math.h>
#include <stdio.h>

typedef double (*FUNC_T)(double);

double f1(double x) { return x * x; }

double f2(double x) { return 3 * x * x + 2 * x - 5; }

double f3(double x) { return pow(1.2, x); }

double binary_search(FUNC_T func, double y) {
    double l = 0, r = 1000, mid;
    while (r - l >= 0.000001) {
        mid = (r + l) / 2.000000;
        if (func(mid) > y)
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main() {
    double y;
    while (scanf("%lf", &y) != EOF) {
        double x1 = binary_search(f1, y);
        double x2 = binary_search(f2, y);
        double x3 = binary_search(f3, y);
        printf("x1 = %lf, f(%lf) = %lf\n", x1, x1, f1(x1));
        printf("x2 = %lf, f(%lf) = %lf\n", x2, x2, f2(x2));
        printf("x3 = %lf, f(%lf) = %lf\n", x3, x3, f3(x3));
        printf("\n");
    }
}