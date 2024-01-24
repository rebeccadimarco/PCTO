#include <stdio.h>
int main()
{
    int latoa;
    int latob;
    int latoc;
    printf(" inserisci un lato\n");
    scanf(" %d", &latoa);
    printf(" inserisci il secondo lato\n");
    scanf("%d", &latob);
    printf(" inserisci il terzo lato\n");
    scanf(" %d", &latoc);
    while(latoa+latob>latoc && latob+latoc>latoa && latoa+latoc>latob)
    {
    if(latoa == latob && latoa != latoc && latoc != latob || latoa == latoc && latoa != latob && latob != latoc || latob == latoc && latob != latoa && latoa != latoc)
    {
        printf(" è un triangolo isoscele");
    }
    else if(latoa == latob && latob == latoc && latoa == latoc)
    {
        printf(" è un triangolo equilatero");
    }
    else if(latoa != latob && latob != latoc && latoa != latoc)
    {
        printf(" è un triangolo scaleno");
    }
    }
    

}