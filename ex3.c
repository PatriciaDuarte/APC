/*
	Exercicio 3:
	Alunos:Patrícia e Mário Victor
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define PRINCIPAL 6 
#define RESERVA 4

int i;
struct jogadores
{
	char nome[30];
	int idade;
	char posicao[20];
	int numero_camisa;
}jogadores1[PRINCIPAL],jogadores2[RESERVA];	

int menu(void)
{
	char s[10];
	int c;
	do{
		printf("\n\n**Entre com sua escolha de jogadores:**");
		printf("\n1. Principal");
		printf("\n2. Reservas");
		printf("\n3. Sair\n");
		gets(s);
		c = atoi(s);
	}while(c<0||c>3);
	printf("\n\n");
	return c;
}
	
void jogadoresPrincipais()
{
	printf("\n**JOGADORES PRINCIPAIS:**");
	for(i=0;i<PRINCIPAL;i++ )
	{
		
		printf("\nEntre com o nome:");
		gets(jogadores1[i].nome);
		printf("\nEntre com a posição no time:");
		gets(jogadores1[i].posicao);
		printf("\nEntre com a idade:");
		scanf("%d",&jogadores1[i].idade);
		printf("\nEntre com o numero da camisa:");
		scanf("%d",&jogadores1[i].numero_camisa);
		printf("\n__________________________________________________");
		fflush(stdin);
	}
	
}
void jogadoresReserva()
{
	printf("\n**JOGADORES RESERVAS:**");
	for(i=0;i<RESERVA;i++ )
	{
		printf("\nEntre com o nome:");
		gets(jogadores2[i].nome);
		printf("\nEntre com a posição no time:");
		gets(jogadores2[i].posicao);
		printf("\nEntre com a idade:");
		scanf("%d",&jogadores2[i].idade);
		printf("\nEntre com o numero da camisa:");
		scanf("%d",&jogadores2[i].numero_camisa);
		printf("\n__________________________________________________");
		fflush(stdin);
	}
}

void mostraListaPrincipal()	
{
	for(i=0;i<PRINCIPAL;i++)
	{
		printf("\n Nome: %s",jogadores1[i].nome);
		printf("\n Idade: %d",jogadores1[i].idade);
		printf("\n Posição: %s",jogadores1[i].posicao);
		printf("\n Numero da camisa: %d",jogadores1[i].numero_camisa);
		printf("\n__________________________________________________");
	}


}

void mostraListaReserva()	
{
	for(i=0;i<RESERVA;i++)
	{
		printf("\n\n Nome: %s",jogadores2[i].nome);
		printf("\n Idade: %d",jogadores2[i].idade);
		printf("\n Posição: %s",jogadores2[i].posicao);
		printf("\n Numero da camisa: %d",jogadores2[i].numero_camisa);
		printf("\n__________________________________________________");
	}
	
	
	
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int choice;
	for(;;)
	{
		choice = menu();
		switch(choice)
		{
			case 1: 
					jogadoresPrincipais();
					printf("\n\n\t**Lista de jogadores principais**:\n");
					printf("\n__________________________________________________");
					mostraListaPrincipal();
			break;
			case 2:
					jogadoresReserva();
					printf("\n\n\t**Lista de jogadores reservas:**\n");
					printf("\n__________________________________________________");
					mostraListaReserva();
			break;
			case 3:
				exit(0);
		}
	}
	system("pause");
}
