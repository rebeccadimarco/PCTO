#include <stdio.h>
int main()
{
    int a;
    printf(" inserisci un anno\n");
    scanf(" %d", &a);
    if(a%100!=0 && a%4==0)
    {
        printf(" l'anno è bisestile");
    }
    else if (a%400==0)
    {
        printf(" l'anno è bisestile");
    }
    else
    {
        printf(" l'anno non è bisestile");
    }
    return(0);
}