/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690719 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-1 统计MOOC证书
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690719
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    int N;;
    scanf("%d", &N);

    int grade, excellence = 0, pass = 0, fail = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &grade);

        if (grade >= 85)
            excellence++;
        else if (grade >= 60)
            pass++;
        else
            fail++;
    }

    printf("%d %d %d", excellence, pass, fail);

    return 0;
}
// @pintia code=end