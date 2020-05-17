#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,maior,menor;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    printf("Digite o numero 3: ");
    scanf("%d", &num3);


    // Lógica para descobrir o maior número
    if (num1 > num2)
    {
        if(num1 > num3)
            maior = num1;
        else
            maior = num3;
    }
    else
    {
        if(num2 > num3)
            maior = num2;
        else
            maior = num3;
    }

    // Lógica para descobrir o menor número
    if(num1 < num2)
    {
        if(num1 < num3)
            menor = num1;
        else
            menor = num3;
    }
    else
    {
        if(num2 < num3)
            menor = num2;
        else
            menor = num3;
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

}
