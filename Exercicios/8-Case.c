#include <stdio.h>
#include <stdlib.h>

// switch
#include <stdio.h>

int main ()
{
int n;

printf ("\n Digite um numero inteiro de 1 ate 5: ");
scanf ("%i", &n);
 switch (n)
 {
 case 1:
    printf ("\n Um \n");
    break;
 case 2:
    printf ("\n Dois \n");
    break;
 case 3:
    printf ("\n Tres \n");
    break;
case 4:
    printf ("\n Quatro \n");
    break;
case 5:
    printf ("\n Cinco \n");
    break;
 default:
    printf ("\n Numero invalido! \n");

 }
 return 0;
}
