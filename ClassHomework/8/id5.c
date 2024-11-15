#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    long long *nums;
    long long target;
    scanf("%d", &n);
    nums = calloc(n, sizeof(long long));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &nums[i]);
    }
    scanf("%lld", &target);
    register unsigned long long index = 0b01;
    unsigned int count = 0;
    while (index < 0b01 << n)
    {
        long long sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (index & 0b01 << i){
                sum += nums[i];
            }
        }
        if (sum == target)
        {
            for (size_t i = 0; i < n; i++)
            {
                if(index & 0b01 << i){
                    printf("%lld ", nums[i]);
                }
            }
            printf("\n");
            count++;
        }
        index++;
    }
    printf("%u", count);
}