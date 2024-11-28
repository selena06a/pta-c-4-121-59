/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690633 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验5-7 使用函数输出一个实心的字符矩形
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690633
 * 
 */
// @pintia code=start
 void matrix(int length, int width, char ch){
     for(int i=0;i<width;i++){
         for(int j=0;j<length;j++){
             printf("%c", ch);
         }
         printf("\n");
     }
 }
// @pintia code=end