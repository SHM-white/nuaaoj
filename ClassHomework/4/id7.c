#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
int compare(const void* a,const void* b){
    int arg1 = *(const int*)a;
    int arg2 = *(const int *)b;
    if(arg1 > arg2){
        return 1;
    }
    else if (arg1 < arg2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}
typedef struct{
    int num;
    int count;
} Counter;
int main(){
    int n;
    scanf("%d",&n);
    int *nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int CounterSize = 0;
    Counter *counters = malloc(sizeof(Counter));
    for (size_t i = 0; i < n; i++)
    {
        bool found = false;
        for (size_t j = 0; j < CounterSize; j++)
        {
            if (counters[j].num == nums[i])
            {
                counters[j].count++;
                found = true;
            }            
        }
        if(!found){
            CounterSize++;
            counters = realloc(counters, CounterSize * sizeof(Counter));
            counters[CounterSize - 1].num = nums[i];
            counters[CounterSize - 1].count = 1;
        }
    }
    qsort(counters, CounterSize, sizeof(Counter), compare);
    for (size_t i = 0; i < CounterSize; i++)
    {
        printf("%d %d\n", counters[i].num, counters[i].count);
    }
    
}