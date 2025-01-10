/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.HZOJ-118.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:54:40 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/10 20:17:08 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
题目描述
​ 已知 1900 年是鼠年，输入一个年份，输出其对应生肖。

​ 鼠 rat 牛 ox 虎 tiger 兔 rabbit 龙 dragon 蛇 snake

​ 马 horse 羊 sheep 猴 monkey 鸡 rooster 狗 dog 猪 pig

输入
​ 输入一个整数 year 表示年份 （1≤year≤9999）。

输出
​ 输出一个单词，表示生肖。
*/
#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    const char* name;
    // switch ((y - 1900) % 12)   当y<1900时有bug
    switch (((y - 1900) % 12 + 12) % 12) {
    case 0:
        name = "rat";
        goto PRINT;
    case 1:
        name = "ox";
        goto PRINT;
    case 2:
        name = "tiger";
        goto PRINT;
    case 3:
        name = "rabbit";
        goto PRINT;
    case 4:
        name = "dragon";
        goto PRINT;
    case 5:
        name = "snake";
        goto PRINT;
    case 6:
        name = "horse";
        goto PRINT;
    case 7:
        name = "sheep";
        goto PRINT;
    case 8:
        name = "monkey";
        goto PRINT;
    case 9:
        name = "rooster";
        goto PRINT;
    case 10:
        name = "dog";
        goto PRINT;
    case 11:
        name = "pig";
        goto PRINT;
    PRINT:
        printf("%s\n", name);
        break;
    }

    return 0;
}
