/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690706 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-1 求1到N的和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690706
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int i,j,sum;
    scanf("%d", &j);
    sum=0;
    for(i=1;i<=j;i++){
        sum+=i;
    }
    printf("sum = %d\n", sum);
    return 0;
}
// @pintia code=end