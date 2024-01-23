#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf(" inserisci il lato a");
    scanf(" %d", &a);
    printf(" inserisci il lato b");
    scanf(" %d", &b);
    printf(" inserisci il lato c");
    scanf(" %d", &c); 
    if(a+b>c && a+c>b && b+c>a)
    {
        printf(" è un triangolo");
    }
    else
    {
        printf(" non è un triangolo");
    }
    return(0);

}