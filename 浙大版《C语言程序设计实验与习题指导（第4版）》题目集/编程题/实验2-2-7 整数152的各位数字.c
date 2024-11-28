/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690696 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-2-7 整数152的各位数字
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690696
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int a,b,c;
    a = 152%10;
    c = 152%100;
    b = 152/10%10;
    printf("152 = %d + %d*10 + %d*100", a,b,c);
    return 0;
}

// @pintia code=end