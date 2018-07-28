#include<stdio.h>
#include<string.h>
int main()
{
    char word[30], temp[30];
    printf("Write some word: ");
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++)
        temp[i] = word[i];
    for(int i = 0; i < strlen(word); i++)
        word[i] = temp[strlen(word)-i-1];
    printf("Your word in reverse: %s", word);

    return 0;
}
