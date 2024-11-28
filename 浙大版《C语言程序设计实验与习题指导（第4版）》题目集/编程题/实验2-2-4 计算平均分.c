/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690693 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-2-4 计算平均分
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690693
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int math = 87, eng = 72, comp = 93;
    int average;
    average=(math+eng+comp)/3;
    printf("math = 87, eng = 72, comp = 93, average = %d", average);
    return 0;
}
// @pintia code=end