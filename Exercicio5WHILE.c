//Faça um algoritmo que receba dois números X e Y, sendo X < Y.Calcule e
//	mostre :
//• a soma dos números pares desse intervalo de números, incluindo os
//números digitados;
//• a multiplicação dos números ímpares desse intervalo, incluindo os
//digitados;
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int x, y;
long double soma = 0, multi = 1;


int main()
{

	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor de X:  ");
	scanf_s("%i", &x);

	printf("Digite o valor de Y:  ");
	scanf_s("%i", &y);

	if (x > y) {
		printf("\nValor de X deve ser menor que valor de Y\n");
		printf("\nDigite valor de X: ");
		scanf_s("%i", &x);

		printf("\nDigite valor de Y: ");
		scanf_s("%i", &y);
	}

	while (x <= y)
	{

		if (x % 2 == 0)
		{
			soma = soma + x;
		}
		else
		{
			multi = multi * x;
		}
		x++;
	}

	printf("\nSoma dos pares é: %.2lf", soma);
	printf("\nMultiplicação dos números impares é: %.2lf", multi);


}
