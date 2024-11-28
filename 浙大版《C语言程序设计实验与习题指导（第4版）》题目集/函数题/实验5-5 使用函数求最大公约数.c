/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690631 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-5 使用函数求最大公约数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690631
 * 
 */
// @pintia code=start
int gcd(int m,int n){
    int r,temp;

    if(m<n){
        temp=m;
        m=n;
        n=temp;
    }

    r=m%n;
    while(r!=0){
        m=n;
        n=r;
        r=m%n;
    }

    return n;
}
// @pintia code=end