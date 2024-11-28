/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690739 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-10 兔子繁衍问题
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690739
 * 
 */
// @pintia code=start
#include<stdio.h>
int main()
{	
	int x1=1;//x1是第一天兔子的数量 
	int x2=1;//x2是第二天兔子的数量 
	int x;//x是兔子的总数  
	int N;
	int i=2; 
	scanf("%d",&N);
	if(N==1){
		//如果兔子的总数是一的话，最少需要一个月就行
		printf("1");
	}else{
	while(x<N&&N>1){
		x=x1+x2;
		x1=x2;
		x2=x;
		i++;
	} 
	printf("%d",i);
}
 
 
	return 0;
 } 
// @pintia code=end