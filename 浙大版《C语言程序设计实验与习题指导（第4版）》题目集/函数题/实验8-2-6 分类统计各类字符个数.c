/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690655 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验8-2-6 分类统计各类字符个数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690655
 * 
 */
// @pintia code=start
void StringCount( char *s )
{
    int capital = 0, minuscule = 0, blank = 0, digit = 0, other = 0;
    int i = 0;
    do
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            capital++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            minuscule++;
        else if (s[i] == ' ')
            blank++;
        else if (s[i] >= '0' && s[i] <= '9')
            digit++;
        else
            other++;
        i++;
    }while(s[i] != '\0');
    printf("%d %d %d %d %d", capital, minuscule, blank, digit, other);
}

// @pintia code=end