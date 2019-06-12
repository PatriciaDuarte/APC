//Autora:Patrícia Duarte da Silva -201514322
#include<stdio.h>  
#include<stdlib.h> 
#define TAMANHO 10 
void selecao(int vetor[], int tamanho); //Declaração da função 

void selecao(int vetor[], int tamanho)
 {
	int posMinimo;
	for (int i = 0; i<(TAMANHO-1); i++)
	{
		int minimo = vetor[i];
		for (int j = (i + 1); j < TAMANHO; j++)
		{
			if (vetor[j]< minimo)
			{
				minimo = vetor[j];
				posMinimo = j;
			}
		}
		vetor[posMinimo] = vetor[i];
		vetor[i] = minimo;
	}
}
int main() 
{
	int vetor[TAMANHO];
	for(int i= 0; i<TAMANHO; i++)
	{
		vetor[i] =(rand()%TAMANHO);
		printf("Vetor[%d]: %d\n", (i + 1), vetor[i]);
	}
	selecao(vetor, TAMANHO);
	for (int i=0; i < TAMANHO; i++)
		printf("\nVetor[%d]: %d", (i + 1),vetor[i]);
	return 0;
}


