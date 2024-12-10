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

void sort(int **p, int n) 
{
    int size = n;
    int *nums = *p;
    for (size_t i = 1; i < size; i++)
    {
        for (size_t j = 0; j < size - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}

int main(){
    int *nums = calloc(6, sizeof(int));
    for (size_t i = 0; i < 6; i++)
    {
        scanf("%d", &nums[i]);
    }
    sort(&nums, 6);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", nums[i]);
    }
    
}
