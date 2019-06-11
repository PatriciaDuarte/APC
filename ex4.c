/*
	Exercicio 4:
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
}jogadores1,jogadores2;	



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
	
void jogadoresPrincipais(struct jogadores *p1)
{
	printf("\n**JOGADORES PRINCIPAIS:**");
	for(i=0;i<PRINCIPAL;i++ )
	{
		
		printf("\nEntre com o nome:");
		gets(p1->nome);
		printf("\nEntre com a posição no time:");
		gets(p1->posicao);
		printf("\nEntre com a idade:");
		scanf("%d",&p1->idade);
		printf("\nEntre com o numero da camisa:");
		scanf("%d",&p1->numero_camisa);
		printf("\n__________________________________________________");
		fflush(stdin);
	}
	
}
void jogadoresReserva(struct jogadores *p2)
{
	printf("\n**JOGADORES RESERVAS:**");
	for(i=0;i<RESERVA;i++ )
	{
		printf("\nEntre com o nome:");
		gets(p2->nome);
		printf("\nEntre com a posição no time:");
		gets(p2->posicao);
		printf("\nEntre com a idade:");
		scanf("%d",&p2->idade);
		printf("\nEntre com o numero da camisa:");
		scanf("%d",&p2->numero_camisa);
		printf("\n__________________________________________________");
		fflush(stdin);
	}
}

void mostraListaPrincipal(struct jogadores *p1)	
{
	for(i=0;i<PRINCIPAL;i++)
	{
		printf("\n Nome: %s",p1->nome);
		printf("\n Idade: %d",p1->idade);
		printf("\n Posição: %s",p1->posicao);
		printf("\n Numero da camisa: %d",p1->numero_camisa);
		printf("\n__________________________________________________");
	}


}

void mostraListaReserva(struct jogadores *p2)	
{
	for(i=0;i<RESERVA;i++)
	{
		printf("\n\n Nome: %s",p2->nome);
		printf("\n Idade: %d",p2->idade);
		printf("\n Posição: %s",p2->posicao);
		printf("\n Numero da camisa: %d",p2->numero_camisa);
		printf("\n__________________________________________________");
	}
}

int main()
{
	//USANDO PONTEIRO
	struct jogadores *p1,*p2;
	p1 = &jogadores1;
	p2 = &jogadores2;	
	
	//Manipulando todo o programa
	setlocale(LC_ALL,"Portuguese");
	int choice;
	for(;;)
	{
		choice = menu();
		switch(choice)
		{
			case 1: 
					jogadoresPrincipais(&jogadores1);
					printf("\n\n\t**Lista de jogadores principal**:\n");
					printf("\n__________________________________________________");
					mostraListaPrincipal(&jogadores1);
			break;
			case 2:
					jogadoresReserva(&jogadores2);
					printf("\n\n\t**Lista de jogadores reserva:**\n");
					printf("\n__________________________________________________");
					mostraListaReserva(&jogadores2);
			break;
			case 3:
				exit(0);
		}
	}
	system("pause");
}
