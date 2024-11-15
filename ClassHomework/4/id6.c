#include <stdio.h>
#include <stdlib.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
void sort(int *nums,int size){
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - i - 1; j++)
        {
            if(nums[j] > nums[j + 1]){
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int *nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    sort(nums, n);
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    
}