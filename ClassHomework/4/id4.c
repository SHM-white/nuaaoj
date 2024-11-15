#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    int n;
    scanf("%d",&n);
    int maxNum;
    int minNum;
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        if(i == 0){
            maxNum = m;
            minNum = m;
        }
        maxNum = max(maxNum, m);
        minNum = min(minNum, m);
        sum += m;
    }
    printf("%d\n%d\n%d\n", maxNum, minNum, sum);
} 