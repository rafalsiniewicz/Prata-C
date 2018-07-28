#include<stdio.h>
float f(float number1, float number2)
{
    return (number1-number2)/(number1*number2);
}
int main()
{
    float number1, number2;
    printf("Choose two float numbers:\n");
    while(scanf("%f", &number1) == 1 && scanf("%f", &number2) == 1)
        {
            printf("%f\n", f(number1, number2));
        }
    printf("You didn't choose float number- end of program");
    return 0;
}
