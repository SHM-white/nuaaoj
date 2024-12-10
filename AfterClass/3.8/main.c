#include <stdio.h>
#include <math.h>
int main(){
    double r, h;
    const double pi = 3.14;
    scanf("%lf %lf", &r, &h);
    printf("C1=%.2f\n", 2 * pi * r);
    printf("Sa=%.2f\n", pi * r * r);
    printf("Sb=%.2f\n", 4 * pi * r * r);
    double tmp = r * r;
    printf("Va=%.2f\n", pi * r * tmp * 4.0 /3.0);
    printf("Vb=%.2f\n", pi * tmp * h);
}