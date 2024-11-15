#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 2560
char *findLongest(char **texts, int count, int maxLength)
{
    char *max;
    max = texts[0];
    for (size_t i = 0; i < count; i++)
    {
        if(strlen(max)<strlen(texts[i])){
            max = texts[i];
        }
    }
    return max;
}
int main()
{
    char text[STRLEN];
    gets(text);
    char **texts;
    int index = 0;
    int count = 0;
    while (text[index] != '\0')
    {
        if (text[index] == ' ')
        {
            count++;
        }
        index++;
    }
    count += 1;
    texts = (char **)calloc(count, sizeof(char *));
    index = 0;
    for (size_t i = 0; i < count; i++)
    {
        texts[i] = (char *)calloc(STRLEN, sizeof(char));
        int current = 0;
        while (text[index] != ' ' && text[index] != '\0')
        {
            texts[i][current] = text[index];
            current++;
            index++;
        }
        index++;
    }
    printf(findLongest(texts, count, STRLEN));
}