/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690726 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-8 输出三角形面积和周长
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690726
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        printf("These sides do not correspond to a valid triangle");

    else {
        double p = a + b + c;
        double area = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
        printf("area = %.2lf; perimeter = %.2lf", area, p);
    }

    return 0;
}
// @pintia code=end