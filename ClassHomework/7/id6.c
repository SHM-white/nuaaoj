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
    int m, n;
    scanf("%d %d", &m, &n);
    if (m == getFriend(n) && n == getFriend(m)){
        puts("yes");
    }
    else{
        puts("no");
    }
}