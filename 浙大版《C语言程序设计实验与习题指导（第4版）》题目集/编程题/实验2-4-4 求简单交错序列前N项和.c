/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690709 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-4 求简单交错序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690709
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int i,n,flag;
    double sum=0;
    scanf("%d", &n);
    flag=1;
    for(i=1;i<=n;i++){
        sum+=flag*1.0/(3*i-2);
        flag=-flag;
    }
    printf("sum = %.3lf", sum);
    return 0;
}
// @pintia code=end