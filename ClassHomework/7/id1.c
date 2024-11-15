#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

bool func(int num){
    int i = num;
    int sum = 0;
    int n = 0;
    if(num / 1000){
        n = 4;
    }
    else {
        n = 3;
    }
    while (i > 0)
    {
        sum += pow(i % 10, n);
        i /= 10;
    }
    return sum == num;
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    for (size_t i = m; i <= n; i++)
    {
        if(func(i)){
            printf("%d\n", i);
        }
    }
}