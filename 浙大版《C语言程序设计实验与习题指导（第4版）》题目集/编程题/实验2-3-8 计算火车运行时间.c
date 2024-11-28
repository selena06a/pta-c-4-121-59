/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690704 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-8 计算火车运行时间
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690704
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int start,end,hour,minute;
    scanf("%d %d", &start, &end);
    hour=end/100-start/100;
    minute=end%100-start%100;
    if(minute<0){
        hour-=1;
        minute+=60;
    }
    printf("%02d:%02d", hour, minute);
    return 0;
}

// @pintia code=end