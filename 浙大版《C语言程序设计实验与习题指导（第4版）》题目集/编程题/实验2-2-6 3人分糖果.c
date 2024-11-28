/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690695 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-2-6 3人分糖果
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690695
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;

    a=8;
    b=9;
    c=10;

    d=a/3;a=d;b=a+b;c=a+b;
    e=b/3;b=e;a=a+b;c=b+c;
    f=c/3;c=f;a=a+c;b=b+c;
    printf("%d %d %d\n", a,b,c);
    return 0;
}
// @pintia code=end