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
char *funcA(int n)
{
    if(n > 1)
    {
        char *tmp = funcA(n - 1);
        char tmp2[2] = {(char)('A' + (n - 1)), '\0'};
        int length = strlen(tmp) * 2 + 2;
        char *result = (char *)calloc(length, sizeof(char));
        strcpy(result, tmp);
        strcat(result, tmp2);
        strcat(result, tmp);
        result[length + 1] = '\0';
        free(tmp);
        return result;
    }
    else
    {
        char *tmp = (char *)calloc(2, sizeof(char));
        tmp[0] = 'A';
        tmp[1] = '\0';
        return tmp;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    puts(funcA(n));
}