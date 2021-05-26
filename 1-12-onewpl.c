#include <stdio.h>
#define True 1
#define False 0
int main(int argc, char const *argv[])
{
    int c, state;
    state = False;
    while((c = getchar()) != EOF){
        if(c == '\n' || c == '\t' || c == ' '){
            if(state == False){
                putchar('\n');
                state = True;
            }
        } else
        {
            state = False;
            putchar(c);
        }
        
    }
    return 0;
}
