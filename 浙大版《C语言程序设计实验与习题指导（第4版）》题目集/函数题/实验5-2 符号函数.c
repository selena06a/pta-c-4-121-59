/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690628 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-2 符号函数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690628
 * 
 */
// @pintia code=start
int sign( int x ){
    int sign1;
    if(x>0){
        sign1=1;
    }else if(x==0){
        sign1=0;
    }else{
        sign1=-1;
    }
    return sign1;
}
// @pintia code=end