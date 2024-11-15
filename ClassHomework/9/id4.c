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

void f(int *result, int n){
    for (size_t i = 1; i <= n; i++)
    {
        if(i == 1){
            *result = 1;
        }
        *result *= i;
    }
} 
int main()
{
    int n;
    int result = 1;
    scanf("%d", &n);
    f(&result, n);
    printf("%d", result);
}