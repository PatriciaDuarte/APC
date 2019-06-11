//Nome:Patricia Duarte da Silva
//4º exercicio
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 10

void busca(int *vet);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[TAMANHO],i;
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor:",i+1);
		scanf("%d",&vetor[i]);
	
	}
	busca(vetor);
	system("pause");
}
void busca(int *vet)
{ 
	int maior,i,menor, posi1,posi2;
	
	//Busca valor maior
	maior = vet[0];
	for(i=0;i<TAMANHO;i++)
	{
		if(vet[i]>maior)
		{
			maior = vet[i];
		 	posi1 = i;
		}
	}
	printf("\nMaior:%d",maior);
	printf("\nPosição do maior no vetor: %dª",posi1);
	
	//Busca valor menor
	menor = vet[0];
	for(i=0;i<TAMANHO;i++)
	{
		if(vet[i]<menor)
		{
			menor = vet[i];
		 	posi2 = i;
		}	
	}
	printf("\nMenor:%d",menor);
	printf("\nPosição do menor no vetor: %dª",posi2);
	printf("\n");
}
