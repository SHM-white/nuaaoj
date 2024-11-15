#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    char str1[256];
    char str2[256];
    gets(str1);
    gets(str2);
    if(strlen(str1) != strlen(str2)){
        puts("1");
        return 0;
    }
    
    int equal = 1;
    for (size_t i = 0; i < strlen(str1); i++)
    {
        equal &= str1[i] == str2[i];
    }
    if(equal){
        puts("2");
        return 0;
    }
    equal = 1;
    for (size_t i = 0; i < strlen(str1); i++)
    {
        equal &= tolower(str1[i]) == tolower(str2[i]);
    }
    if(equal){
        puts("3");
        return 0;
    }
    puts("4");
    return 0;
}