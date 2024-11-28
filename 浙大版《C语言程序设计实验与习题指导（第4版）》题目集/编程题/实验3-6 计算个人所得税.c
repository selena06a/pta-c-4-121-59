/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690724 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-6 计算个人所得税
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690724
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>

int main(){
    double salary;
    scanf("%lf", &salary);

    double rate;

    if(salary <=1600){
        rate=0;
    }else if(salary<=2500){
        rate=0.05;
    }else if (salary<=3500){
        rate=0.1;
    }else if (salary<=4500){
        rate=0.15;
    }else{
        rate=0.2;
    }
    printf("%.2lf",fabs(rate * (salary - 1600)));

    return 0;
}
// @pintia code=end