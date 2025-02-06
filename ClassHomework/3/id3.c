#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkNum(int num){
    if(num>=1000||num<100){
        return false;
    }
    int a1, a2, a3;
    a1 = num / 100;
    a2 = (num % 100) / 10;
    a3 = num % 10;
    if(num == pow(a1,3)+pow(a2,3)+pow(a3,3)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    for (int i = 100; i < 999;i++){
        if(checkNum(i)){
            printf("%d ", i);
        }
    }
}