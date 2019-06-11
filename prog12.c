#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

#define TAMANHO 3

void desviopadrao(float *vetor,float *media,float *desvio);

void desviopadrao(float *vetor,float *media,float *desvio)
{
	int i;
 	*media = 0.0;
 	*desvio = 0.0;
	
	for(i=0;i<TAMANHO;i++)
	{
		*media = *media + vetor[i];
	}
	*media = *media/TAMANHO;
	
	for(i=0;i<TAMANHO;i++)
	{
		*desvio = *desvio + pow(vetor[i]-*media,2);
	}
	*desvio = sqrt(*desvio/(TAMANHO));
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float vet[TAMANHO];
	float media,desvio;
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor decimal:",i+1);
		scanf("%f",&vet[i]);
	}
	 desviopadrao(vet,&media,&desvio);
	 printf("\nDesvio padrão:%f\n\n",desvio);
	 
	system("pause");
}
