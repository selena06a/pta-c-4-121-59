/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690640 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-7 使用函数输出一个整数的逆序数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690640
 * 
 */
// @pintia code=start
int reverse( int number ){
    int reverse_num=0;
    while(number){
        reverse_num=reverse_num*10+number%10;
        number/=10;
    }
    return reverse_num;
}
// @pintia code=end