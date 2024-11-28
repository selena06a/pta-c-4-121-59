/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690745 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-5 输出整数各位数字
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690745
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>

int countBits(int N);

int main() {
    int number;
    scanf("%d", &number);

    int bits = countBits(number);

    for (int i = bits - 1; i >= 0; i--) {
        int item = number / (int) pow(10, i);
        printf("%d ", item);
        number = number % (int) pow(10, i);
    }

    return 0;
}

int countBits(int N) {
    int count = 0;

    do {
        count++;
        N /= 10;
    } while (N != 0);

    return count;
}
// @pintia code=end