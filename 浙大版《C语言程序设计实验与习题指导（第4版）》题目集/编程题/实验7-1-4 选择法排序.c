/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690758 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验7-1-4 选择法排序
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690758
 * 
 */
// @pintia code=start
#include<stdio.h>
#define MAXN 10
int main(){
    int n,i,index,k,temp;
    int a[MAXN];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(k = 0; k < n-1; k++){
        index=k;
        for(i=k+1;i<n;i++){
            if(a[i] > a[index]){
                index = i;
            }
        }
        temp = a[index];
        a[index] = a[k];
        a[k] = temp;
    }

    for(i = 0; i < n; i++){
        if(i==(n-1)){
            printf("%d", a[i]);
        }else{
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    
    
    return 0;
}
// @pintia code=end