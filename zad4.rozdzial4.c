#include<stdio.h>

int main()
{
    float height;
    char name[20];
    printf("What's your name? ");
    scanf("%s", name);
    printf("How tall are you, %s (in cm)? ", name);
    scanf("%f", &height);
    printf("%s you are %.2fm tall", name, height/100);
    return 0;
}
