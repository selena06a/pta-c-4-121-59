/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690627 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-1 使用函数计算两点间的距离
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690627
 * 
 */
// @pintia code=start
double dist( double x1, double y1, double x2, double y2 ){
    double x,y,distance;
    x=pow((x1-x2),2);
    y=pow((y1-y2),2);
    distance=sqrt(x+y);
    return distance;
}
// @pintia code=end