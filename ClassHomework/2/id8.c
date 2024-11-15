#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        if(i == 0){
            max = m;
        }
        if(m>max){
            max = m;
        }
    }
    printf("%d", max);
}