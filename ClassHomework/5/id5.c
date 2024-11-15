#ifdef __cplusplus
#include <iostream>
#include <vector>
#else
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#endif // __cplusplus

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
typedef enum
{
    Down,
    Up,
    Left,
    Right
} Direction;
int main()
{
    int **map;
    int **memo;
    int m, n;
    scanf("%d %d", &m, &n);
    map = (int **)calloc(m, sizeof(int *));
    memo = (int **)calloc(m, sizeof(int *));
    for (size_t i = 0; i < m; i++)
    {
        map[i] = (int *)calloc(n, sizeof(int));
        memo[i] = (int *)calloc(n, sizeof(int));
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &map[i][j]);
            memo[i][j] = 0;
        }
    }
    {
        int i = 0, j = 0;
        Direction currentDirection = Down;
        int failCount = 0;
        while (1)
        {
            if(memo[i][j] == 0)
            {
                printf("%d ", map[i][j]);
                failCount = 0;
            }
            else
            {
                failCount++;
            }
            if(failCount > 1){
                break;
            }
            switch (currentDirection)
            {
            case Down:
                memo[i][j] = 1;
                if (i + 1 < m && memo[i + 1][j] == 0)
                {
                    i++;
                }
                else
                {
                    currentDirection = Right;
                }
                break;
            case Up:
                memo[i][j] = 1;
                if (i - 1 >= 0 && memo[i - 1][j] == 0)
                {
                    i--;
                }
                else
                {
                    currentDirection = Left;
                }
                break;
            case Left:
                memo[i][j] = 1;
                if (j - 1 >= 0 && memo[i][j - 1] == 0)
                {
                    j--;
                }
                else
                {
                    currentDirection = Down;
                }
                break;
            case Right:
                memo[i][j] = 1;
                if (j + 1 < n && memo[i][j + 1] == 0)
                {
                    j++;
                }
                else
                {
                    currentDirection = Up;
                }
                break;
            default:
                break;
            }
        }
    }
}