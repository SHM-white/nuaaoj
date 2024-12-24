#include <stdio.h>
#include <math.h>
double getNumber(int n, int x){
    int sign = 1;
    unsigned long long a = 1;
    unsigned long long b = 1;
    for (size_t i = 0; i < n; i++)
    {
        sign *= -1;
        a *= x;
        b *= i+1;
    }
    return sign * (double)a / (double)b ;
}
int main(){
    int x;
    double esp;
    scanf("%d", &x);
    scanf("%lf", &esp);
    double total = 0;
    double result;
    int n = 0;
    while (fabs(result = getNumber(n, x)) > esp * 0.1)
    {
        total += result;
        n++;
    }
    int tmp = total * 10000;
    printf("%.3lf", total);
}