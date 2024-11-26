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
int compare(const void *arg1, const void *arg2){
    int a = *(int *)arg1;
    int b = *(int *)arg2;
    if (a > b){
        return -1;
    }
    else if (a < b)
    {
        return 1; 
    }
    else{
        return 0;
    }
}
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    int n;
    int *nums;
    scanf("%d", &n);
    nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), compare);
    for (size_t i = 0; i < 10; i++)
    {
        if (i < 10)
        {
            printf("%d ", nums[i]);
        }
        
    }
    
}