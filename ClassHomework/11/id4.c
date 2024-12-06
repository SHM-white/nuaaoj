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
int n;
char toUper(char in){
    if(in >= 'a' && in <= 'z'){
        return 'A' + (in - 'a');
    }
    return in;
}
char toLower(char in){
    if(in >= 'A' && in <= 'Z'){
        return 'a' + (in - 'A');
    }
    return in;
}
void convert_Sentence2(char *pStr){
    int index = 0;
    int sentence_begin = 1;
    while (pStr[index] != '\0')
    {
        while(pStr[index] == ' '){
            index++;
        }
        if(sentence_begin == 1){
            pStr[index] = toUper(pStr[index]);
            sentence_begin = 0;
        }
        else{
            pStr[index] = toLower(pStr[index]);
        }
        if(pStr[index] == '.'){
            sentence_begin = 1;
        }
        if(pStr[index] == '!'){
            sentence_begin = 1;
        }
        if(pStr[index] == '?'){
            sentence_begin = 1;
        }
        index++;
    }
} 

void convert_Sentence(char (*pStr)[200]){
    for (size_t i = 0; i < n; i++)
    {
        convert_Sentence2(pStr[i]);
    }   
} 
int main()
{
    char texts[100][200];
    scanf("%d\n", &n);
    
    for (size_t i = 0; i < n; i++)
    {
        gets(texts[i]);
        texts[i][strcspn(texts[i], "\n")] = 0;
    }
    convert_Sentence(texts);
    for (size_t i = 0; i < n; i++)
    {
        printf("%s\n", texts[i]);
    }

}