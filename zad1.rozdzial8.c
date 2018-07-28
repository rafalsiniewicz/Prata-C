#include<stdio.h>

int main()
{
    char c;
    int space = 0;
    int new_line = 0;
    int other = 0;
    printf("Write some text\n");
    scanf("%c", &c);
    while(c != '#')
        {
            switch(c)
                {
                    case ' ': space++;
                    break;
                    case '\n': new_line++;
                    break;
                    default: other++;
                }
            scanf("%c", &c);
        }
        printf("There was %d spaces, %d new lines and %d other characters", space, new_line, other);
    return 0;
}
