#include<stdio.h>

int main()
{
    int number;
    printf("Take some number ");
    scanf("%d", &number);
    for(int i = number; i <= number+10; i++)
        printf("%d ", i);


    return 0;
}
