#include <stdio.h>
int main(){
    int n;
    int m = 0;
    scanf("%d", &n);
    for (size_t i = 2; i < n; i++)
    {
        if(n%i == 0){
            m += i;
        }
    }
    printf("%d", m);
}