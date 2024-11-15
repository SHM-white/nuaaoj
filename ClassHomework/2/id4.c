#include <stdio.h>
int main(){
    char in;
    char out;
    scanf("%c", &in);
    if(in >= 'a' && in <= 'z'){
        out = 'A' + (in - 'a');
    }
    else if (in >= 'A' && in <= 'Z')
    {
        out = 'a' + (in - 'A');
    }
    else{
        out = in;
    }
    putchar(out);
}