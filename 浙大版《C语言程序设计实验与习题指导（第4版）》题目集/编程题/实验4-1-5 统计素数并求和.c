/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690734 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-5 统计素数并求和
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690734
 * 
 */
// @pintia code=start
#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(){
    int m,n,num=0,sum=0;
    scanf("%d %d", &m, &n);

    for(int i=m;i<=n;i++){
        if(isPrime(i)){
            num++;
            sum+=i;
        }
    }
    printf("%d %d", num,sum);
    return 0;
}


int isPrime(int n) {
    int limit, i;

    if (n <= 1)
        return 0;
    else if (2 == n)
        return 1;
    else {
        limit = sqrt(n) + 1;

        for (i = 2; i <= limit; i++) {
            if (0 == n % i)
                break;
        }
        if(i>limit){
            return 1;
        }
    }



    return 0;
}


// @pintia code=end