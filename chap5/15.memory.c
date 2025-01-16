/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15.memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:06:29 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 14:37:21 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(0));
    int* arr = (int*)malloc(sizeof(int) * 10);
    for (int i; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int* arr2 = (int*)calloc(10, sizeof(int));
    for (int i; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    free(arr);
    free(arr2);

    char s1[100] = "Hello world";
    int size = strlen(s1) + 1;
    char s2[100], s3[100];
    memcpy(s2, s1, size);
    memmove(s3, s1, size);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    // s2和s3都从第四位开始拷贝
    memcpy(s2 + 4, s2, size);
    memmove(s3 + 4, s3, size);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    return 0;
}