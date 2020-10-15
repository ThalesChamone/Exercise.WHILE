//Ler um número inteiro n.Decidir se n é um número primo e apresente o
//resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, n, resto = 0;

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite valor de N: ");
	scanf_s("%i", &n);

	while (i <= n) 
	{
		i++;
		if (n % i == 0)
		{
			resto++;
		}
	}
	
	if (resto == 2)
	{
		printf("O número %i é primo", n);
		
	}
	else printf("O número %i não é primo", n);
}