#include <stdio.h>
int main()
{
    int patente;
    int eta;
    printf(" età per prendere la patente in italia\n");
    scanf("%d", &patente);
    printf(" inserisci la tua età\n");
    scanf("%d", &eta);
    if(eta >= patente)
    {
        printf(" puoi prendere la patente");
    }
    else 
    {
        printf(" non puoi prendere la patente");
    }
    return(0);

}