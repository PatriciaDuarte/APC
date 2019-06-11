/* Alunos:Mário  Victor de Jesus Santana Sousa e Patrícia Duarte da Silva.

Controle de Mercadorias - - Sistema 4
*/

// Declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define o número máximo de mercadorias
#define KINDSOFCOMMODITIES 100

// Escopo das funçoes utlizadas, mais detalhes abaixo
void updateCommodities(int *commodities);
void purchase(int *commodities);

int main(void) {
	setlocale(LC_ALL, ""); // Permite o uso de caracteres brasileiros

	int commodities[KINDSOFCOMMODITIES] = { }; // Declara um vetor de mercadorias, cada posição guarda a sua quantidade

	int choice;
	do { // Lê a opção desejada pelo usuário
		system("cls");
		printf("\tCONTROLE DE MERCADORIAS\n\n1- Atualizar estoque\n2- Fazer pedido\n3- Sair\n\n");
		scanf("%d", &choice);

		switch (choice) { // Menu para se navegar entre as funções
		case 1:
			system("cls");
			updateCommodities(commodities);
			break;
		case 2:
			system("cls");
			purchase(commodities);
		default:
			break;
		}
	} while (choice != 3);

	system("cls");
	printf("\tLISTA DO ESTOQUE FINAL\n\n             QTD.\n");
	for (int i = 0; i < KINDSOFCOMMODITIES; i++) // Imprime uma lista com todos os produtos e suas quantidades
		printf("Produto %2d: %2d\n", i, commodities[i]);

	printf("\n\n\n");
	system("pause");
	return 0;
}

void updateCommodities(int *commodities) { // Função usada para ler o código da mercadoria e atualizar a quantidade
	system("cls");
	
	int position; // Variável que lê o código e salva a quantidade na posição do vetor referente ao código
	printf("\tCONTROLE DE MERCADORIAS\n\nCódigo: ");
	scanf("%d", &position);
	printf("Quantidade atual: ");
	scanf("%d", &commodities[position]);

	return;
}

void purchase(int *commodities) { // Função usada para fazer pedidos
	system("cls");

	int position, quantity; // Lê os dados necessários para a compra
	printf("Código do produto a comprar: ");
	scanf("%d", &position);
	printf("Quantidade a comprar: ");
	scanf("%d", &quantity);

	if (commodities[position] < quantity) { // Caso a quantidade a ser comprada seja maior que a quantidade disponível, leva o usuário a fazer um novo pedido
		printf("\n\nExistem apenas %d unidade(s) do produto %d.\nPor favor, faça um novo pedido.\n\n\n", commodities[position], position);
		system("pause");
	} else { // Caso a quatidade seja menor ou igual o pedido é realizado com sucesso
		printf("Pedido realizado com sucesso.\n\n\n");
		commodities[position] -= quantity;
		system("pause");
	}

	return;
}
