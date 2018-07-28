#include<stdio.h>

int main()
{
    char name[20];
    char surname[30];
    printf("What's your name? ");
    scanf("%s", name);
    printf("What's your surname? ");
    scanf("%s", surname);
    printf("Surname: %s\nName: %s", name, surname);

    return 0;
}
