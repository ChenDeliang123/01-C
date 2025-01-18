#include <stdio.h>

#ifdef PLAN_A

#define COLOR(msg, code) ("\033[1;" #code "m" msg "\033[0m")
#define RED(msg) COLOR(msg, 31)
#define GREEN(msg) COLOR(msg, 32)
#define YELLOW(msg) COLOR(msg, 33)
#define BLUE(msg) COLOR(msg, 34)

int main() {
    printf(RED("hello color\n"));
    printf(GREEN("hello color\n"));
    printf(YELLOW("hello color\n"));
    printf(BLUE("hello color\n"));
    return 0;
}

#else

enum COLOR_CODE {
    RED = 31,
    GREEN,
    YELLOW,
    BLUE,
};

#define COLOR_SET "\033[1;%dm"
#define COLOR_END "\033[0m\n"

int main() {
    printf(COLOR_SET "this is plan b" COLOR_END, RED);
    printf(COLOR_SET "this is plan b" COLOR_END, GREEN);
    printf(COLOR_SET "this is plan b" COLOR_END, YELLOW);
    printf(COLOR_SET "this is plan b" COLOR_END, BLUE);
    printf(COLOR_SET "this " COLOR_SET "is " COLOR_SET "plan " COLOR_SET
                     "b" COLOR_END,
           RED, GREEN, YELLOW, BLUE);
    return 0;
}

#endif