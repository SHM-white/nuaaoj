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

void sort(int *nums, int size)
{
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
int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    int nums[10240];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    sort(nums, n);
    for (size_t i = 0; i < n; i++)
    {
        if (nums[i] % b == 0)
        {
            continue;
        }
        if (nums[i] >= 'A' && nums[i] <= 'Z')
        {
            printf("%c ", nums[i]);
        }
        else{
            printf("%d ", nums[i]);
        }
    }
}