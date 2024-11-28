/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690723 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验3-5 查询水果价格
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690723
 * 
 */
// @pintia code=start
#include<stdio.h>

int main() {
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n"
    );

    int a, k;
    for (a = 0; a <= 4; a++) {
        scanf("%d", &k);
        if (k == 0) {
            break;
        }
        switch (k) {
            case 1:
                printf("price = 3.00\n");
                break;
            case 2:
                printf("price = 2.50\n");
                break;
            case 3:
                printf("price = 4.10\n");
                break;
            case 4:
                printf("price = 10.20\n");
                break;
            default:
                printf("price = 0.00\n");
                break;
        }
    }

    return 0;
}
// @pintia code=end