/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690703 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-7 阶梯电价
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690703
 * 
 */
// @pintia code=start
#include<stdio.h>
int main(){
int a;
double b;
scanf("%d",&a);
if(0<=a&&a<=50){
    b=0.53*a;
    printf("cost = %.2lf",b);
}
    else if(a>50){
    b=0.53*50+(a-50)*0.58;
    printf("cost = %.2lf",b);
}
 
else{
    printf("Invalid Value!");
}
    return 0;
}

// @pintia code=end