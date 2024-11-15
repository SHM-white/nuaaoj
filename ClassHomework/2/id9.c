#include <stdio.h>
#define min(a, b) ((a) > (b) ? (b) : (a))
int main(){
    int n;
    scanf("%d", &n);
    int current = 0b1000000000000000;
    while (!(current & n))
    {
        current >>= 1;
    }
    while (current)
    {
        printf("%d", min(1, current & n));
        current >>= 1;
    }
    return 0;
}