#include <stdio.h>

#define P(msg)                                                                 \
    {                                                                          \
        printf("define P: %d\n", msg);                                         \
        printf("hello world\n");                                               \
    }

int main() {
    P(123);
    return 0;
}