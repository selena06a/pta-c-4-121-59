/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690730 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-1 统计数字字符和空格
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690730
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int blank=0,digit=0,other=0;
    char op;

    while(scanf("%c", &op)&&op!='\n'){
        switch(op){
            case ' ':
                blank++;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digit++;
                break;
            default:
                other++;
                break;
        }
    }
    printf("blank = %d, digit = %d, other = %d", blank,digit,other);
    return 0;
}

// @pintia code=end