/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690694 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-2-5 将x的平方赋值给y
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690694
 * 
 */
// @pintia code=start
#include <stdio.h>
 
int main() {
	int x=3, y;
	y = x * x;
	printf("%d = %d * %d\n", y, x, x);
	printf("%d * %d = %d\n", x, x, y);
		
	return 0;
}
// @pintia code=end