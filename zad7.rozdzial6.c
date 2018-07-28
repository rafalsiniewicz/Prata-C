#include<stdio.h>

int main()
{
    float number1, number2;
    printf("Choose two float numbers:\n");
    while(scanf("%f", &number1) == 1 && scanf("%f", &number2) == 1)
        {
            printf("%f\n", (number1-number2)/(number1*number2));
        }
    printf("You didn't choose float number- end of program");
    return 0;
}
