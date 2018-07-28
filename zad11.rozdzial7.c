#include<stdio.h>

int main()
{
    int table[8] = {1,1,1,1,1,1,1,1}, k = 0;
    for(int i = 0, j = 1; i < 8; i++, j *= 2)
        table[i] *= j;
    printf("Your table: \n");
    printf(" -----------------------------------------------\n");
    printf("|");
    for(int i = 1; i < 9; i++)
        printf("2^%-2d| ", i);
    printf("\n -----------------------------------------------\n");
    printf("|");
    do
    {
        printf("%-3d | ", table[k]);
        k++;
    }while(k < 8);
    printf("\n -----------------------------------------------\n");

    return 0;
}
