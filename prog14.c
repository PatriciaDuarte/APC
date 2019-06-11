//Aluna:Patricia Duarte da Silva
//14ª questão
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 20

void exibir(int *vetor);

main()
{
	int i,valor[TAMANHO];
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor inteiro:",i+1);
		scanf("%d",&valor[i]);
	}
	exibir(valor);
	system("pause");
}

void exibir(int *vetor)
{
	int par[TAMANHO], impar=0,i;
	int soma = 0;
	
	printf("\n\n");
	for(i=0;i<TAMANHO;i++)
	{
		if ((vetor[i]%2)==0)
		{
			printf("É par:%d , ",vetor[i]);
			soma = soma+vetor[i];	
		}
		
		else{
			printf("É ímpar:%d , ",vetor[i]);
			impar = impar+1;
		} 
		
		
	}
	
	printf("\nSoma dos pares:%d",soma);
	printf("\nQuantidade de impares:%d", impar);
	printf("\n");
}
