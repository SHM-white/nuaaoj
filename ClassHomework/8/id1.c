#include <stdio.h>
int hanoi(int from, int to, int order)
{
    if(order == 1){
        return 1;
    }
    int count = 0;
    unsigned short halls = 0b00000000;
    halls |= (0b00000001 << from);
    halls |= (0b00000001 << to);
    halls ^= 0b00001110;
    for (int i = 1; i <= 3; i++){
        if(halls & 0b00000001 << i){
            count += hanoi(from, i, order - 1);
            count += 1;
            count += hanoi(i, to, order - 1);
            break;
        }
    }
    return count;
}
int main(){
    int m, n;
    scanf("%d %d",&n,&m);
    if (n % m == 0)
    {
        n /= m;
    }
    else
    {
        n = (n / m) + 1;
    }
    printf("%d", hanoi(1, 3, n));
}