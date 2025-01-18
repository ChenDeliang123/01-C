#include <stdio.h>

#ifdef CLOCK
void test_clock() {
    printf("this is clock test\n");
    return;
}
#endif

#ifdef PHONE
void test_phone() {
    printf("this is phone test\n");
    return;
}
#endif

int main() {
#ifdef CLOCK
    test_clock();
#endif
#ifdef CLOCK
    test_phone();
#endif
    return 0;
}
