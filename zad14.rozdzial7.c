#include<stdio.h>

int main()
{
    int money = 1000000;
    int years = 0;
    while( money >= 0)
        {
            money *= 1.08;
            money -= 100000;
            years++;
        }
    printf("Jim will run out of money after %d years", years);
    return 0;
}
