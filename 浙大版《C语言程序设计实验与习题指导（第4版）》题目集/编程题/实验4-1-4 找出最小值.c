/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690733 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-4 找出最小值
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690733
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);  // 读取用户输入的第一个整数 n，表示接下来要输入的整数个数

    int min = INT_MAX;  // 初始化最小值为 INT_MAX，即整型的最大值
    int number;         // 定义一个变量 number 用于存储每次读取的整数

    for (int i = 0; i < n; i++) {  // 循环 n 次，读取 n 个整数
        scanf("%d", &number);  // 每次读取一个整数并存储到 number 变量中

        if (number < min)  // 如果读取的整数比当前的最小值还要小
            min = number;  // 更新最小值为当前读取的整数
    }

    printf("min = %d", min);  // 输出最小值

    return 0;  // 程序结束，返回 0 表示成功
}
// @pintia code=end