/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690746 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-2-6 梅森数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690746
 * 
 */
// @pintia code=start
#include <stdio.h>
#include <math.h>

int isPrime(int N);

int main() {
    int flag = 0, n;
    scanf("%d", &n);

    if (1 == n) {
        printf("None");
        return 0;
    }

    int index = 2, number = pow(2, index) - 1;

    do {
        if (isPrime(number)) {
            printf("%d\n", number);
            flag = 1;
        }

        index++;
        number = pow(2, index) - 1;
    } while (number <= (pow(2, n) - 1));

    return 0;
}

int isPrime(int N) {
    int is_prime, limit;

    if (N <= 1)
        is_prime = 0;
    else if (2 == N)
        is_prime = 1;
    else if (N % 2 == 0)
        is_prime = 0;
    else {
        is_prime = 1;
        limit = sqrt(N) + 1;

        for (int i = 3; i <= limit; i += 2) {
            if (0 == N % i) {
                is_prime = 0;
                break;
            }
        }
    }

    return is_prime;
}
// @pintia code=end