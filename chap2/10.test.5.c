/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.test.5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:08:03 by chen_dl           #+#    #+#             */
/*   Updated: 2024/12/22 20:15:14 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*请写⼀个程序，读⼊⼀个角度值，将角度值转为弧度值。*/

#include <math.h>
#include <stdio.h>

void print_radian(float x) {
    printf("角度: %f ---> 弧度: %f\n", x, (x / 180.0) * acos(-1));
}

int main() {
    float x;
    scanf("%f", &x);
    print_radian(x);
}