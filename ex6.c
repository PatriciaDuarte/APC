/*Alunos: Mário Victor e Patrícia Duarte
  Exercício 6
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define TAMANHO 2 //DEFINE AQUI A QUANTIDADE DE CARROS QUE VAI MANIPULAR

struct carro
{
  char marca[15];
  int ano;
  char cor[10];
  float preco;
};
struct carro vetcarros[TAMANHO];

//Função que le uma marca, ano e cor e informe se existe ou não um carro com essas características, se s informando seus preços.
void compara3()
{
	char mark[15],color[10];
	int year,i;
	printf("\n Aqui nessa função le uma marca, ano e cor e imprime se existe ou não um carro com essas caracteristicas, se s imprime preço...");
	printf("\nForneça uma marca:");
	scanf("%s",mark);
	printf("\nForneça um ano:");
	scanf("%d",&year);
	printf("\nForneça uma cor:");
	scanf("%s",color);

	for(i=0;i<TAMANHO;i++)
	{
		if((mark == vetcarros[i].marca) &&(year == vetcarros[i].ano) &&(color == vetcarros[i].cor))
			{
				printf("\nPreço:%f\n\n",vetcarros[i].preco);  
			}
	}
}

//Função que le a marca de um carro e imprime as informações de todos os carros dessa marca (preço, ano e cor).
void compara2()
{
	int i;
	char mark[15]; 

	printf("\nForneça uma marca:");
	scanf("%s",mark);
	printf("\n\n**Imprimindo as informações dos carros que são dessa marca...**\n");
	for(i=0;i<TAMANHO;i++)
	{
		if(strcmp(mark,vetcarros[i].marca)==0)
		{
			printf("\n\nPreço %f",vetcarros[i].preco);
			printf("\nCor:%s",vetcarros[i].cor);
			printf("\nAno: %d \n\n",vetcarros[i].ano);
			
		}
	}
}

//Função que recebe um preço e imprime os carros(marca,cor e ano) que tenham preço == ou < ao preço
void compara1()
{
	int i;
	float price;

	printf("Forneça um preço:");
	scanf("%f",&price);
	printf("\n\n**Imprimindo carros com preço menor ou igual ao preço fornecido...**\n");
	for(i=0;i<TAMANHO;i++)
	{
		if((price==vetcarros[i].preco) || (price < vetcarros[i].preco)) /*PROBLEMA AQUI*/
		{
			printf("\n\nMarca: %s",vetcarros[i].marca);
			printf("\nCor:%s",vetcarros[i].cor);
			printf("\nAno: %d",vetcarros[i].ano);
			printf("\n\n");
			
		}
	}

}

//Função que faz a leitura dos dados
void leVetCarros()
{	
	printf("\n ** FAZENDO A LEITURA DOS DADOS..**\n");
	int i;//contador
	for(i=0;i<TAMANHO;i++)
	{
		printf("Marca:");
		scanf("%s",vetcarros[i].marca);
		printf("Ano:");
		scanf("%d",&vetcarros[i].ano);
		printf("Cor:");
		scanf("%s",vetcarros[i].cor);
		printf("Preco:");
		scanf("%f",&vetcarros[i].preco);
		printf("\n\n");
	}
}

int main()
{
  setlocale(LC_ALL,"Portuguese");
  leVetCarros();
  compara1();
  compara2();
  compara3();
  return 0;
}
