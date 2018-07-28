#include<stdio.h>

int main()
{
    char table[50];
    int i = 0;
    printf("Write some text below:\n");
    scanf("%c", &table[i++]);
    if(table[0] != '#')
    {
        while(table[i++] != '#')
        {
            scanf("%c", &table[i]);
        }
    }
    for(int j = 0; table[j] != '#'; j++)
        for(int k = j + 1; table[k] != '#'; k++)
            if(table[k] != 0 && table[k] == table[j])
                table[k] = 0;
    for(int j = 0; j < i; j++)
    {
        if(j != 1)
        {
            if(table[j] == ' ')
                printf("space (%d) ", table[j]);
            else if((int)(table[j]) == 10)
                printf("\\n (10) ");
            else if((int)(table[j]) == 0)
                printf("\\n (10) ");
            else
                printf("%c (%d) ", table[j], table[j]);
            if(!(j % 8) && j)
                printf("\n");
        }
    }
    return 0;
}
