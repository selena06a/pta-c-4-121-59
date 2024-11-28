/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690716 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-4 求组合数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690716
 * 
 */
// @pintia code=start
#include<stdio.h>

double fact(int n);

int main(){
    int m,n;
    double result;
    scanf("%d %d", &m,&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf", result);
    return 0;
}

double fact(int n){
    double ans=1.0;

    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return  ans;
}

// @pintia code=end