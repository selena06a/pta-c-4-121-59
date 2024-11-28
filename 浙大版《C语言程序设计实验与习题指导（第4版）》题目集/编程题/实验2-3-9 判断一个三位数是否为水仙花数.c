/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690705 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验2-3-9 判断一个三位数是否为水仙花数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690705
 * 
 */
// @pintia code=start
#include<stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 100 || N > 999) {
        printf("Invalid Value.");
        return 0;
    }


    int hundredBit = N / 100;
    int tenBit = N / 10 % 10;
    int bit = N % 10;

    if (N == pow(hundredBit, 3) + pow(tenBit, 3) + pow(bit, 3))
        printf("Yes");
    else
        printf("No");

    return 0;
}
// @pintia code=end