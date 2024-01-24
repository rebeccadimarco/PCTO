#include <stdio.h>
int main()
{
    char lettera;
    printf(" inserisci una lettera\n");
    scanf("%c", &lettera);
    if(lettera == 'a'|| lettera == 'e'|| lettera == 'i'|| lettera == 'o'|| lettera == 'u'|| lettera == 'A'|| lettera == 'E'|| lettera == 'I'|| lettera == 'O'|| lettera == 'U')
    {
        printf(" è una vocale");
    }
    else if(0<=lettera && lettera<= 64 || lettera >=91 && lettera<=96 || lettera>= 123 && lettera <= 126)
    {
        printf(" errore");
    }
    else
    {
        printf(" è una consonante");
    }
    return(0);

}