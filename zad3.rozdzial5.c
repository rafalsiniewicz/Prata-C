#include<stdio.h>

int main()
{
    int days, weeks = 0;
    const days_in_week = 7;
    printf("How many days? ");
    scanf("%d", &days);
    while(days >= 7)
    {
        weeks++;
        days -= days_in_week;
    }
    printf("%d weeks and %d days", weeks, days);
    return 0;
}
