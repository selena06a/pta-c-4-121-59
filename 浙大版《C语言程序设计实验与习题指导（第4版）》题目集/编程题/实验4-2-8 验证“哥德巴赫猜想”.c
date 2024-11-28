/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690748 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-8 验证“哥德巴赫猜想”
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690748
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>

int prime(int p);

void Goldbach(int n);

int main() {
    int N;
    scanf("%d", &N);

    Goldbach(N);

    return 0;
}



int prime(int p) {
    int i, limit;

    if (p <= 1)
        return 0;
    else if (2 == p)
        return 1;
    else {
        limit = sqrt(p) + 1;

        for (i = 2; i <= limit; i++) {
            if (0 == p % i)
                return 0;
        }
    }

    return 1;
}

void Goldbach(int n) {
    int j;
    for (int i = 2;; i++) {
        if (prime(i))
            j = n - i;

        if (i <= j && prime(j)) {
            printf("%d = %d + %d", n, i, j);
            return;
        }
    }
}

// @pintia code=end