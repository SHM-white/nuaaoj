#include <stdio.h>
int main(){
    int n;
    double money = 0.0;
    scanf("%d",&n);
    if(n>50){
        money += (n - 50) * 0.58;
        n = 50;
    }
    money += n * 0.53;
    printf("%.2f", money);
}