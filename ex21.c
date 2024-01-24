#include <stdio.h>
void somma(int a, int b, int c)
{
    
    c = a+b;
    printf(" il risultato è: %d\n", c);

}
void sottrazione(int a, int b, int c)
{
    c = a-b;
    printf(" il risultato è: %d\n", c);
}
void moltiplicazione(int a, int b, int c)
{
    c = a*b;
    printf(" il risultato è: %d\n",c);
}
void divisione(int a, int b, int c)
{
    c = a/b;
    printf(" il risultato è: %d\n", c);
}
int main()
{
    int x;
    int y;
    int risultato;
    int operazione;
    printf(" dai un valore a x\n");
    scanf(" %d", &x);
    printf(" dai un valore a y\n");
    scanf(" %d", &y);
    somma(x, y, risultato);
    sottrazione(x, y, risultato);
    moltiplicazione(x, y, risultato);
    divisione(x, y, risultato);
    printf(" che operazione vuoi fare?\n");
    printf(" premere 1 per la somma\n premere 2 per la divisione\n premere 3 per la moltiplicazione\n premere 4 per la divisione\n");
    scanf(" %d", &operazione);
    if(operazione == 1)
    {
        somma(x, y, risultato);
    }
    if(operazione == 2)
    {
        sottrazione(x, y, risultato);
    }
    if(operazione == 3)
    {
        moltiplicazione(x, y, risultato);
    }
    if(operazione == 4)
    {
      divisione(x, y, risultato);  
    }
    

}