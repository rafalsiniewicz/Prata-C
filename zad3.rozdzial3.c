#include<stdio.h>
void signal()
{
    printf("\a");
}
int main()
{
    signal();
    printf("Sally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"");

}
