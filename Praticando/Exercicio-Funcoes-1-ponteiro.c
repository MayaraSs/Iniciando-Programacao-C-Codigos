/*CRIE UMA FUNÇÃO QUE RECEBA DOIS NUMEROS E RETORNE O MAIOR VALOR*/
#include <stdio.h>
main()

{
    int a,b,r;
    int *pa=&a;
    int *pb=&b;
    int *pr=&r;

    printf("Informe o valor de A: ");
    scanf("%i",&*pa);
    printf("Endereco:%d\t Valor:%d\n",pa,*pa); // sem o * é o endereço e com o * é o valor de P


    printf("\n\nInforme o valor de B: ");
    scanf("%i",&*pb);
    printf("Endereco:%d\t Valor:%d", pb,*pb);

    *pr=maior(*pa,*pb);
    printf("\n\nO maior valor e: %i",*pr);
    printf("\nEndereco:%d\t Valor:%d\n",pr,*pr);
}
int maior(int a, int b)
{
    if (a>b)
        return (a);
    else
        return (b);
}
