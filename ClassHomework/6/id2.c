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
    char result[1024];
    strcpy(result, buf);
    int i = 0;
    while (buf[i] != '\0')
    {
        result[strlen(buf) - i - 1] = buf[i];
        i++;
    }
    puts(result);
}