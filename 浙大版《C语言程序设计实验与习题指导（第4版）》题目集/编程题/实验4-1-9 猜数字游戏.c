/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690738 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验4-1-9 猜数字游戏
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/7?problemSetProblemId=1298274148753690738
 * 
 */
// @pintia code=start
#include<stdio.h>

int main(){
    int i,m,n,guess_num;
    int flag=0;
    scanf("%d %d", &m,&n);

    for(i=1;i<=n;i++){
        scanf("%d", &guess_num);

        if(guess_num<0){
            break;
        }
        
            if(guess_num>m){
                printf("Too big\n");
            }else if(guess_num>0&&guess_num<m){
                printf("Too small\n");
            }else if(guess_num==m){
                flag=1;
                if(i==1){
                    printf("Bingo!\n");
                    break;
                }else if(i==2||i==3){
                    printf("Lucky You!\n");
                    break;
                }else{
                    printf("Good Guess!\n");
                    break;
                }
            }
        }
        if(flag==0){
            printf("Game Over");
        }
        return 0;
    }

// @pintia code=end