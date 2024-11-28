/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690697 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-1 计算分段函数[1]
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690697
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    double x;
    double y;
    scanf("%lf",&x);
    if(x!=0)
    {
        y=1/x;
    }
    else
    {
        y=0;
    }
    printf("f(%.1f) = %.1f",x,y);
    return 0;
}
// @pintia code=end