#ifdef __cplusplus
#include <iostream>
#include <cstring>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    char buf[1024];
    gets(buf);
    char c = getchar();
    int i = 0;
    puts(buf);
    while (buf[i] != '\0')
    {
        if(buf[i] != c){
            putchar(buf[i]);
        }
        i++;
    }
    putchar('\0');
}