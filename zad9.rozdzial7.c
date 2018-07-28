#include<stdio.h>

int main()
{
    const int size = 8;
    int tab[size];
    printf("Write %d numbers to the table\n", size);
    for(int i = 0; i < size; i++)
        scanf("%d", &tab[i]);
    printf("Your table in reverse order\n");
    for(int i = 0; i < size; i++)
        printf("%d ", tab[size-i-1]);
    return 0;
}
