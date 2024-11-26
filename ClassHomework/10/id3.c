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
int CompactIntegers(int *nums,int size){
    int *nums_new = calloc(size, sizeof(int));
    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (nums[i] != 0){
            nums_new[index] = nums[i];
            index++;
        }
    }
    for (size_t i = 0; i < index; i++)
    {
        nums[i] = nums_new[i];
    }    
    return size - index;
}
int main(){

    int n;
    scanf("%d", &n);
    int nums[10240];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int m = CompactIntegers(nums, n);
    for (size_t i = 0; i < n - m; i++)
    {
        if(i > 0){
            printf(" ");
        }
        printf("%d", nums[i]);
    }
    printf("\n%d\n", n - m);
}