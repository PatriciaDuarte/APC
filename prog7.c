//Nome:Patricia Duarte da Silva
//Exercicio 7

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 50

void imprime (int *vetor);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vet[TAMANHO];
	int i;
	
	for(i=0;i<TAMANHO;i++)
	{
		vet[i] = (i+ 5*i)%(i+ 1);
	}
	imprime(vet);
}

void imprime(int *vetor)
{
	int i;
	for(i=0;i<TAMANHO;i++)
	{
		printf("%d\n",*vetor++);
	}
}

