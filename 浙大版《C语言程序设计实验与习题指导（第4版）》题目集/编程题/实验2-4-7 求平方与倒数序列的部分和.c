/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690712 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-7 求平方与倒数序列的部分和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690712
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    double sum=0;
    while(m<=n){
        sum+=pow(m,2)+pow(m,-1);
        m++;
    }
    printf("sum = %6lf", sum);
    return 0;
}
// @pintia code=end