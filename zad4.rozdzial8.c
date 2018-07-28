#include<stdio.h>

int main()
{
    char c;
    char tab[50];
    int i = 0, j = 0;;
    printf("Write some text below:\n");
    scanf("%c", &c);
    tab[j++] = c;
    while(c != '#')
    {
        tab[j] = c;
        scanf("%c", &c);
        j++;
    }
    tab[j] = '#';
    printf("Here is your text after changes:\n");
    j = 0;
    while(tab[j++] != '#')
        {
            if(tab[j] == '!')
                {
                    printf("!!");
                    i++;
                }
            else if(tab[j] == '.')
                {
                    printf("!");
                    i++;
                }
            else
                printf("%c", tab[j]);
        }
    printf("\nThere are %d changes", i);
    return 0;
}
