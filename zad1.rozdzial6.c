#include<stdio.h>
#include<stdlib.h>
int random(int min, int max)
{
    int tmp;
    if(max >= min)
        max -= min;
    else
    {
        tmp = min - max;
        min = max;
        max = tmp;
    }
    return max ? (rand() % max + min):min;
}
int main()
{
    char table[26];
    srand(time(NULL));
    for(int i = 0; i < 26; i++)
        table[i] = random(97,123);
    for(int i = 0; i < 26; i++)
        printf("%c", table[i]);
    return 0;
}
