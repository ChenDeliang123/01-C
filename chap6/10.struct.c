#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    char gender;
    float height;
} person;

void set_buff(char* buff, void* head, void* begin, void* end, char ch) {
    while (begin != end) {
        buff[begin - head] = ch;
        begin += 1;
    }
    return;
}

void output_person() {
    int n = sizeof(person), len = 0;
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
    person chendl;
    set_buff(buff, chendl.name, &chendl.name, 20 + (void*)chendl.name, 'n');
    set_buff(buff, chendl.name, &chendl.age, 4 + (void*)&chendl.age, 'a');
    set_buff(buff, chendl.name, &chendl.gender, 1 + (void*)&chendl.gender, 'g');
    set_buff(buff, chendl.name, &chendl.height, 4 + (void*)&chendl.height, 'h');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return;
}

int main() {
    printf("sizeof(struct Person) = %lu\n", sizeof(person));
    output_person();
    return 0;
}
