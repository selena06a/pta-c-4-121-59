/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690756 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验7-1-2 将数组中的数逆序存放
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690756
 * 
 */
// @pintia code=start
#include<stdio.h>

#define MAXN 10

int main(){
    int n, i;
    int a[MAXN];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = n-1; i >= 0; i--){
        if(i!=0){
            printf("%d ", a[i]);
        }else{
            printf("%d", a[i]);
        }
    }
    return 0;
}
// @pintia code=end