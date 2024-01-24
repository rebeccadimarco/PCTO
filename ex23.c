#include <stdio.h>
void minore(int a, int b)
{
    b = 1969-a;
    printf("sei più piccolo del 1969 di: %d", b);
}
void maggiore(int a, int b)
{
    b = a-1969;
    printf(" sei più grande del 1969 di: %d", b);
}
int main()
{
    int annon;
    int diffa;
    printf(" inserisci il tuo anno di nascita\n");
    scanf(" %d", &annon);
    if(annon>1969)
    {
        maggiore(annon, diffa);
    }
    else if(annon<1969)
    {
        minore(annon, diffa);
    }
    else if(annon == 1969)
    {
        printf(" sei nato nello stesso anno del viaggio sulla luna");
    }
    else if(annon)
}