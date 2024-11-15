#include <stdio.h>
int main(){
    int n;
    int day = 28;
    scanf("%d", &n);
    if(n % 100 == 0){
        if(n % 400 == 0){
            day = 29;
        }
        else{
            day = 28;
        }
    }
    else if (n % 4 == 0)
    {
        day = 29;
    }
    else{
        day = 28;
    }
    printf("%d年的2月有%d天", n, day);
}