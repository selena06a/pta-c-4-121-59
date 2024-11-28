/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690699 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-3 计算存款利息
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690699
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main() {
    double money, year, rate, interest;

    // 读取用户输入
    scanf("%lf", &money);
    scanf("%lf", &year);
    scanf("%lf", &rate);

    interest = money * pow(1.0 + rate, year) - money;

    // 输出结果
    printf("interest = %.2lf\n", interest);

    return 0;
}
// @pintia code=end