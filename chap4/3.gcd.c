/*
递归函数：欧几里得算法

整数 a, b 的最⼤公约数⼀般表示为 gcd(a, b)

终极奥义：gcd(a, b) = gcd(b, a%b)

证明1：b和a%b的最⼤公约数，是a和b的公约数
    设gcd(b, a%b) = c
    b = x * c
    a % b = y * c
    ==> a % b = a - k * b,
        a - k * b = y * c
    ==> a = (y + k * x) * c
    因为y, k, x都为整数，证明1成立

证明2：b和a%b的最⼤公约数也是a和b的最⼤公约数
    b = x * c
    a % b = y * c
    ==> x 和 y 互质(用反证法可推出，或问AI)
    因为b = x * c，a = (y + k * x) * c
    要证明c也是a、b的最大公约数
    则需证明x 与 (y + k * x)互质
    反证法(证明x 与 (y + k * x)互质):
        gcd(x, y+k*x)=d
        ==> x = n * d,
            y = m * d - k * x = d * (m - k * n)
        ==> x 和 y都含有公约数 d
            因为x 和 y互质 ==> d = 1
        ==> x 和 y+k*x互质
        ==> b和a%b的最⼤公约数也是a和b的最⼤公约数
*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    // a % b 的最终结果：
    // 1.直接被整除, 结果为零；
    // 2.整数 b 先为 1，a % b = 0
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("gcd(%d, %d)= %d\n", a, b, gcd(a, b));
    }
    return 0;
}