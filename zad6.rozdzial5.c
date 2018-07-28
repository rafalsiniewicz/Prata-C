#include<stdio.h>
void f(float number)
{
    printf("%.2f^3 equals %.2f", number, number*number*number);
}

int main()
{
    float number;
    printf("Choose number ");
    scanf("%f", &number);
    f(number);
    return 0;
}
