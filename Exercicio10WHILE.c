//Escrever um algoritmo que calcule todos os n�meros inteiros divis�veis por
//um certo valor indicado pelo usu�rio, e compreendidos em um intervalo
//tamb�m especificado pelo usu�rio.O usu�rio deve entrar com um primeiro
//valor correspondente ao divisor e ap�s ele vai fornecer o valor inicial do
//intervalo, seguido do valor final deste intervalo.Usar o comando While.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int divisor, intervaloINICIO, finalintervalo, resto = 0, soma = 0, inteiros = 0;

int main() {
	printf("Digite o divisor: ");
	scanf_s("%i", &divisor);
	printf("\nDigite numero inicial do intervalo: ");
	scanf_s("%i", &intervaloINICIO);
	printf("\nDigite numero final do intervalo: ");
	scanf_s("%i", &finalintervalo);

	while (intervaloINICIO <= finalintervalo) 
	{
		if (intervaloINICIO % divisor == 0) 
		{
			soma += intervaloINICIO;
			inteiros++;
			
		}
		intervaloINICIO++;
	}
	printf("\nNumeros inteiros: %i", inteiros);
	printf("\nSoma do intervalo: %i", soma);
	
	
}