#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[50];
    int sum = 0;
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (size_t i = 0; i < n; i++)
    {
        if(i >= 3){
            a[i] = a[i - 1] + a[i - 2] + a[i - 3];
        }
        sum += a[i];
    }
    printf("%d", sum);
    
}