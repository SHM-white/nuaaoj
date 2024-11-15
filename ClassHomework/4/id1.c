#include <stdio.h>
#include <stdlib.h>


int main(){
    int *nums;
    int m, n;
    scanf("%d %d",&m,&n);
    nums = calloc(m, sizeof(int));
    for (size_t i = 0; i < m; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (size_t i = 0; i < m; i++)
    {
        int j = i - n;
        if(j < 0){
            j += (m);
        }
        printf("%d ", nums[j]);
    }
}