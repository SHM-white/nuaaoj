#include <stdio.h>
#include <stdlib.h>
int** Transpose(int** array, int row, int col)
{
    int** result = (int**)malloc(col * sizeof(int*));
    for (size_t i = 0; i < col; i++)
    {
        result[i] = (int*)malloc(row * sizeof(int));
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            result[j][i] = array[i][j];
        }
    }
    for (size_t i = 0; i < row; i++)
    {
        free(array[i]);
    }
    free(array);
    return result;
}
void printArray(int** array, int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int **array;
    array = calloc(row, sizeof(int *));
    for (size_t i = 0; i < row; i++)
    {
        array[i] = calloc(col, sizeof(int));
        for (size_t j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    array = Transpose(array, row, col);
    printArray(array, col, row);
    return 0;
}