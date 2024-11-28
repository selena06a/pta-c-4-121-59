/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690757 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验7-1-3 求最大值及其下标
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690757
 * 
 */
// @pintia code=start
#include<stdio.h>
#define MAXN 10
int main(){
    int i, index, n;
    int a[MAXN];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    index = 0;
    for(i = 0; i < n; i++){
        if(a[i] > a[index]){
            index = i;
        }
    }
    printf("%d %d", a[index], index);
    
    return 0;
}
// @pintia code=end