/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690760 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验7-1-6 求一批整数中出现最多的个位数字
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690760
 * 
 */
// @pintia code=start
#include<stdio.h>
#define MAXN 10
int main(){
    int n;
    scanf("%d", &n);
    int count[MAXN]={0};
    int num=0;
    for(int i=0;i<n;i++){
        scanf("%d", &num);
        if(num==0){
            count[0]++;
        }else{
            while(num>0){
                count[num%10]++;
                num/=10;
            }
        }
    }
    int max=count[0];
    for(int i=1;i<MAXN;i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    printf("%d:",max);
    for(int i=0;i<MAXN;i++){
        if(count[i]==max){
            printf(" %d", i);
        }
    }
    return 0;
}
// @pintia code=end