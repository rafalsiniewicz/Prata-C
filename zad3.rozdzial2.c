#include<stdio.h>
long int years_to_days(int years)
{
        return 365 * years;
}

int main()
{
    int years;
    printf("How old are you? ");
    scanf("%d", &years);
    printf("You have been lived %ld days", years_to_days(years));

    return 0;
}
