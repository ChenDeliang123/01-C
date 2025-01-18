/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   23.my_qsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:50:12 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/17 10:29:47 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int* getRandData(int size) {
    int* arr = (int*)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

/*
1.如果p1应该排在p2前面 => 返回负数
2.p1 和 p2 的位置不用动 => 返回0
3.p1 排在 p2 后面 => 返回正数
*/
//从小到大排序
int comp(const void* p1, const void* p2) {
    const int* a = (const int*)p1;
    const int* b = (const int*)p2;
    if (*a > *b)
        return -1;
    if (*a == *b)
        return 0;
    return 1;
}

int comp2(const void* p1, const void* p2) {
    return *((const int*)p1) - *((const int*)p2);
}

void output(int* arr, int size) {
    int len = 0;
    // line 1
    for (int i = 0; i < size; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    // line 2
    for (int i = 0; i < len; i++) {
        printf("-");
    }
    printf("\n");
    // line 3
    for (int i = 0; i < size; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n\n");
    return;
}

void swap(void* x, void* y, size_t size) {
    char* a = (char*)x;
    char* b = (char*)y;
    for (int i = 0; i < size; i++) {
        if (a[i] == b[i])
            continue;
        char c = a[i];
        a[i] = b[i];
        b[i] = c;
    }
    return;
}

void swap2(void* x, void* y, size_t size) {
    void* buff = malloc(size);
    memmove(buff, x, size);
    memmove(x, y, size);
    memmove(y, buff, size);
    free(buff);
    return;
}

void my_qsort(void* arr, size_t count, size_t size,
              int* comp(const void*, const void*)) {
    if (count <= 1)
        return;
    void* x = arr;
    void* y = arr + (count - 1) * size;
    void* z = malloc(size);
    memcpy(z, arr, size);
    do {
        while (comp(x, z) < 0)
            x += size;
        while (comp(z, y) < 0)
            y -= size;
        if (x <= y) {
            swap(x, y, size);
            x += size, y -= size;
        }
    } while (x <= y);
    size_t cnt1 = y < arr ? 0 : (y - arr) / size + 1;
    size_t cnt2 = count - (x - arr) / size;
    my_qsort(arr, cnt1, size, comp);
    my_qsort(x, cnt2, size, comp);
    return;
}

int main() {
    srand(time(0));
    int* arr = getRandData(10);
    output(arr, 10);
    printf("use comp: \n");
    my_qsort(arr, 10, sizeof(int), comp);
    output(arr, 10);
    printf("use comp2: \n");
    my_qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    return 0;
}