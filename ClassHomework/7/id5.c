#include <stdio.h>
int main(){
    int k, n;
    float p;
    scanf("%d %d %f", &k, &n, &p);
    double sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += k;
        sum *= (1 + p);
    }
    printf("%.2f", sum - k * n);
}