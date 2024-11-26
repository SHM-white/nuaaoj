#include <stdio.h>
void func(int *total, int n){
    for (size_t i = 1; i <= n; i++)
    {
        (*total) += i;
    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    int out = 0;
    func(&out, n);
    printf("%d", out);
}