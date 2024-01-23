#include <stdio.h>
int main()
{
    int p = 5;
    int n;
    int t;
    int s;
    printf(" qunti pezzi ordini\n");
    scanf("%d", &n);
    
    while(n>0)
    {
        if(n>=30 && n<50)
        {
        s = 5*n/10;
        printf(" %d\n", s);
        t = 5*n-s;
        printf("%d\n", t);  
        }
        else if(n>50)
        {
            s = 5*n/100*15;
            printf("%d\n", s);
            t = 5*n-s;
            printf("%d\n",t);
        }
        printf(" qunti pezzi ordini\n");
        scanf("%d", &n);
    }
    
}