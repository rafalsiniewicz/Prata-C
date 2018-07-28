#include<stdio.h>

int main()
{
    const double mass = 3.0e-23;
    int liter;
    printf("How many liters?\n");
    scanf("%d", &liter);
    printf("%d litres contain %e water molecules", liter, 1000*liter/mass);
    return 0;
}
