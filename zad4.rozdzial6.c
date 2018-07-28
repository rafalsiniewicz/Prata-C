#include<stdio.h>

int main()
{
    char letter, temp;
    printf("Choose letter ");
    scanf("%c", &letter);
    if(letter > 94)
        letter -= 32;
    //printf("%d", letter);
    for(int i = 1; i < letter - 63; i++)
    {
        for(int j = 0; j < letter - 64 - i; j++)
            printf(" ");
        for(int j = 0; j < i; j++)
        {
            printf("%c", 65 + j);
            temp = j;
        }
        for(int j = 0; j < i-1; j++)
            printf("%c", 65 + temp - j - 1);
        printf("\n");
    }

    return 0;
}
