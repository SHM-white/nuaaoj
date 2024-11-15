#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool check(float a,float b,float c){
    return (a + b > c) && (a + c > b) && (b + c > a);
}
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if(!check(a,b,c)){
        printf("These sides do not correspond to a valid triangle\n");
    }
    else{
        float s = (a + b + c) / 2.0;
        printf("area: %.2f\n", sqrt(s * (s - a) * (s - b) * (s - c)));
        printf("perimeter: %.2f\n", a + b + c);
    }
}