/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690630 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-4 输出每个月的天数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690630
 * 
 */
// @pintia code=start
int  MonthDays(int year, int month)
{
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        if(year%400==0||(year%4==0&&year%100!=0))
            return 29;
        else
            return 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    }
}

// @pintia code=end