/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690710 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-4-5 输出华氏-摄氏温度转换表
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690710
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{
    int lower,upper;
    scanf("%d %d", &lower,&upper);

    
    if (lower > upper)
        printf("Invalid.");
    else {
        printf("fahr celsius\n");

        for (int i = lower; i <= upper; i += 2) {
            printf("%d%6.1f", i, 5.0 * (i - 32) / 9);

            if (i + 2 <= upper)
                printf("\n");
        }
    }

    return 0;

}
// @pintia code=end