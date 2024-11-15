#include <stdio.h>
int check(int n){
    return (n / 1000 + (n / 10) % 10 == 10) && (((n / 100) % 10) * (n % 10) == 12);
}
int main(){
    for (size_t i = 30; i < 100; i++)
    {
        if(i*i>1000 && i*i<10000 && check(i*i))
        {
            printf("%d ", i * i);
        }
    }
    
}