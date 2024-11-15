#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *nums = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int m;
    scanf("%d", &m);
    int found = 0;
    int foundIndex = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(nums[i] == m){
            foundIndex = i;
            found = 1;
            break;
        }
    }
    if(found){
        printf("%d", foundIndex);
    }
    else{
        printf("Not Found");
    }
}