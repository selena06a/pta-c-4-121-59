/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690634 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-8 使用函数求圆台体积
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690634
 * 
 */
// @pintia code=start
double volume_tc(double r_lower, double r_upper, double h){
    double v,v1;

    v1=PI*h*(r_lower*r_lower+r_lower*r_upper+r_upper*r_upper);
    v=v1/3.0;
    return v;
}
// @pintia code=end