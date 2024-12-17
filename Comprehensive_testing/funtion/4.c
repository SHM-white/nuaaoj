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
int length(char *str){
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
bool CheckWaitItem(char *origin, int checkPoint, char *target){
    bool result = true;
    for (size_t i = 0;target[i]!='\0'; i++)
    {
        result &= (origin[checkPoint + i] == target[i]);
        if(!result){
            return false;
        }
    }
    return result;
}
int countSubStr(char *str, char *target){
    int strLen = length(str);
    int waitCount = 0;
    int *waitList = malloc(sizeof(int));
    for (size_t i = 0; i < strLen; i++)
    {
        if(str[i] == target[0]){
            waitCount++;
            waitList = realloc(waitList, waitCount * sizeof(int));
            waitList[waitCount - 1] = i;
        }
    }
    int count = 0;
    for (size_t i = 0; i < waitCount; i++)
    {
        if(CheckWaitItem(str, waitList[i], target)){
            count++;
        }
    }
    return count;
}
//Sub str in [begin, end]
void getSubStr( char *source, 
                char *output, 
                int begin, 
                int end)
{
    int i;
    for (i = begin; i <= end; i++)
    {
        output[i - begin] = source[i];
    }
    output[i] = '\0';
}
int main(){
    
}