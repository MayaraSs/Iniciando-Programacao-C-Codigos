#include <stdio.h>

int main()

{
	int fat;
	int num;

	printf("Insira um valor para o qual deseja calcular seu fatorial: \n");
	scanf("%i", &num);

	for(fat = 1; num > 1; num = num - 1)
	fat = fat * num;

	printf("\n Fatorial: %i", fat);
	return 0;
}
