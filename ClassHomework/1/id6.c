#include <stdio.h>
int main(){
    float a,b;
    char op;
    float result;
    scanf("%f %f %c",&a,&b,&op);
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    
    default:
        break;
    }
    printf("%.2f", result);
}