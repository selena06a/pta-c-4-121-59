/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690727 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-9 三天打鱼两天晒网
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690727
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 5 >= 1 && N % 5 <= 3)
        printf("Fishing in day %d", N);
    else
        printf("Drying in day %d", N);

    return 0;
}
// @pintia code=end