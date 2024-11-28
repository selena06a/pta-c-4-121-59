/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690752 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-4 单词首字母大写
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690752
 * 
 */
// @pintia code=start
#include <stdio.h>

int main() {
    int word = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch == ' ')
            word = 0;

        else if (0 == word) {
            word = 1;

            if (ch >= 'a' && ch <= 'z')
                ch = ch - 'a' + 'A';
        }

        // 空格照样输出
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}
// @pintia code=end