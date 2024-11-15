#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void swap(char *arg1, char *arg2)
{
    char tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}
int main()
{
    int n;
    char *text;
    scanf("%d", &n);
    text = calloc(n + 1, sizeof(char));
    scanf("%s", text);
    int count = 0;
    char *begin = text;
    char *end = text + n - 1;
    bool hasSingle = 0;
    char singleChar;
    for (int i = 0; i < n / 2;)
    {
        char *p1 = begin + i;
        char *p2 = end - i;
        int delta = 0;
        while (*p1 != *(p2 - delta))
        {
            delta++;
        }
        if ((n - 1 - i - delta) == i)
        {
            if (!hasSingle)
            {
                singleChar = *p1;
                hasSingle = true;
            }
            if (hasSingle && singleChar != *p1)
            {
                puts("Impossible");
                return 0;
            }
            swap(p2 - delta, p2 - delta + 1);
            count++;
            delta = 0;
            continue;
        }
        while (delta)
        {
            swap(p2 - delta, p2 - delta + 1);
            delta--;
            count++;
        }
        i++;
    }
    printf("%d", count);
}