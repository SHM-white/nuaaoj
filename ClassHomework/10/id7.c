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
int put(int remind){
    int n = 0;
    if (remind == 1)
    {
        return 1;
    }
    if (remind == 2)
    {
        return 2;
    }

    n += put(remind - 1);
    n += put(remind - 2);
    return n;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", put(n));
}