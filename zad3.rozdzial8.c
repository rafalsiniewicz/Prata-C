#include<stdio.h>

int main()
{
    int number, even = 0, odd = 0;
    double e_sum = 0, o_sum = 0;
    printf("Write some numbers (0 will end program):\n");
    scanf("%d", &number);
    while(number)
    {
        if(number % 2)
        {
            odd++;
            o_sum += (double)number;
        }
        else
        {
            even++;
            e_sum += (double)number;
        }
        scanf("%d", &number);
    }
    printf("There were %d even numbers with average = %.2f and %d odd numbers with average = %.2f",
           even + 1, e_sum/even, odd, o_sum/odd);

    return 0;
}
