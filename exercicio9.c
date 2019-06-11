//Autora:Patrícia Duarte da Silva
//Exercicio 9
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 15 // 15 elem

void armazena(float *vet1, float *vet2);
float escalar(float *vet1,float *vet2);
void imprimir(float *vet1, float *vet2);

void imprimir(float *vet1, float *vet2)
{
   armazena(vet1,vet2);
   printf("\n\nEscalar: %f",escalar(vet1,vet2));
}


void armazena(float *vet1, float *vet2)
{
	float vetAux1[TAMANHO],vetAux2[TAMANHO];
	int i;
	printf("\nIMPRIMINDO VETORES!\n");
	printf("\n 1ºconjunto:\n ");
	for(i=0;i<TAMANHO;i++)
	{
		//Aqui Armazena em vetores
	    printf("\n%f",vetAux1[i]=vet1[i]);
	}
	printf("\n \n2ºconjunto:\n ");
	for(i=0;i<TAMANHO;i++)
	{
		printf("\n%f",vetAux2[i]=vet2[i]);
	}
	
}

float escalar(float *vet1, float *vet2)
{
	float escalar;
	int i;
	for(i=0;i<TAMANHO;i++)
	{
	 escalar = escalar +(vet1[i]*vet2[i]); //Realiza calculo do produto escalar
	}
	return escalar;
}
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float conjunto1[TAMANHO],conjunto2[TAMANHO] ;
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor pro 1° conjunto:",i+1);
		scanf("%f",&conjunto1[i]);
	}
	
	printf("\n\n");
	
		for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor pro 2° conjunto:",i+1);
		scanf("%f",&conjunto2[i]);
	}
	imprimir(conjunto1,conjunto2);
}

