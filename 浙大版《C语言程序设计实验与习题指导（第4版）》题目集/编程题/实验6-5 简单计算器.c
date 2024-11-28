/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690753 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-5 简单计算器
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690753
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    char op;
    int num1,num2,res;

    scanf("%d", &num1);
    res=num1;
    op=getchar();

    while(op!='='){
        scanf("%d", &num2);

        switch(op){
                case '+':
                    res=num1+num2;
                    break;
                case '-':
                    res=num1-num2;
                    break;
                case '*':
                    res=num1*num2;
                    break;
                case '/':
                    if(num2==0){
                        printf("ERROR\n");
                        return 0;
                    }else{
                        res=num1/num2;
                    }
                    break;
                default:
                    printf("ERROR\n");
                    return 0;
        }
        num1=res;

        op=getchar();
    }

    printf("%d\n", res);

    return 0;
}

// @pintia code=end