#include <stdio.h>
int main()
{
    int x;
    int y;
    printf(" inserisci il primo numero\n");
    scanf(" %d", &x);
    printf(" inserisci il secomdo numero\n");
    scanf(" %d", &y);
    if(x > y)
    {
        printf(" x è maggiore di y");
    }
    else if (x == y)
    {
        printf(" x è uguale a y\n");
    }
    else
    {
        printf(" x è minore di y");
    }
    return(0);
}