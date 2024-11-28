/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690700 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-4 计算分段函数[2]
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690700
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>
int main(){
double x,result;
scanf("%lf",&x);
if(x>=0){
    result=sqrt(x);
}
else{
    result=pow(x+1,2)+2*x+1/x;
    }
printf("f(%.2f) = %.2f",x,result);
    return 0;
}

// @pintia code=end