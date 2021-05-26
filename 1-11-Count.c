/*
 *@FileName: 1-11-count.c
 *@Author:   BugStar
 * @Date:    2021/05/26
 * 
 * A program to count the numble of words.
 * 
 * 设置一个状态变量检测输入是否为空格、制表符、换行符
*/
#include <stdio.h>
#define IN 1
#define OUT 0
int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == '\n' || c == '\t' || c == ' '){
            state = OUT;
        }
        else if(state == OUT){
            ++nw;
            state = IN;
        }
    }
    printf("nl: %d\nnw: %d\nnc: %d", nl, nw, nc);
    return 0;
}
