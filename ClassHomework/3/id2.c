#include <stdio.h>
int main(){
    int m, n, result = 30;
    int big[] = {1, 3, 5, 7, 8, 10, 12};
    scanf("%d %d", &m, &n);
    if (m % 400 == 0 || (m % 100 != 0 && m % 4 == 0))
    {
        if(n == 2){
            result = 29;
        }
    }
    else if(n == 2){
        result = 28;
    }
    for (size_t i = 0; i < 7; i++)
    {
        if(n == big[i]){
            result = 31;
        }
    }
    printf("%d", result);
}