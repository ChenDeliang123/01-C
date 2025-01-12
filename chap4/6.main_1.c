/*
main 函数参数:
    argc => 命令参数的个数
    argv => 命令参数
    env  => 环境变量
int main();
int main(int argc, char *argv[]);
int main(int argc, char *argv[], char **env);
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (strcmp(argv[0], "./bilibili")) {
        printf("wrong call, please call: ./bilibili\n");
        return 0;
    }
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argc[%d] = %s\n", i, argv[i]);
    }
    return 0;
}