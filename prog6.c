//Aluna:Patrícia Duarte da Silva
//Exercicio 6
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 2

void verifica(float *numero, int *code);

main()

{
	float num[TAMANHO];
	int i,codigo[TAMANHO];//contador
	
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° numero real:",i+1);
		scanf("%f",&num[i]);
		printf("Codigo[entre 0 e 2]:");
		scanf("%d",&codigo[i]);
	}
	verifica(num,codigo);
	
	system("pause");
}
void verifica(float *numero, int *code)
{
	int i;
	for(i=0;i<TAMANHO;i++)
	{
		if (code[i] == 0)
		{
			printf("\nSaindo do programa..");
			system("pause");
		}	
		else if(code[i]==1)
		{
			printf("\n\nImprimindo vetor na ordem direita:\n ");
			for(i=0;i<TAMANHO;i++)	
			{
				printf("%f\n",numero[i]);
			}
		}
		else if(code[i] == 2 )
		{
			printf("\n\nImprimindo vetor na ordem inversa:\n ");
			for(i=TAMANHO;i>0;i--) //ARRUMAR ESSA LINHA DE CODIGO
			{
				printf("%f\n",numero[i]);
			}	
		}
		else if(code[i]!= 1 && code[i]!=2 && code != 0)
		{
			printf("\n\n*******Codigo inválido!*******\n\n");
		}
}
	
	
}
