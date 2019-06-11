//Nome:Patrícia Duarte da Silva
//Exercicio 8

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 10

void busca(int *vetor1, int *vetor2);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	int vetor1[TAMANHO],vetor2[TAMANHO];
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor para o 1° vetor:",i+1);
		scanf("%d",&vetor1[i]);
	}
	printf("\n\n");
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor para o 2° vetor:",i+1);
		scanf("%d",&vetor2[i]);
	}
	
	busca(vetor1,vetor2);
	
	system("pause");
}
void busca(int *vetor1,int *vetor2)
{
	int aux[TAMANHO],i;
	for(i=0;i<=TAMANHO;i++)
	{
		if(i%2==0)
		{
			aux[i] = vetor1[i];
	    	printf("\n%d",aux[i]);	
		}
		else
		{
			aux[i] = vetor2[i];
			printf("\n%d",aux[i]);
		}
		
	}
}

