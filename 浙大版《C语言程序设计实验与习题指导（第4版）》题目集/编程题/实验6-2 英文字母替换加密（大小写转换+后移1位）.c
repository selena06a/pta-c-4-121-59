/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690751 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-2 英文字母替换加密（大小写转换+后移1位）
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690751
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A') + 1;

            // 加密后范围超过了Z
            if (ch > 'Z')
                ch = 'A';

        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A') + 1;

            // 加密后范围超过了z
            if (ch > 'z')
                ch = 'a';
        }

        putchar(ch);
    }

    return 0;
}
// @pintia code=end