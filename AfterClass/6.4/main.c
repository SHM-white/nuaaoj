#include <stdio.h>
unsigned long long generateNum(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main(){
    int n = 0;
    unsigned long long r = 0;
    scanf("%d", &n);
    if(n<1){
        printf("%d", -1);
        return 0;
    }
    for (int i = 1; i <= n;i++){
        r += generateNum(i);
    }
    printf("%llu", r);
}