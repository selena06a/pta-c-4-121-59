/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690732 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-3 求整数的位数及各位数字之和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690732
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int count=0,sum=0;
    while(N!=0){
        count++;
        sum+=N%10;
        N/=10;
    }

    printf("%d %d", count, sum);

    return 0;
}
// @pintia code=end