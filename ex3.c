//Alunos: Mário e Patrícia
//Exercício 3

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

FILE *fp;
char c;

void le()
{
	fp = fopen("arquivo1.txt","r");
	if(fp == NULL)
	{
		printf("ERRO na abertura do arquivo!\n\n");
		system("pause");
		exit(1);
	}else
	{
		printf("Arquivo aberto com sucesso!\n\n");

		c = getc(fp);
		while (!feof(fp))
		{ //Enquanto não se chegar no final do arquivo
			printf("%c\n",c); //Imprime o caracter na tela
			c = getc(fp); // Le um novo caracter no arquivo
		}
	}
}

int main()
{
	le();
	system("pause");
}