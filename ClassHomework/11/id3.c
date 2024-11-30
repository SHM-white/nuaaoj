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
void sort(char **texts, int size)
{
    for (size_t i = 1; i < size; i++)
    {
        for (size_t j = 0; j < size - i; j++)
        {
            if (strcmp(texts[j], texts[j + 1]) > 0)
            {
                char tmp[100];
                strcpy(tmp, texts[j]);
                strcpy(texts[j], texts[j + 1]);
                strcpy(texts[j + 1], tmp);
            }
        }
    }
}

int main(){
    char **texts;
    texts = calloc(10, sizeof(char *));
    for (size_t i = 0; i < 10; i++)
    {
        texts[i] = calloc(100, sizeof(char));
        scanf("%s", texts[i]);
    }
    sort(texts, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%s ", texts[i]);
    }
    
}