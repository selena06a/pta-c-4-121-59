/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690682 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验1-2 简单求阶乘问题
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690682
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int n;
    int m=1;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        m=m*i;
    }
    printf("%d", m);
    return 0;
}
// @pintia code=end