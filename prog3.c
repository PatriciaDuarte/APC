//Aluna:Patricia Duarte da Silva
//3ª questão
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 10

void compara(int *vetor);

main()
{
	int i,valor[TAMANHO];
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor inteiro:",i+1);
		scanf("%d",&valor[i]);
	}
	compara(valor);
	system("pause");
}

void compara(int *vetor)
{
	int par=0, impar=0,i;
	for(i=0;i<TAMANHO;i++)
	{
		if ((vetor[i]%2)==0)
			par = par+1;
		else impar = impar+1;
	}
	printf("\nNumeros de pares:%d",par);
	printf("\nNumeros de impares:%d", impar);
	printf("\n");
}
