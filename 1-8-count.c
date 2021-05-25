/*@FileName 1-8-count.c
 *@Author   BugStar
 *@Date     2021/05/25
 *
 *这是一个统计输入中空格、制表符与换行符个数的程序.
 *
 *定义一个变量存放输入，三个变量存放空格、制表符、换行符个数.
 *while实现多次循环，if、else if执行多重路径.  
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            c1++;
        }
        else if(c == '\t'){
            c2++;
        }
        else if(c == '\n'){
            c3++;
        }
    }
    printf("c1: %d\nc2: %d\nc3: %d", c1, c2, c3);
    return 0;
}
