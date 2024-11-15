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
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (size_t i = 1; i < n; i++)
    {
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n){
        puts("yes");
    }
    else{
        puts("no");
    }
}