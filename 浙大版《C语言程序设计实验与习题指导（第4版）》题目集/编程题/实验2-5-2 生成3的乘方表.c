/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690714 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-2 生成3的乘方表
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690714
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double pow1;
    scanf("%d", &n);

    for(int i=0;i<=n;i++){
        pow1=pow(3,i);
        printf("pow(3,%d) = %.0f",i, pow1);

                if (i != n)
            printf("\n");
    }
    return 0;
}

// @pintia code=end