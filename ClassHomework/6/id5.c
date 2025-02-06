#include <stdio.h>
int main(){
    char text[128];
    gets(text);
    for (size_t i = 0; i < 128; i++)
    {
        if(text[i]=='\0'){
            printf("%d", i);
            break;
        }
    }
    
}