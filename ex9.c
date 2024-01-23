#include <stdio.h>
int main()
{
    int r;
    int m = 18;
    printf(" inserisci la tua età\n");
    scanf(" %d", &r);
    if (r >= m)
    {
        printf(" è maggiorenne");
    }
    else
    {
        printf(" non è maggiorenne");
    }
    return(0);
}