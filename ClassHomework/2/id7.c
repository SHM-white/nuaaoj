#include <stdio.h>
int main(){
    int n;
    int score[5] = {0, 0, 0, 0, 0};
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        if (m >= 90)
        {
            score[0]++;
        }
        else if (m >= 80)
        {
            score[1]++;
        }
        else if (m >= 70)
        {
            score[2]++;
        }
        else if (m >= 60)
        {
            score[3]++;
        }
        else
        {
            score[4]++;
        }        
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    return 0;
}