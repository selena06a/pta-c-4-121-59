/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690715 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-3 求平方根序列前N项和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690715
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double sum=0;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum+=sqrt(i);
    }
    printf("sum = %.2lf", sum);
    return 0;
}
// @pintia code=end