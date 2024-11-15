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
    int count = 0;
    int countMax = 0;
    int last;
    for (size_t i = 0; i < n; i++)
    {
        if(i == 0){
            last = nums[0];
            count = 1;
            continue;
        }
        if(nums[i] == last + 1){
            last = nums[i];
            count++;
        }
        else
        {
            countMax = max(countMax, count);
            last = nums[i];
            count = 1;
        }
    }
    countMax = max(count, countMax);
    printf("%d", countMax);
}