#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n%5 || n%7){
        puts("NO");
    }
    else
    {
        puts("YES");
    }
}