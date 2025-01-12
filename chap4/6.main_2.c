/*
main 函数参数:
    argc => 命令参数的个数
    argv => 命令参数
    env  => 环境变量
int main();
int main(int argc, char *argv[]);
int main(int argc, char *argv[], char **env);
*/

#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[], char** env) {
    int flag = 0;
    for (char** p = env; p[0]; p++) {
        if (strcmp(p[0], "USER=chendl") == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("error USER, please use chendl\n");
        return 0;
    }
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argc[%d] = %s\n\n", i, argv[i]);
    }
    return 0;
}