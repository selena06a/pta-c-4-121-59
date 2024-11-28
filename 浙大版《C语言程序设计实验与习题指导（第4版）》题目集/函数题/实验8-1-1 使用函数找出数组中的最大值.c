/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690644 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验8-1-1 使用函数找出数组中的最大值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690644
 * 
 */
// @pintia code=start
int FindArrayMax( int a[], int n ){
    int max=a[0];
    for(int j=1;j<n;j++){
        if (a[j]>max){
            max=a[j];
        }
    }
    return max;
}
// @pintia code=end