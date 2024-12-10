//给出一个不多于5位的整数，要求1、求出它是几位数2、分别输出每一位数字3、按逆序输出各位数字，例如原数为321,应输出123
#include <stdio.h>
#include <math.h>
int main() {
    int num, digit;
    scanf("%d", &num);
    digit = 0;
    int tmp = num;
    while (tmp > 0) {
        digit++;
        tmp /= 10;
    }
    printf("%d\n", digit);
    tmp = num;
    for (int i = digit - 1; i >= 0; i--) {
        if(i != digit - 1){
            printf(" ");
        }
        printf("%d", tmp / (int)pow(10, i) % 10);
    }
    printf("\n");
    for (int i = 0; i < digit; i++) {
        printf("%d", tmp % 10);
        tmp /= 10;
    }
    printf("\n");
    return 0;
}