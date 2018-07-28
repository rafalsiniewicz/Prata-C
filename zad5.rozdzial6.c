#include<stdio.h>

int main()
{
    int min, max;
    printf("Choose lower number ");
    scanf("%d", &min);
    printf("Choose upper number ");
    scanf("%d", &max);
    printf("Table:\n");
    printf("Digit\tdigit^2\t digit^3\n");
    for(int i = min; i <= max; i++)
    {
        printf("%d\t%d\t %d\n", i, i*i, i*i*i);
    }
    return 0;
}
