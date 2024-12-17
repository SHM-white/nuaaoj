#include <stdio.h>
void swap(int *arg1, int *arg2);
void func(int *rect);
void func(int *rect)
{
    // Find max
    int *current = rect;
    int *max = current;
    while (current <= rect + 24)
    {
        if (*current > *max)
        {
            max = current;
        }
        current++;
    }
    swap(max, &rect[12]);
    max = rect + 12;
    // Find min
    const int source[4] = {0, 1, 2, 3};
    const int target[4] = {0, 4, 20, 24};
    for (int i = 0; i < 4; i++)
    {
        int *min[4] = {max, max, max, max};
        current = rect;
        while (current <= rect + 24)
        {
            // switch (i)
            // {
            // case 3:
            //     if (current == rect + 20)
            //     {
            //         current++;
            //         continue;
            //     }
            // case 2:
            //     if (current == rect + 4)
            //     {
            //         current++;
            //         continue;
            //     }
            // case 1:
            //     if (current == rect)
            //     {
            //         current++;
            //         continue;
            //     }
            // default:
            //     break;
            // }
            if (*current < *min[0])
            {
                min[3] = min[2];
                min[2] = min[1];
                min[1] = min[0];
                min[0] = current;
            }
            else if (*current < *min[1])
            {
                min[3] = min[2];
                min[2] = min[1];
                min[1] = current;
            }
            else if (*current < *min[2])
            {
                min[3] = min[2];
                min[2] = current;
            }
            else if (*current < *min[3])
            {
                min[3] = current;
            }
            current++;
        }
        swap(min[source[i]], &rect[target[i]]);
    }
}
void swap(int *arg1, int *arg2)
{
    int tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}
int main()
{
    int rect[5][5];
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            scanf("%d", &rect[i][j]);
        }
    }
    func(&rect[0][0]);
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (j != 0)
            {
                printf(" ");
            }
            printf("%d", rect[i][j]);
        }
        printf("\n");
    }
}