/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690750 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-1 近似求PI
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690750
 * 
 */
// @pintia code=start
#include <stdio.h>
int main()
{
double eps;
scanf("%le", &eps);
double sum=1;
double temp=1;
for(int i=1;temp>eps;i++)
{
temp = temp*i/(2*i+1);
sum += temp;
}
printf("PI = %.5f\n", 2*sum);
return 0;
}
// @pintia code=end