/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690638 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-3 使用函数求特殊a串数列和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690638
 * 
 */
// @pintia code=start
int fn( int a, int n ){
    int fn=0;
    for(int i=1;i<=n;i++){
        fn=fn*10+a;
    }
    return fn;
}

int SumA( int a, int n ){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=fn(a,i);
    }
    return sum;
}
// @pintia code=end