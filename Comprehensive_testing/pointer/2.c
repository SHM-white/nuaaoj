#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    long long **array;
    array = calloc(row, sizeof(long long *));
    for (size_t i = 0; i < row; i++)
    {
        array[i] = calloc(col, sizeof(long long));
        for (size_t j = 0; j < col; j++)
        {
            scanf("%lld", &array[i][j]);
        }
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if(j != 0){
                printf(" ");
            }
            printf("%lld", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}