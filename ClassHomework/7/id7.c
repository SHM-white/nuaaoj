#include <stdio.h>
int getNum(int n){
    int result = 0;
    int num = n;
    int count = 1;
    while (num > 0)
    {
        result *= 10;
        result += num % 10;
        num /= 10;
    }
    return result;
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", getNum(getNum(m) + getNum(n)));
}