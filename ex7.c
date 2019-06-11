/*Alunos:Patrícia e Mário
  Exercicio 7
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define TAMANHO 50

struct livro
{
 char titulo[15];
 char autor[20];
 char estilo[10];
 int codigo;
 float preco;
};

// declaração de variáveis
struct livro vetlivro[TAMANHO];
char ch;
 int numlivros = 0; // numero de livros
int i;//contador que vai manipular todas as materias

void media_preco()
{
	float soma;

	for(i=0; i<numlivros; i++)
	{
		soma += vetlivro[i].preco;
	}
	printf("\nMédia: %.2f",soma/numlivros );
	printf("\n\n\n\n");
}

void proc_estilo()
{
	char estlivro[15];

	getchar();
	printf("\nEstilo do livro:");
	fgets(estlivro,50,stdin);								


	for(i=0;i<numlivros;i++)
	{
		if(strcmp(estlivro,vetlivro[i].estilo)==0)
		{
				printf("Título:%s",vetlivro[i].titulo);
				printf("Autor:%s",vetlivro[i].autor);
				printf("Estilo:%s",vetlivro[i].estilo);
				printf("Codigo:%d",vetlivro[i].codigo);
				printf("\nPreço:%f\n\n",vetlivro[i].preco);
		}else
		{
			printf("Estilo não existe na base de dados.\n");
		}					
	}
		
}

void proc_titulo()
{
	char titlivro[15];

	getchar();
	printf("\nTítulo do livro:");
	fgets(titlivro,50,stdin);

		
	for(i=0;i<numlivros;i++)
	{
		if(strcmp(titlivro,vetlivro[i].titulo)==0)
		{
														
				printf("Título:%s",vetlivro[i].titulo);
				printf("Autor:%s",vetlivro[i].autor);
				printf("Estilo:%s",vetlivro[i].estilo);
				printf("Codigo:%d",vetlivro[i].codigo);
				printf("\nPreço:%f\n\n",vetlivro[i].preco);
		}else
		{
			printf("Título não existe na base de dados.\n");
		}
	}	
}

void proc_autor()
{
	char autlivro[15];

	getchar();
	printf("\nNome do autor do livro:");
	fgets(autlivro,50,stdin);

	for(i=0;i<numlivros;i++)
	{
		if(strcmp(autlivro,vetlivro[i].autor)==0)
		{
				printf("Título:%s",vetlivro[i].titulo);    
				printf("Autor:%s",vetlivro[i].autor);
				printf("Estilo:%s",vetlivro[i].estilo);
				printf("Codigo:%d",vetlivro[i].codigo);
				printf("\nPreço:%f\n\n",vetlivro[i].preco);	
		}else	
		{
			printf("\nAutor não existe na base de dados.\n");
		}	
	}
}

void lista_liv()
{
	if(numlivros==0)
	{
		printf("\n\nERRO: Não contém livros na base de dados.\n");
	}else
	{ 	
		printf("\n");
		for(i=0; i<numlivros; i++)
		{
			printf("Livro:%s\n",vetlivro[i].titulo);
			getchar();
		}
	}
}

void incluir_liv()
{
	printf("Digite a quantidade de livros:");
	scanf("%d",&numlivros);

	getchar();
	for(i=0; i<numlivros; i++)
	{
		printf("Título:");
		fgets(vetlivro[i].titulo,50,stdin);

		printf("Autor:");
		fgets(vetlivro[i].autor,50,stdin);
	
		printf("Estilo:");
		fgets(vetlivro[i].estilo,50,stdin);

		printf("Codigo:");
		scanf("%d",&vetlivro[i].codigo);

		printf("Preço:");
		scanf("%f",&vetlivro[i].preco);
		getchar();
		printf("\n\n");
	}
}


void menu()
{
	
	printf(" Digite I para incluir um livro. \n");
	printf(" Digite L para listar o nome de todos os livros. \n");
	printf(" Digite A para procurar livro por autor. \n");
	printf(" Digite T para procurar livro por título. \n");
	printf(" Digite E para procurar livro por estilo. \n");
	printf(" Digite M para calcular a média de preço de todos os livros. \n");
	printf(" Digite S para sair \n");
	scanf("%c",&ch);
	printf("\n\n");
}

// definição da função principal
int main()
{
	char S;
	menu();
	while (ch != 'S')
	{
		switch(ch)
		{
			case 'I': incluir_liv(); break;
			case 'L': lista_liv(); break;
			case 'A': proc_autor(); break;
			case 'T': proc_titulo(); break;
			case 'E': proc_estilo(); break;
			case 'M': media_preco(); break;
		} // fim do switch
		menu();
		
	} // fim do while
} // fim da função main.