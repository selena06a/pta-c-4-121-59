/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690735 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-6 求分数序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690735
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    double a=2,b=1;
    double sum=0;

    for(int i=0;i<n;i++){
        sum+=a/b;

        double temp=b;
        b=a;
        a+=temp;
    }
    printf("%.2f", sum);

    return 0;
}
// @pintia code=end