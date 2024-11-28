/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690720 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-2 计算符号函数的值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690720
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d", &n);
    if(n<0){
        y=-1;
    }else if(n==0){
        y=0;
    }else{
        y=1;
    }
    printf("sign(%d) = %d", n, y);
    return 0;
}
// @pintia code=end