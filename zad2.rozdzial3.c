#include<stdio.h>

int main()
{
    int code_ascii;
    printf("Podaj kod ASCII:\n");
    scanf("%d", &code_ascii);
    printf("Znak odpowiadajacy kodowi ASCII %d to %c", code_ascii, code_ascii);

    return 0;
}
