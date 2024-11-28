/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690725 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-7 统计学生成绩
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690725
 * 
 */
// @pintia code=start
#include<stdio.h>
int main(){
    int n,i;
    double score;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    scanf("%d ", &n);
    for(i=0;i<n;i++){
        scanf("%lf", &score);
        if(score>=90){
            a++;
        }else if(score>=80){
            b++;
        }else if(score>=70){
            c++;
        }else if(score>=60){
            d++;
        }else{
            e++;
        }
    }
    printf ("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}
// @pintia code=end