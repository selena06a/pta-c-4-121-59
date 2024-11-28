/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690741 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-12 黑洞数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690741
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int n,a,b,c,t,cnt=0,n1,n2;
    scanf("%d", &n);
    
    if(n==495){
        printf("1: 954 - 459 = 495\n");
    }else{
        while(n!=495){
            cnt++;
            
            a=n%10;
            b=n/10%10;
            c=n/100;

            if(a>b){t=a;a=b;b=t;}
            if(a>c){t=a;a=c;c=t;}
            if(b>c){t=b;b=c;c=t;}

            n1=c*100+b*10+a;
            n2=a*100+b*10+c;
            n=n1-n2;

            printf("%d: %d - %d = %d\n", cnt, n1,n2,n);
        }
    }
    return 0;
}
// @pintia code=end