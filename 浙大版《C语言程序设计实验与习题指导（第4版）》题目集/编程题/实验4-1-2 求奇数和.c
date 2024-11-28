/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690731 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-2 求奇数和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690731
 * 
 */
// @pintia code=start
#include<stdio.h>

int isodd(int n);

int main(){
    int sum=0,number;
    while(scanf("%d", &number)&&number>0){
        if(isodd(number))
            sum+=number;
    }
    printf("%d", sum);
    return 0;
}

int isodd(int n){
    if(n%2==1){
        return 1;
    }else{
        return 0;
    }
}
// @pintia code=end