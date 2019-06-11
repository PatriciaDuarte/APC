//Aluna: Patricia Duarte da Silva
//Numero1
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 10

void calcula(float *valores);

main()
{
	setlocale(LC_ALL,"Portuguese");
	float numeros[TAMANHO];
	int i;
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("\nDigite o %d° valor real:",i+1);
		scanf("%f",&numeros[i]);
	}
	calcula(numeros);
	system("pause");
}

void calcula(float *valores)
{
	int i;
	float resultado[TAMANHO];
	printf("\nResultado:\n");
	for(i=0;i<4;i++)
	{
		resultado[i]= valores[i]*valores[i];
		printf("%f\n",resultado[i]);
	}
	
}
