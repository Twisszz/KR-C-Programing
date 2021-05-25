/*
 *@FileName: 1-9-copy.c
 *@Author:   BugStar
 *@Date:     2021/05/25
 *
 * 将输入复制到输出,并将多个连续空格转化为一个空格.
 * 
 * 设置两个常量判断空格数量的变量.
 * 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c,prevBlank;
    #define Ture 1
    #define False 0
    prevBlank = False;
    while((c = getchar()) != EOF){
        if(c == ' '){
            if(prevBlank == False){
                putchar(c);
                prevBlank = Ture;
            }
        }
        if(c != ' '){
                putchar(c);
                prevBlank = False;
            }
            
    }
    return 0;
}
