/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.switch_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:15:58 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/10 15:39:27 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
请使用 switch 结构完成如下任务，程序读入一个整数 n：

如果 n = 1：输出 one two three

如果 n = 2：输出 two three

如果 n = 3：输出 three

否则输出 error
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("one ");
    case 2:
        printf("two ");
    case 3:
        printf("three \n");
        break;
    default:
        printf("error\n");
    }

    return 0;
}