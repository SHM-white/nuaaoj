#include <stdio.h>
int main(){
    char text[255];
    gets(text);
    int index = 0;
    while (text[index] != '\0')
    {
        if(text[index]<='z' && text[index] >= 'a'){
            text[index] += 4;
            if(text[index] > 'z'){
                text[index] = text[index] - 'z' + 'a' - 1;
            }
        }
        if(text[index]<='Z' && text[index] >= 'A'){
            text[index] += 4;
            if(text[index] > 'Z'){
                text[index] = text[index] - 'Z' + 'A' - 1;
            }
        }
        index++;
    }
    puts(text);
}