#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
int main()
{
    int **map;
    int maxNums[3] = {0, 0, 0};
    map = calloc(3, sizeof(int *));
    for (size_t i = 0; i < 3; i++)
    {
        map[i] = calloc(4, sizeof(int));
        for (size_t j = 0; j < 4; j++)
        {
            scanf("%d", &map[i][j]);
            if(j == 0){
                maxNums[i] = map[i][j];
            }
            maxNums[i] = max(maxNums[i], map[i][j]);
        }
    }
    printf("%d", maxNums[0] + maxNums[1] + maxNums[2]);
    for (size_t i = 0; i < 3; i++)
    {
        free(map[i]);
    }
    free(map);
    return 0;
}