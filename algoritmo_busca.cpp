/// Universidade Federal de Catalão
/// Marcos Misael da Silva
/// 21/09/2016 2ª Lista Ex 1

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define ARRAYSIZE 100

int binarySearch(int guess, int down, int up, int *array);

int main(void) {
	setlocale(LC_ALL, "");
	
	// Preenche o vetor
	int array[ARRAYSIZE];
	for (int i = 0; i < ARRAYSIZE; i++) {
		array[i] = i;
	}
	
	int guess;
	printf("Digite um valor: ");
	scanf("%d", &guess);
	int a;
	if ((a = binarySearch(guess, 0, ARRAYSIZE, array)) != -1)
		printf ("\nO valor digitado está em: %d\n\n\n", a);
	else
		printf ("O valor não foi encontrado.");
	system("pause");
	return 0;
}

int binarySearch(int guess, int down, int up, int *array) {
	// Quando o valor não é encontrado
	if (down > up)
		return -1;
	
	// Verifica se o valor é maior ou menor e faz novas pesquisas
	int middle = (down + up) / 2;
	if (array[middle] < guess) {
		printf("Valor é maior que o esperado. Buscas continuam de %d até %d\n", middle + 1, up);
		return binarySearch(guess, middle + 1, up, array);
	}
	else if (array[middle] > guess) {
		printf("Valor é menor que o esperado. Buscas continuam de %d até %d\n", down, middle - 1);
		return binarySearch(guess, down, middle - 1, array);
	}
	else
		return middle;	
		
}
