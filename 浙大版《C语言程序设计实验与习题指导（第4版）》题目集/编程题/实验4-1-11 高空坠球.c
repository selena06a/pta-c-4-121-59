/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690740 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-11 高空坠球
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690740
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int h,n;
    scanf("%d %d", &h, &n);

    if(0==n){
        printf("0.0 0.0");
        return 0;
    }

    double s=0,temp=h;

    for(int i=0;i<n;i++){
        s+=temp;

        if(i==0){
            temp=h;
        }else{
            temp/=2;
        }
    }
    printf("%.1f %.1f", s, temp/2);
    return 0;
}
// @pintia code=end