/*Fa�a um programa que leia dez conjuntos de dois valores, utilizando matriz, o primeiro
representando o n�mero do aluno e o segundo representando a sua altura em metros. Em
uma fun��o busca() encontre o aluno mais baixo e o mais alto. Mostre o n�mero do aluno
mais baixo e do mais alto, juntamente com suas alturas. Utilize ponteiro para manipular os
dados da matriz na fun��o busca().*/


//PROBLEMA NA QUEST�O
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAT1 2
#define MAT2 2

void busca(int numero[MAT1][MAT2], float altura[MAT1][MAT2]);

void busca(int numero[MAT1][MAT2], float altura[MAT1][MAT2])
{
	int i,j;//contadores
	float maiorAltura,menorAltura=0.0;
	int auxiliar1,auxiliar2;
	
	menorAltura=altura[0][0];
    maiorAltura=altura[0][0];
	
	for(i=0;i<MAT1;i++)
	{	for(j=0;j<MAT2;j++)
		{
			if(altura[i][j]>=maiorAltura)
			{
				maiorAltura = altura[i][j];
				auxiliar1 = numero[i][j];
			}
			if(altura[i][j]<=menorAltura)
			{
				menorAltura = altura[i][j];
				auxiliar2 = numero[i][j];
			}
		}
	}
	
 	printf("\n\nAltura do maior aluno:%.3f\n Numero do maior aluno: %d\n",maiorAltura,auxiliar1);
	printf("\n\nAltura do menor aluno:%.3f\n Numero do menor aluno: %d\n",menorAltura,auxiliar2);

}
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,j;
	int numero[MAT1][MAT2];
	float altura[MAT1][MAT2];
	
	for(i=0;i<MAT1;i++)
		for(j=0;j<MAT2;j++)
		{
			printf("Digite o n�mero do aluno em inteiro:");
			scanf("%d",&numero[i][j]);
		}
	printf("\n\n");
	for(i=0;i<MAT1;i++)
		for(j=0;j<MAT2;j++)
		{
			printf("Digite a altura do aluno em metros:");
			scanf("%f",&altura[i][j]);
		}
	
	busca(numero,altura);
	system("pause");
}
