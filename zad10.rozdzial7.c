#include<stdio.h>

int main()
{
    int number;
    float sum1 = 0, sum2 = 0, j = 1;
    printf("Choose number ");
    scanf("%d", &number);
    for(int i = 1; i <= number; i++, j++)
    {
        sum1 += 1/j;
        if(i % 2 != 0)
        {
            sum2 += 1/j;
        }
        else if(i % 2 == 0)
        {
            sum2 -= 1/j;
        }
    }
    printf("Sum1= %f\nsum2= %f", sum1, sum2);
    return 0;
}
