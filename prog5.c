//Aluna:Patrícia Duarte da Silva
//Exercicio 5
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#define TAMANHO 20

void verificaRepeticoes(int *v);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	int vet[TAMANHO]={1,1,23,2,1,23,32,1,234,3,2,2,1,3,2,1,2,1,2,3}; //vetor de entrada
	printf("Gerando valores:\n");
	for(i=0;i<TAMANHO;i++)
	{
		printf("%d\t",vet[i]);
	}
	verificaRepeticoes(vet);
	system("pause");
}

void verificaRepeticoes(int *vetor)
{
	int i,j;//contadores
	int vetorAuxiliar[TAMANHO],n,repete;
	
	for (i = 0; i < TAMANHO; i++) 
	{
    	if (i == 0) 
		{
      		vetorAuxiliar[n] = vetor[i];
      		n++;
    } 	else
		{
      		repete = 0;
      		//percorre o vetor distinto verificando se o valor vetor[i] existe no mesmo
      		for (j = 0; j < n; j++) 
			{
        		if(vetor[i] == vetorAuxiliar[j]) 
				{
        			repete++;
        		}
      		}
      		//se o valor vetor[i] não foi encontrado no vetor distinto, então adiciona
     
	 		if (repete < 1) 
	 		{
        		vetorAuxiliar[n] = vetor[i];
       			n++;// aumenta o tamanho do vetor distinto
      		}
    	}
}
printf("\n\nVetor com valores não repetidos:\n ");
  for (i = 0; i < n; i++)
  {
  	 printf("%d \t", vetorAuxiliar[i]);
  }
   printf("\n");
}
