#include<stdio.h>

int main()
{
    float number;
    scanf("%f", &number);
    printf("Wpisano liczbe %.3f lub %e\n", number, number);
    printf("Wpisano liczbe %+.3f lub %E", number, number);
    return 0;
}
