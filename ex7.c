#include <stdio.h>
int main()
{
  int m;
  int r;
  int g;
  int e;
  int o;
  printf(" inserisci l'età di marta\n");
  scanf  ("%d", &m);
  printf(" inserisci l'età di rebecca\n");
  scanf("%d", &r);
  printf(" inserisci l'età di giulia\n");
  scanf("%d", &g);
  printf(" inserisci l'età di eleonora\n");
  scanf("%d", &e);
  printf(" inserisci l'età di giorgia\n");
  scanf("%d", &o);
  int A = m+r+g+e+o;
  printf(" la somma dell' età è\n");
  printf("%d", A);
  printf(" l'età di marta è\n");
  scanf("%d", &m);
  printf(" l'età di rebecca è\n");
  scanf(" %d", &r);
  printf(" l'età di giulia è\n");
  scanf(" %d", &g);
  printf(" l'età di eleonora è\n");
  scanf(" %d", &e);
  printf(" l'età di giorgia è\n");
  scanf(" %d", &o);
}