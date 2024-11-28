/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690635 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-9 使用函数求余弦函数的近似值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690635
 * 
 */
// @pintia code=start
double funcos( double e, double x ){
    int flag=1;
    double sum=1;
    double fact=1;
    double item=0;
    for(int i=1;;i++){
        fact*=i;
        if(i%2==0){
            flag=-flag;
            item=pow(x,i)/fact;
            sum+=item*flag;
            if(item<e){
                break;
            }
        }
    }
    return sum;
}
// @pintia code=end