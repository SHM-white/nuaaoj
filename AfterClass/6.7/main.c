/*
描述

一个数如果恰好等于它的因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子：


输入

N


输出

? its factors are ? ? ?
*/

#include <stdio.h>

int main()
{
    int n, i, j, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d its factors are ", i);
            for (j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}