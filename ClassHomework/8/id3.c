#include <stdio.h>
void printStr(char* c){
    if(*c == '\0'){
        return;
    }
    printStr(c + 1);
    putchar(*c);
}
int main(){
    char text[1280];
    gets(text);
    printStr(text);
}