/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690737 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-8 求给定精度的简单交错序列部分和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690737
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>

int main(){
    double eps;
    scanf("%lf", &eps);

    double sum=0,term=1;
    int sign=1;

    int i=1;
    do{
        term=sign*1.0/(3*i-2);
        sum+=term;

        sign=-sign;
        i++;
    }while(fabs(term)>eps);

    printf("sum = %.6lf", sum);
    return 0;
}
// @pintia code=end