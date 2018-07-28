#include<stdio.h>

int main()
{
    char c;
    char table[30];
    int i = 0;
    printf("Write some text: ");
    scanf("%c", &c);
    while(c != '\n')
        {
            table[i++] = c;
            scanf("%c", &c);
        }
    while(--i >= 0 )
        printf("%c", table[i]);

    return 0;
}
