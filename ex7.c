//Patricia Duarte da Silva
//Ex7
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 5

void ordena(int *vetor);

void ordena(int *vetor)
{
	int i,j,temp;
	
	for(i=0;i<TAMANHO;i++)
	{
		for(j=(i+1);j<TAMANHO;j++)
		{
			if(*(vetor+j) < *(vetor+i))	
			{
				temp  = *(vetor+i);
				*(vetor+i) = *(vetor+j);
				*(vetor+j) = temp;
			}
		}	
	}
	printf("\nVetor ordenado:\n");
	for(i=0;i<TAMANHO;i++)
	{
		printf("%d  ",*(vetor+i));
	}
	printf("\n\n");
}

main()
{
	int vet[TAMANHO];
	
	setlocale(LC_ALL,"Portuguese")	;
	
	int i;
	for(i=0;i<TAMANHO;i++)
	{
		printf("Entre cm o %d ° valor:",i+1);
		scanf("%d",&vet[i]);
	}
	ordena(vet);
	system("pause");
}
