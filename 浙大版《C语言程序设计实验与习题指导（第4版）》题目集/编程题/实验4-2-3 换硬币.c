/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690743 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-3 换硬币
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690743
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int money,n5,n2,n1;

    scanf("%d", &money);

    int count=0;

    for(n5=money/5;n5>=1;n5--){
        for(n2=(money-n5*5)/2;n2>=1;n2--){
            for(n1=(money-n5*5-n2*2)/1;n1>=1;n1--){
                if(n5*5+n2*2+n1*1==money){
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", n5,n2,n1,n5+n2+n1);
                    count++;
                }
            }
        }
    }
    
    printf("count = %d", count);

    return 0;
}
// @pintia code=end