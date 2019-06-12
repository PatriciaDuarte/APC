//Autora: Patrícia Duarte da Silva - 201514322
#include<stdio.h> 
#include<stdlib.h> 
#define TAMANHO 10

void insercao(int vetor[], int tamanho);//Declaração da função inserção

void insercao(int vetor[], int tamanho)
{
	for (int i = (tamanho - 1); i >= 0; i--) 
		for (int j = i; j >= 0; j--)
			if (vetor[i] < vetor[j])
			{
				int aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
}
int main()
{
	int vetor[TAMANHO];
	for (int i = 0; i < TAMANHO; i++)
	{
		vetor[i] = (rand() % TAMANHO);
		printf("Vetor[%d]: %d\n", (i + 1), vetor[i]);
	}
	insercao(vetor, TAMANHO);
	for (int i = 0; i < TAMANHO; i++)
		printf("\nVetor[%d]: %d", (i + 1), vetor[i]);
	return 0;
}


