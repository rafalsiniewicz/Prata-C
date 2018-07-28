#include<stdio.h>
double cale_na_centymetry(int cale)
{
    return 2.54 * cale;
}
int main()
{
    int cale;
    printf("Podaj ilosc cali:\n");
    scanf("%d", &cale);
    printf("%d cale/i to %.2lf centymetrow", cale,cale_na_centymetry(cale));
    return 0;
}
