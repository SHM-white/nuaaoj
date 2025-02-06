#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
int main()
{
    int count = 0;
    int *waitList = (int *)calloc(1, sizeof(int));
    int strLen1 = 10240, strLen2 = 10240;
    char *text1, *text2;
    text1 = (char *)calloc(strLen1 + 1, sizeof(char));
    scanf("%s", text1);

    text2 = (char *)calloc(strLen2 + 1, sizeof(char));
    scanf("%s", text2);
    int waitCount = 0;
    for (size_t i = 0; i < strLen1; i++)
    {
        if (text1[i] == text2[0])
        {
            waitCount++;
            waitList = (int *)realloc(waitList, waitCount * sizeof(int));
            waitList[waitCount - 1] = i;
        }
    }
    bool hasOutput = false;
    for (size_t i = 0; i < waitCount; i++)
    {
        if (CheckWaitItem(text1, waitList[i], text2))
        {
            count++;
        }
    }
    printf("%d", count);
}