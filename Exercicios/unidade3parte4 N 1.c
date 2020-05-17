#include <stdio.h>

int main()
{
	int n1;
	int n2;

	total = 0;
	gradeCounter = 1;
	contador = -1;

	while (nota != -1)
	{
		printf("\n Forneca a nota %i ou (-1) para finalizar \n", gradeCounter);
		scanf("%i", &n1);

		if(nota %2 == 0)
		{
				if ( n1 > n2 )
					{printf ("%f", n1);}
				else
					{printf ("%f", n2);}

		}
		else
		{
			contador ++;
			printf ("\n Numero invalida! \n");
		}
	}

	media = total / gradeCounter;
	printf("\n Voce fez %i tentativas erradas \n", contador);
	printf("\n Media = %.2f \n", media);
	scanf("%i", &media);

	return 0;
}
