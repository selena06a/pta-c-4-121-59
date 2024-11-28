/* 
 * @pintia psid=1298274031405453312 pid=1298274148753690643 compiler=GCC
 * 
 * ProblemSet: 浙大版《C语言程序设计实验与习题指导（第4版）》题目集
 * 
 * Title: 实验6-11 使用函数输出水仙花数
 * 
 * https://pintia.cn/problem-sets/1298274031405453312/exam/problems/type/6?problemSetProblemId=1298274148753690643
 * 
 */
// @pintia code=start
int narcissistic( int number ){
    int n=0;
    int temp1=0,temp2=0,temp3=0;
    temp1=temp2=temp3=number;
    while(temp1!=0){
        temp1/=10;
        n++;
    }
    int num=0;
    while(temp2){
        num+=pow(temp2%10,n);
        temp2/=10;
    }
    if(num==number){
        return 1;
    }else{
        return 0;
    }
}

void PrintN( int m, int n ){
    for(int i=m+1;i<n;i++){
        if(narcissistic(i)){
            printf("%d\n", i);
        }
    }
}
// @pintia code=end