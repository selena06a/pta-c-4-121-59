/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690624 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-5-1 求排列数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690624
 * 
 */
// @pintia code=start
double fact(int n){
    double num=1;
    for(int i=1;i<=n;i++){
        num*=i;
    }
    return num;
}
// @pintia code=end