#ifdef __cplusplus
#include <iostream>
#include <cstring>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int reverse_num(int n){
    int output = 0;
    while (n)
    {
        output *= 10;
        output += n % 10;
        n /= 10;    
    }
    return output;
}
int main(){
    int input;
    scanf("%d", &input);
    bool hasOutput = 0;
    for (int i = pow(10, input - 1); i < pow(10, input - 1) * 2; i++)
    {
        if(i * 9 == reverse_num(i)){
            if(hasOutput == 0){
                puts("The reverse number is:");
                hasOutput = 1;
            }
            printf("%d\n", i);
        }
    }
    if(hasOutput == 0){
        puts("There's no reverse number");
    }
    return 0;
}