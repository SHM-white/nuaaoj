#include <stdio.h>
int main() {
    int total = 0;
    for (size_t i = 0; i < 7; i++)
    {
        int n;
        scanf("%d", &n);
        total += n;
    }
    printf("%d", total);
}