/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690632 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-6 使用函数求素数和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690632
 * 
 */
// @pintia code=start
int prime( int p ){
    int isPrime;
    if(p<2){
        isPrime=0;
    }else if(p==2){
        isPrime=1;
    }else{
    for(int i=2;i<p;i++){
        if(p%i==0){
            isPrime=0;
            break;
        }
        isPrime=1;
        }
    }

    return isPrime;
}

int PrimeSum( int m, int n ){
    int sum=0;
    
    for(int i=m;i<=n;i++){
        if(prime(i)){
            sum+=i;
        }
    }
    return sum;
}
// @pintia code=end