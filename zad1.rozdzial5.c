#include<stdio.h>

int main()
{
    int minutes, hours = 0;
    const int min_in_h = 60;
    scanf("%d", &minutes);
    while(minutes >= 60)
    {
        hours++;
        minutes = minutes - min_in_h;
    }
    printf("%dh %dmin.", hours, minutes);
    return 0;
}
