#include <stdio.h>
int main()
{
    float c;
    float f = 9/5*c+32;
    float k = c+273.15;
    printf(" inserisci i celsius\n");
    scanf("%f", &c);
    printf(" %f\n", f);
    printf(" %f\n", k);
    if(c < -273.15)
    {
        printf(" errore");
    }
    else
    { 
        printf(" non c'è errore");
    }
    return(0);
}