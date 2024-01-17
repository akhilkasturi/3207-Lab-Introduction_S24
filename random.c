#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();
int main()
{
    printf("%c",randchar());
}
char randchar(){
    srand(time(NULL));
    char c;
    c = (rand()%(90-65))+65;
    return c;
}