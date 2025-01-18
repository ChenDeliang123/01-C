/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.prime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:27:57 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/16 22:28:25 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
创建斐波那契数列
*/
#include <stdio.h>

int prime[100] = {0};

void init_prime(int n) {
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (prime[i])
            continue;
        printf("%d is prime: ", i);
        for (int j = i * i; j <= n; j += i) {
            prime[j] = 1;
            printf(" %d", j);
        }
        printf("\n");
    }
    return;
}

int main() {
    init_prime(50);
    int x;
    while (scanf("%d", &x) != EOF) {
        printf("prime[%d] = %d\n", x, prime[x]);
    }
    return 0;
}
