#include <stdio.h>
int main(){
    int I = 0;
    double bonus = 0.0;
    scanf("%d", &I);
    if (I>1e6){
        bonus += (I - 1e6) * 0.01;
        I = 1e6;
    }
    if(I>6e5){
        bonus += (I - 6e5) * 0.015;
        I = 6e5;
    }
    if(I>4e5){
        bonus += (I - 4e5) * 0.03;
        I = 4e5;
    }
    if(I>2e5){
        bonus += (I - 2e5) * 0.05;
        I = 2e5;
    }
    if(I>1e5){
        bonus += (I - 1e5) * 0.075;
        I = 1e5;
    }
    bonus += I * 0.1;
    printf("%.0f", bonus);
}