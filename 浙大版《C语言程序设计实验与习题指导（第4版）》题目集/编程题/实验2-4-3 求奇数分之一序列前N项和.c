/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690708 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-3 求奇数分之一序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690708
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);

    double sum=0;
    for(i=1;i<=2*n-1;i+=2){
        sum+=1.0/i;
    }
    printf("sum = %.6lf", sum);
    return 0;
}
// @pintia code=end