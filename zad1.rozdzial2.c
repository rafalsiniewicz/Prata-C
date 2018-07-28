#include<stdio.h>
void f1()
{
    printf("Rafal Siniewicz\n");
}
void f2()
{
    printf("Rafal\nSiniewicz\n");
}
void f3()
{
    printf("Rafal ");
    printf("Siniewicz\n");
}

int main()
{
    f1();
    f2();
    f3();
    return 0;
}
