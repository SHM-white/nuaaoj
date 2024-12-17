#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isMaxInRow(int **map, const int r, const int c){
    const int target = map[r][c];
    bool isMax = true;
    for (int i = 0; i < 5; i++)
    {
        isMax &= target >= map[r][i];
    }
    return isMax;
}
bool isMinInCol(int **map, const int r, const int c){
    const int target = map[r][c];
    bool isMin = true;
    for (int i = 0; i < 4; i++)
    {
        isMin &= target <= map[i][c];
    }
    return isMin;
}
int main(){
    int **map = calloc(4, sizeof(int *));
    for (size_t i = 0; i < 4; i++)
    {
        map[i] = calloc(5, sizeof(int));
        for (size_t j = 0; j < 5; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    int hasMax = 0b0000;
    for (size_t j = 0; j < 5; j++)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if(hasMax & (0b01 << i) > 0){
                continue;
            }
            if (isMaxInRow(map, i, j)){
                hasMax |= 0b01 << i;
                if (isMinInCol(map, i, j)){
                    printf("%d %d %d", i, j, map[i][j]);
                    return 0;
                }
            }
        }
        
    }
    puts("It is not exist!");
}