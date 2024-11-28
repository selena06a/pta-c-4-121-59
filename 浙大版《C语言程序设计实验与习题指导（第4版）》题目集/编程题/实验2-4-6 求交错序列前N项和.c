/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690711 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-6 求交错序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690711
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0;
    int flag = 1;

    for (int i = 1; i <= N; i++) {
        sum += flag * i / (2.0 * i - 1);
        flag = -flag;
    }

    printf("%.3lf", sum);

    return 0;
}
// @pintia code=end