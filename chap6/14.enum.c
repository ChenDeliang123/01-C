/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.enum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chen_dl <19967657938@163.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:33:32 by chen_dl           #+#    #+#             */
/*   Updated: 2025/01/18 16:41:56 by chen_dl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

enum FUNC_DATA {
#ifdef TEST1
    FUNC_test1,
#endif
#ifdef TEST2
    FUNC_test2,
#endif
#ifdef TEST3
    FUNC_test3,
#endif
#ifdef TEST4
    FUNC_test4,
#endif
    FUNC_MAX
};

void test1() {
    printf("test1\n");
    return;
}

void test2() {
    printf("test2\n");
    return;
}
void test3() {
    printf("test3\n");
    return;
}
void test4() {
    printf("test4\n");
    return;
}

void (*func_arr[FUNC_MAX])() = {
#ifdef TEST1
    test1,
#endif
#ifdef TEST2
    test2,
#endif
#ifdef TEST3
    test3,
#endif
#ifdef TEST4
    test4,
#endif
};

int main() {
    for (int i = 0; i < FUNC_MAX; i++) {
        func_arr[i]();
    }
    return 0;
}