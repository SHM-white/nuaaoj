#include <stdio.h>
int main(){
    char a, b;
    scanf("%c",&a);
    if(a >= 'a' && a <= 'z'){
        b = a + 5;
        if (b > 'z'){
            b -= ('z' - 'a' + 1);
        }
    }
    else if (a >= 'A' && a <= 'Z')
    {
    b = a + 5;
        if (b > 'z'){
            b -= ('Z' - 'A' + 1);
        }
    }
    putchar(b);
}