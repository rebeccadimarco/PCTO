#include <math.h>
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int x1;
    int x2;
    double d;
    double radice = sqrt(d);
    
    printf(" inserisci a\n");
    scanf(" %d", &a);
    printf(" inserisci b\n");
    scanf(" %d", &b);
    printf(" inserisci c\n");
    scanf(" %d", &c);
    d = b*b-4*a*c;
    printf(" il delta è: %f\n", d);
    printf(" la radice di %.2f, è: %.2f", d, sqrt(d));
    x1 = (-b + sqrt(d))/2*a;
    x2 = (-b - sqrt(d))/2*a;
    
    if(d > 0)
    {
        x1 = (-b + sqrt(d))/2*a;
        printf(" x1 è: %d\n", x1);
        x2 = (-b - sqrt(d))/2*a;
        printf(" x2 è: %d\n", x2);
    }
    if(d == 0)
    {
        x1=x2;
        printf(" x1 è: %d\n", x1);
        x2=x1;
        printf(" x2 è: %d\n", x2);
    }
    if(d < 0)
    {
        printf(" è impossibile");
    }
    
    return(0);

    }