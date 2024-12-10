#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct aaa
{
    int n;
    char a[];
} AAA;
AAA *create(char *text, int n){
    AAA *a;
    int length = strlen(text);
    a = malloc(sizeof(AAA) + length + 1);
    strcpy(a->a, text);
    a->n = n;
    return a;
}
int main(){
    float t;
    while (scanf("%f",&t) == 1)
    {
        printf("%f", t);
    }
    AAA *a = create("asasasas", 6);
    return 0;
}