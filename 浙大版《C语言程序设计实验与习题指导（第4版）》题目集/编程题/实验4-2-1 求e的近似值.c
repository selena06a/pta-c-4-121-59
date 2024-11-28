/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690742 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-1 求e的近似值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690742
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    double e=1.0;
    double jc=1.0;
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        jc*=i;
        e+=1.0/jc;
    }
    printf("%.8lf", e);
    return 0;
}
// @pintia code=end