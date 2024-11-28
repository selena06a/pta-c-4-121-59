/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690721 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-3 比较大小
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690721
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    int a, b, c;

    int temp;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d->%d->%d", a, b, c);

    return 0;
}
// @pintia code=end