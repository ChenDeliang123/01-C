/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.sscanf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:56:27 by chen_dl           #+#    #+#             */
/*   Updated: 2024/12/22 19:44:16 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
sscanf: 将字符串转换成其它信息
sprintf: 将其它信息转换成字符串信息
*/
#include <stdio.h>

int main() {
    char s[100] = "123 456 789";
    int a, b, c;
    sscanf(s, "%d%d%d", &a, &b, &c); //从字符串中读入数据

    return 0;
}