#include <stdio.h>
int FindGreatestCommonDivisor(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return FindGreatestCommonDivisor(b, a % b);
}
int FindLeastCommonMultiple(int a, int b)
{
    return a * b / FindGreatestCommonDivisor(a, b);
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", FindGreatestCommonDivisor(a, b), FindLeastCommonMultiple(a, b));
}