/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690626 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-2 使用函数求e的近似值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690626
 * 
 */
// @pintia code=start
double fact( int n ){
    double fact1=1;
    for(int i=1;i<=n;i++){
        fact1*=i;
    }
    return fact1;
}
// @pintia code=end