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

void swap(int *arg1, int *arg2){
    int tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            if (nums[j] > nums[j + 1]){
                swap(nums + j, nums + j + 1);
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
        
}