/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690749 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-9 水仙花数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690749
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>
 
int poww(int a,int b);//函数声明
 
int main(int argc, char *argv[]) {

int N,sum,a,b;
scanf("%d",&N);
int min=poww(10,N-1);
int max=poww(10,N);

for(int i=min;i<max;i++)
{
sum=0;
b=i;//这个需要保存i的值后面用来做判断用，所以不直接操作i的值。
while(b!=0)
{
a=b%10;
sum=sum+poww(a,N);
b=b/10;
}

if(sum==i)
{
printf("%d\n",i);
}

}
return 0;

}
 
int poww(int a,int b){
int sum=1;
for(int i=0;i<b;i++)
{
sum=sum*a;
}
return sum;

}
// @pintia code=end