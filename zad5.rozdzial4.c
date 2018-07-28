#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    char surname[30];
    printf("What's your name? ");
    scanf("%s", name);
    printf("What's your surname? ");
    scanf("%s", surname);
    printf("%*s %*s\n", strlen(name), name, strlen(surname), surname);
    printf("%*d %*d", strlen(name), strlen(name), strlen(surname), strlen(surname));
    printf("\n______________________________________\n");
    printf("%*s %*s\n", strlen(name), name, strlen(surname), surname);
    printf("%-*d %-*d", strlen(name), strlen(name), strlen(surname), strlen(surname));

    return 0;
}
