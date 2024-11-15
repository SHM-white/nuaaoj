#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result[2];
    if(d-b<0){
        c--;
        d += 60;
    }
    printf("%d %d",c-a,d-b);
}