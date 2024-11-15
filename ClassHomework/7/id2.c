#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    int is = 0;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            is = 1;
        }
    }
    else if (year % 4 == 0)
    {
        is = 1;
    }
    if(is){
        puts("yes");
    }
    else{
        puts("no");
    }
}