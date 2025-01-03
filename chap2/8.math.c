/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.math.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:39:15 by chen_dl           #+#    #+#             */
/*   Updated: 2024/12/22 19:57:30 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("pow(2, 3) = %f\n", pow(2, 3));     //指数
    printf("sqrt(2) = %f\n", sqrt(2));         //开根号
    printf("ceil(4.01) = %f\n", ceil(4.01));   //向上取整
    printf("floor(5.99) = %f\n", floor(5.99)); //向下取整
    printf("abs(-3) = %d\n",
           abs(-3)); //取整数绝对值，头文件是stdlib.h，只能取整数
    printf("fabs(-3.05) = %f\n", fabs(-3.05)); //取浮点数绝对值

    printf("acos(-1) = %lf\n", acos(-1));
    // arccos 函数：传入余弦值，返回弧度制，即 余弦值：-1 --> 弧度指：PI
    return 0;
}