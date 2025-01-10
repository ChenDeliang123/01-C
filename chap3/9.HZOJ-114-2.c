/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.HZOJ-114-2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:54:40 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/10 20:00:16 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
题目描述
​ 输入一个字母 x，输出字母对应的名字。

输入
​ 输入一个小写字母 x​ （′a′≤x≤′z′）​

输出
​ 输出字母对应的名字：

​ h 对应 He；

​ l​ 对应 Li​；

​ c​ 对应 Cao​；

​ d​ 对应 Duan​；

​ w 对应 Wang。

​ 不属于上述列表中的字母则输出 Not Here​。
*/
#include <stdio.h>

int main() {
    char s[10];
    const char* str;
    scanf("%[a-z]", s);
    switch (s[0]) {
    case 'h':
        str = "He";
        goto PRINT;
    case 'l':
        str = "Li";
        goto PRINT;
    case 'c':
        str = "Cao";
        goto PRINT;
    case 'd':
        str = "Duan";
        goto PRINT;
    case 'w':
        str = "Wang";
        goto PRINT;
    PRINT:
        printf("%s\n", str);
        break;
    default:
        printf("Not Here\n");
        break;
    }
    return 0;
}
