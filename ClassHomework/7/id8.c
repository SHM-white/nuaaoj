#include <stdio.h>
int getFriend(int n){
    int sum = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int m = getFriend(i);
        if (m < n && m > i && getFriend(m) == i){
            printf("%d %d\n", i, m);
        }
    }
}