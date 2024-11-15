#include <stdio.h>
typedef struct 
{
    int _10007;
    int otherNum;
} FibNum;

int main(){
    int n;
    scanf("%d", &n);
    FibNum num1 = {0, 1}, num2 = {0, 1};
    for (size_t i = 3; i <= n; i++)
    {
        FibNum tmp = {num1._10007 + num2._10007, num1.otherNum + num2.otherNum};
        num1 = num2;
        if(tmp.otherNum / 10007){
            tmp._10007 += tmp.otherNum / 10007;
            tmp.otherNum %= 10007;
        }
        num2 = tmp;
    }
    if(n == 1){
        printf("1");
        return 0;
    }
    printf("%d", num2.otherNum);
}