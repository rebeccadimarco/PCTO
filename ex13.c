#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf(" dai un valore ad a\n");
    scanf("%d", &a);
    printf(" dai un valore a b\n");
    scanf(" %d", &b);
    printf(" dai un valore a c\n");
    scanf(" %d", &c);
    if(b-a == c-b)
    {
        printf(" è una progressione aritmetica");
    }
    else
    {
        printf(" non è una progressione aritmetica");
    }
    return(0);
}