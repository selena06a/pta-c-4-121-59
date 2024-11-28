/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690717 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-6 求幂之和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690717
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int sum=0;
    scanf("%d", &n);
        sum=pow(2,n+1)-2;
    printf("result = %d\n", sum );
    return 0;
}
// @pintia code=end