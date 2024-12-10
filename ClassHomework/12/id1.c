#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int day;
};
int days(struct Date* date);
int days(struct Date* date){
    int day = date->day;
    switch (date->month)
    {
    case 12:
        day += 30;
    case 11:
        day += 31;
    case 10:
        day += 30;
    case 9:
        day += 31;
    case 8:
        day += 31;
    case 7:
        day += 30;
    case 6:
        day += 31;
    case 5:
        day += 30;
    case 4:
        day += 31;
    case 3:
        day += 28;
        if (date->year % 100 == 0)
        {
            if (date->year % 400 == 0)
            {
                day += 1;
            }
        }
        else if (date->year % 4 == 0)
        {
            day += 1;
        }
    case 2:
        day += 31;
    default:
        break;
    }
    return day;
}
int main()
{
    struct Date* date = (struct Date*)malloc(sizeof(struct Date));

    scanf("%d %d %d", &date->year, &date->month, &date->day);
    printf("%d", days(date));
    free(date);
}