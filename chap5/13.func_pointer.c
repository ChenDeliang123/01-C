/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.func_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:49:04 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 13:56:23 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test1() {
    printf("test1 function!\n");
    return;
}

void test2() {
    printf("test2 function!\n");
    return;
}

void test3() {
    printf("test3 function!\n");
    return;
}

int main() {
    srand(time(0));
    void (*arr[3])() = {test1, test2, test3};
    for (int i = 0; i < 10; i++) {
        arr[rand() % 3]();
    }
    return 0;
}