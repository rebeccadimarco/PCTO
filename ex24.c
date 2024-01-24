#include <stdio.h>
int main()
{
    int numero;
    int x;

    printf(" inserisci un numero primo\n");
    scanf(" %d", &numero);
    x = numero-1;
    while(x>=2 && x==numero) 
    {
        if(numero%x == 0 )
        {
            printf(" non è un numero primo");
        }
        else
        {
            printf("  è un numero primo");
        }
        x--;
    }
    

}