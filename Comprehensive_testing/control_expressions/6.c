#include <stdio.h>
#include <stdbool.h>
bool suit(int n){
    if(n < 2){
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int count = 0;
    int total = 0;
    for (int i = m; i <= n; i++)
    {
        if(suit(i)){
            count++;
            total += i;
        }
    }
    printf("%d %d", count, total);
}