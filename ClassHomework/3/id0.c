#include <stdio.h>
unsigned long long func(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * func(n - 1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%ld", func(n));
}