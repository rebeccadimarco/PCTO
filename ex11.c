#include <stdio.h>
int main()
{
  int x;
  int y;
  int z;
  printf(" inserisci il primo numero\n");
  scanf(" %d", &x);
  printf(" inserisci il secondo numero\n");
  scanf(" %d", &y);
  z = x%y;
  if(z == 0)
  {
    printf(" x è multiplo di y");
  }
  else
  {
    printf(" x non è multiplo di y");
  }
  return(0);

}