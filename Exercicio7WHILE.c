//Fazer um algoritmo que calcule e exiba na tela o fatorial de um n�mero
//fornecido pelo usu�rio, usando o comando While.Repetir a execu��o do
//algoritmo tantas vezes quantas o usu�rio quiser.Lembre - se que o resultado
//do c�lculo de um fatorial pode ser um n�mero �grande�

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>

int i;
double n, n1, fat;

int main() {

	while (n >= 0) {

		printf("\n\nDigite um numero para saber seu fatorial: ");
		scanf_s("%lf", &n1);

		for (fat = 1; n1 > 1; n1--)
		{
			fat = fat * n1;

			printf("\nFatorial calculado: %.2lf", fat);
		}

	}

	
}
