#include<stdio.h>
float ewa(int money, int procent)
{

}
int main()
{
    int i = 0;
    float kasia = 100, ewa = 100;
    while(kasia <= ewa)
    {
        ewa += 10;
        kasia *= 1.05;
        i++;
    }
    printf("Kasia will have more money than Ewa after %d years."
           " Kasia's amount of money = %.2f, Ewa's amount of money = %.2f", i, kasia, ewa);



    return 0;
}
