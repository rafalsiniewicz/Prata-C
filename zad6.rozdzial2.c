#include<stdio.h>
void f()
{
    printf("Usmiech!");
}
int main()
{
    for(int i = 0; i < 3; i++)
        f();
    printf("\n");
    for(int i = 0; i < 2; i++)
        f();
    printf("\n");
    f();

    return 0;
}
