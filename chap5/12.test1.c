/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12.test1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:18:21 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 12:18:24 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ip 地址一般是由 4 个不超过 255 的数字组成，例如：192.168.1.1
实现一个程序，读入 ip 地址，转换成一个32位整数
要求：不要使用数学运算符
*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char* p = (char*)&n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("%u\n", n); //无符号位
    return 0;
}