#include <stdio.h>
int getMaxDivider(int a, int b){
    if(a < b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int tmp = a % b;
    while (tmp != 0)
    {
        a = b;
        b = tmp;
        tmp = a % b;
    }
    return b;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", getMaxDivider(a, b));
}