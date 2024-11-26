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
bool search(int *nums, int size, int target)
{
    for (size_t i = 0; i < size; i++)
    {
        if (nums[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n1, n2;
    int *nums1, *nums2;
    scanf("%d", &n1);
    nums1 = (int *)calloc(n1, sizeof(int));
    for (size_t i = 0; i < n1; i++)
    {
        scanf("%d", &nums1[i]);
    }
    scanf("%d", &n2);
    nums2 = (int *)calloc(n2, sizeof(int));
    for (size_t i = 0; i < n2; i++)
    {
        scanf("%d", &nums2[i]);
    }
    sort(nums1, n1);
    sort(nums2, n2);
    for (size_t i = 0; i < n2; i++)
    {
        if (search(nums1, n1, nums2[i]))
        {
            printf("%d ", nums2[i]);
        }
    }
    printf("\n");
    // bool *outputed1 = calloc(n1, sizeof(bool));
    // bool *outputed2 = calloc(n2, sizeof(bool));
    for (size_t i = 0, j = 0;;)
    {
        if (nums1[i] == nums2[j])
        {
            printf("%d ", nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            printf("%d ", nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            printf("%d ", nums2[j]);
            j++;
        }
        if (i == n1)
        {
            for (size_t k = j; k < n2; k++)
            {
                printf("%d ", nums2[k]);
            }
            break;
        }
        else if (j == n2)
        {
            for (size_t k = i; k < n1; k++)
            {
                printf("%d ", nums1[k]);
            }
            break;
        }
    }
    printf("\n");
    for (size_t i = 0; i < n1; i++)
    {
        if (!search(nums2, n2, nums1[i]))
        {
            static bool a = false;
            if (a)
            {
                putchar(' ');
            }
            a = true;
            printf("%d", nums1[i]);
        }
    }
}