/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690698 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-2 计算摄氏温度
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690698
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int c,f;

    scanf("%d", &f);

    c=5*(f-32)/9;

    printf("Celsius = %d\n", c);

    return 0;
}
// @pintia code=end