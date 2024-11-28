/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690713 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-8 找出三位水仙花数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690713
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>

int main(){
    int m,n,digit1,digit2,digit3;
    scanf("%d %d", &m,&n);

    if(m<100||m>n||n>999){
        printf("Invalid Value.\n");
        return 0;
    }

    for(int i=m;i<=n;i++){
        digit1=i/100;
        digit3=i%10;
        digit2=(i%100-digit3)/10;

        if(i==pow(digit1,3)+pow(digit2,3)+pow(digit3,3)){
            printf("%d\n", i);
        }
    }
    return 0;
}
// @pintia code=end