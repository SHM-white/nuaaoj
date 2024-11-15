#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef struct
{
    int value;
    int x;
    int y;
} Point;

int main()
{
    int **map;
    int n;
    Point max = {0, 0, 0};
    Point min = {0, 0, 0};
    scanf("%d", &n);
    map = calloc(n, sizeof(int *));
    for (size_t i = 0; i < n; i++)
    {
        map[i] = calloc(n, sizeof(int));
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &map[i][j]);
            if (i == 0 && j == 0)
            {
                max.value = map[i][j];
                min.value = map[i][j];
                continue;
            }
            if (map[i][j] > max.value)
            {
                max.value = map[i][j];
                max.x = i;
                max.y = j;
            }
            if (map[i][j] < min.value)
            {
                min.value = map[i][j];
                min.x = i;
                min.y = j;
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        int i2 = i;
        if (i2 == max.x)
        {
            i2 = min.x;
        }
        else if (i2 == min.x)
        {
            i2 = max.x;
        }
        for (size_t j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                printf("%d", map[i2][j]);
            }
            else
            {
                printf("%d ", map[i2][j]);
            }
        }
        printf("\n");
    }
    for (size_t i = 0; i < n; i++)
    {
        free(map[i]);
    }
    free(map);
    return 0;
}