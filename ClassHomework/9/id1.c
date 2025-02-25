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
    int m, n;
    scanf("%d %d", &n, &m);
    int *nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (size_t i = 0; i < m; i++)
    {
        int t1, t2;
        scanf("%d %d", &t1, &t2);
        swap(nums + t1 - 1, nums + t2 - 1);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\n", nums[i]);
    }
        
}