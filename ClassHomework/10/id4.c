#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    char text[10240];
    gets(text);
    int a, b;
    scanf("%d %d", &a, &b);
    char *text2 = &(text[a - 1]);
    text2[b] = '\0';
    puts(text2);
}