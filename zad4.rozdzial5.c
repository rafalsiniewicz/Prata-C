#include<stdio.h>

int main()
{
    int number, sum = 0;
    printf("Choose number ");
    scanf("%d", &number);
    for(int i = 1; i < number+1; i++)
        sum += i;
    printf("Sum of numbers from 1 to %d equals %d", number, sum);
    return 0;
}
