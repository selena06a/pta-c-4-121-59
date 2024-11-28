/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690755 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验7-1-1 简化的插入排序
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690755
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int N,x,i,flag=1;
    int A[10];
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    scanf("%d", &x);

    for(i=0;i<N;i++){
        if(flag&&x<A[i]){
            printf("%d ", x);
            flag=0;
        }
        printf("%d ",A[i]);
    }

    if(flag){
        printf("%d ", x);
    }
    return 0;
}
// @pintia code=end