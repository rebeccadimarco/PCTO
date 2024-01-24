#include <stdio.h>
int main()
{
    int latoa;
    int latob;
    int latoc;
    int perimetro;
    int area;
    int altezza;
    printf(" inserisci un lato\n");
    scanf(" %d", &latoa);
    printf(" inserisci un altro lato\n");
    scanf(" %d", &latob);
    printf(" inserisci un altro lato\n");
    scanf(" %d", &latoc);
    printf(" inserisci l'altezza\n");
    scanf(" %d", &altezza);
    perimetro=latoa+latob+latoc;
    printf("il perimetro è: %d\n", perimetro);
    area=latoa*altezza/2;
    printf(" l'area è: %d\n", area);
    return(0);
    }