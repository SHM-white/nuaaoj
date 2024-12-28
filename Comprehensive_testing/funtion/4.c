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
int length(char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
bool CheckWaitItem(char *origin, int checkPoint, char *target)
{
    bool result = true;
    for (size_t i = 0; target[i] != '\0'; i++)
    {
        result &= (origin[checkPoint + i] == target[i]);
        if (!result)
        {
            return false;
        }
    }
    return result;
}
int countSubStr(char *str, char *target)
{
    int strLen = length(str);
    int waitCount = 0;
    int *waitList = malloc(sizeof(int));
    for (size_t i = 0; i < strLen; i++)
    {
        if (str[i] == target[0])
        {
            waitCount++;
            waitList = realloc(waitList, waitCount * sizeof(int));
            waitList[waitCount - 1] = i;
        }
    }
    int count = 0;
    for (size_t i = 0; i < waitCount; i++)
    {
        if (CheckWaitItem(str, waitList[i], target))
        {
            count++;
        }
    }
    free(waitList);
    return count;
}
// Sub str in [begin, end]
void getSubStr(char *source,
               char *output,
               int begin,
               int end)
{
    int i;
    for (i = begin; i < end; i++)
    {
        output[i - begin] = source[i];
    }
    output[i - begin] = '\0';
}
int main()
{
    int minLength;
    scanf("%d", &minLength);
    char text[1024];
    scanf("%s", text);

    char findedStr[100];
    int maxcount = 0;
    int strLen = length(text);
    for (size_t start = 0; start < strLen; start++)
    {
        for (size_t i = minLength; i < strLen - start + 1; i++)
        {
            char subStr[100];
            getSubStr(text, subStr, start, start + i);
            int currentCount = countSubStr(text, subStr);
            if (currentCount > maxcount)
            {
                maxcount = currentCount;
                strcpy(findedStr, subStr);
            }
            else if (currentCount == maxcount && length(subStr) > length(findedStr))
            {
                strcpy(findedStr, subStr);
            }
        }
    }
    printf("%s", findedStr);
}