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
char toLower(char in){
    if(in >= 'A' && in <= 'Z'){
        return 'a' + (in - 'A');
    }
    return in;
}

int main()
{
    char text[10240];
    char c = getchar();
    int index = 0;
    while (c != '#')
    {
        text[index] = c;
        index++;
        c = getchar();
    }
    int length = index;
    index = 0;
    while (index < length)
    {
        if (index <= length - 3)
        {

            if (
                (toLower(text[index]) == 't') 
                && toLower(text[index + 1]) == 'h' 
                && toLower(text[index + 2]) == 'e' 
                && ((index == length - 3) ? (true) : (!(text[index + 3] >= 'a' && text[index + 3] <= 'z') && !(text[index + 3] >= 'A' && text[index + 3] <= 'Z'))))
            {
                index += 3;
                continue;
            }
        }
        putchar(text[index]);
        index++;
    }
}