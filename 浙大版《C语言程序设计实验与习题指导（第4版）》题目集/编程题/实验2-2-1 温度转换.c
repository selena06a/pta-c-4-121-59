/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690690 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-2-1 温度转换
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690690
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int c;
    int f=150;
    
    c=5*(f-32)/9;
    printf("fahr = 150, celsius = %d", c);
    return 0;
}
// @pintia code=end