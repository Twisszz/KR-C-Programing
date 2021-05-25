/*
统计输入中空格、制表符、换行符的个数
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == ' '){
            n1++;
        }
        else if(c == '\t'){
            n2++;
        }
        else if(c == '\n'){
            n3++;
        }
    }
    printf("n1: %d\nn2: %d\nn3: %d", n1, n2, n3);
    return 0;
}
