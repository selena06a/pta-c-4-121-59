/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690629 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-3 使用函数求Fibonacci数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690629
 * 
 */
// @pintia code=start
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        int temp1 = 1, temp2 = 1;
        int ret;
        while (n - 2)
        {
            ret = temp1 + temp2;
            temp1 = temp2;
            temp2 = ret;
            n--;
        }
        return ret;
    }
}
// @pintia code=end