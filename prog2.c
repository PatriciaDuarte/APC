//Nome:Patrícia Duarte da Silva
//Numero 2
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 8
typedef int bool;
#define true 1
#define false 0

void busca(int *vetor,int numero1,int numero2);

main()
{
	setlocale(LC_ALL,"Portuguese");
	int valor[TAMANHO],i,num1,num2;
	
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor inteiro:",i+1);
		scanf("%d",&valor[i]);	
	}	
	printf("Digite o primeiro valor que irá ser buscado:");
	scanf("%d",&num1);
	printf("Digite o segundo valor que irá ser buscado:");
	scanf("%d",&num2);
	busca(valor,num1,num2);
	system("pause");
}
void busca(int *vetor,int numero1,int numero2)
{
	int posi1,posi2;
	bool aux1,aux2;
	int i;
	
	for(i=0;i<TAMANHO;i++)
	{
		if(vetor[i]==numero1)
		{
			posi1 = i;
			aux1=true;
		}
	}
	for(i=0;i<TAMANHO;i++)
	{
		if(vetor[i]==numero2)
		{
			posi2=i;
			aux2=true;
		}
	}
	if(aux1==true || aux2 ==true )
	{
		printf("\nSoma:%d+%d=%d",numero1,numero2,vetor[posi1]+vetor[posi2]);
		printf("\nPosições: [%dª] e [%dª]",posi1,posi2);
		printf("\n");
	}else
	if(aux1==false||aux2 ==false)
	{
		printf("\n ATENÇÃO: Um dos valores de busca não está no vetor!\n");
	}
	
}
