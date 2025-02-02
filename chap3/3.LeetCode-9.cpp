/*
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数
是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

例如，121 是回文，而 123 不是。


示例 1：

输入：x = 121
输出：true
示例 2：

输入：x = -121
输出：false
解释：从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3：

输入：x = 10
输出：false
解释：从右向左读, 为 01 。因此它不是一个回文数。


提示：

-2^31 <= x <= 2^31 - 1


进阶：你能不将整数转为字符串来解决这个问题吗？
*/
#include <cstdio>

class Solution {
public:
    bool isPalindrome(int x) {
        if (__builtin_expect(!!(x < 0), 0)) {
            //如果x < 0，则结果大概率为假，帮助CPU进行判定，可以加快CPU运算效率
            return false;
        }
        long long y = 0;
        int z = x;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return z == y;
    }
};

int main() {
    Solution s;
    int n;
    scanf("%d", &n);
    if (s.isPalindrome(n)) {
        printf("%d 是回文数\n", n);
    } else {
        printf("%d 不是回文数\n", n);
    }
    return 0;
}