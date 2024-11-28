/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690718 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-7 求阶乘序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690718
 * 
 */
// @pintia code=start
#include<stdio.h>

double fact(int n);

int main(){
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += fact(i);

    printf("%d", sum);

    return 0;
}

double fact(int n){
    double ans=1;
    for(int i=n;i>=1;i--){
        ans=ans*i;

        
    }return ans;
}
// @pintia code=end