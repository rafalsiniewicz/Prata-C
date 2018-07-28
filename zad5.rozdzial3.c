#include<stdio.h>
long int year_to_secs(int years)
{
    long int secs_in_year = 3.156e7;
    return secs_in_year * years;
}
int main()
{
    int years;
    printf("How old are you?\n");
    scanf("%d", &years);
    printf("You have been lived %.2d seconds", year_to_secs(years));
}
