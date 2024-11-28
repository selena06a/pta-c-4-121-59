/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690722 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-4 统计字符[2]
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690722
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    getchar();
    
    char ch;
    int letter=0,blank=0,digit=0,other=0;

    for(int i=0;i<n;i++){
        scanf("%c", &ch);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            letter++;
        else if (ch == ' ' || ch == '\n')
            blank++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            other++;
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}
// @pintia code=end