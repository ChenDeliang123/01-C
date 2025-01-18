#include <stdio.h>

void set_buff(char* buff, void* head, void* begin, void* end, char ch) {
    while (begin != end) {
        buff[begin - head] = ch;
        begin += 1;
    }
    return;
}

#ifdef STRUCT_A

typedef struct A {
    char a;
    int b;
    short c;
} A;

void output() {
    int n = sizeof(A), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++)
        buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++)
        printf("-");
    printf("\n");
    A chendl;
    set_buff(buff, &chendl.a, &chendl.a, 1 + (void*)&chendl.a, 'a');
    set_buff(buff, &chendl.a, &chendl.b, 4 + (void*)&chendl.b, 'b');
    set_buff(buff, &chendl.a, &chendl.c, 2 + (void*)&chendl.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return;
}

#endif

#ifdef STRUCT_B

typedef struct B {
    char a;
    short b;
    int c;
} B;

void output() {
    int n = sizeof(B), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++)
        buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++)
        printf("-");
    printf("\n");
    B chendl;
    set_buff(buff, &chendl.a, &chendl.a, 1 + (void*)&chendl.a, 'a');
    set_buff(buff, &chendl.a, &chendl.b, 2 + (void*)&chendl.b, 'b');
    set_buff(buff, &chendl.a, &chendl.c, 4 + (void*)&chendl.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return;
}

#endif

#ifdef STRUCT_C
#pragma pack(1)
typedef struct C {
    char a;
    short b;
    int c;
} C;

void output() {
    int n = sizeof(C), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++)
        buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++)
        printf("-");
    printf("\n");
    C chendl;
    set_buff(buff, &chendl.a, &chendl.a, 1 + (void*)&chendl.a, 'a');
    set_buff(buff, &chendl.a, &chendl.b, 2 + (void*)&chendl.b, 'b');
    set_buff(buff, &chendl.a, &chendl.c, 4 + (void*)&chendl.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return;
}

#endif

int main() {
    output();
    return 0;
}