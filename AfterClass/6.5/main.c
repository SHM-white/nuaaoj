/*描述
求以下三数的和,保留2位小数1~a之和1~b的平方和1~c的倒数和
输入
a b c
输出
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
*/
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double sum = 0, square_sum = 0, reciprocal_sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 1; i <= a; i++) {
        sum += i;
    }
    for (int i = 1; i <= b; i++) {
        square_sum += pow(i, 2);
    }
    for (int i = 1; i <= c; i++) {
        reciprocal_sum += 1.0 / i;
    }
    printf("%.2f\n", sum + square_sum + reciprocal_sum);
    return 0;
}