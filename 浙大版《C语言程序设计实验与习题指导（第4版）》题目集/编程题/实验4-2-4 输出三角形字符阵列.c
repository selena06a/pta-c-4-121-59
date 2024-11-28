/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690744 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-4 输出三角形字符阵列
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690744
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int n;
    char ch='A';
    scanf("%d", &n);

    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
// @pintia code=end