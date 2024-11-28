/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690728 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-10 计算油费
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690728
 * 
 */
// @pintia code=start
#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);

    double payment;

    if(b==90){
        payment=6.95*a;
    }else if(b==93){
        payment=7.44*a;
    }else{
        payment=7.93*a;
    }

    if('m'==c){
        payment*=0.95;
    }else{
        payment*=0.97;
    }
    printf("%.2lf", payment);
    return 0;
}
// @pintia code=end