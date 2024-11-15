#include <stdio.h>
int get(int n){
    if (n == 1){
        return 1;
    }
    return n * (n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", get(n));
}