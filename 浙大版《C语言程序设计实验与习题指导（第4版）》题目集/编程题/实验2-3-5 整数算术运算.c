/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690701 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-5 整数算术运算
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690701
 * 
 */
// @pintia code=start
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,a/b);
    c=a%b;
printf("%d %% %d = %d\n",a,b,c);
return 0;
}

// @pintia code=end