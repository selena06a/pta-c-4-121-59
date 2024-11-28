/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690736 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-7 特殊a串数列求和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690736
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int a,n,num;
    double sum=0;
    scanf("%d %d", &a, &n);

    for(int i=1;i<=n;i++){
        num=num*10+a;
        sum+=num;
    }

    printf("s = %.0lf\n", sum);

    return 0;
}
// @pintia code=end