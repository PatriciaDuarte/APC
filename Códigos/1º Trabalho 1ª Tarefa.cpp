// Universidade Federal de Goiás - Catalão
// Marcos Misael da Silva - 201403039
// Patrícia Duarte da Silva - 201514322
// Ana Paula Soengas Rabelo de Moraes - 201601499
// Laboratório de Programação 2, 25/10/2016 1º Trabalho 1ª Tarefa

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// Tamanho fixo de registros
#define NUMREG 10

// Estrutura definida a partir do enunciado
struct _tipoRegistro {
	char nome[15],
		sobreNome[15],
		rua[25];
	int numeroCasa;
};

int main (void) {
	// Permite o uso de acentos no terminal
	setlocale(LC_ALL, "");

	FILE *arquivo;
	_tipoRegistro buffer[NUMREG];
	
	// Verifica se o arquivo foi aberto com sucesso
	if (arquivo = fopen("fixo.dad", "rb"))
		printf("Arquivo aberto com sucesso!");
	else {
		printf("Erro ao tentar abrir o arquivo.\n\n\n");
		system("pause");
		return 0;
	}
	// Lê os dados do arquivo e os 'salva' em um vetor
	fread(buffer, sizeof(_tipoRegistro), NUMREG, arquivo);
	for (int i = 0; i < NUMREG; i++)
		printf("\n\n%s\n%s\n%s\n%d", buffer[i].nome, buffer[i].sobreNome, buffer[i].rua, buffer[i].numeroCasa);
	
	// Pede um número de registro ao usuário e o imprime na tela
	int i = 0;
	printf ("\n\nDigite um número de 1 a 10: ");
	scanf("%d", &i);
	_tipoRegistro registroLidoPeloUsuario;
	fseek(arquivo, sizeof(_tipoRegistro) * (i - 1), SEEK_SET);
	fread(&registroLidoPeloUsuario, sizeof(_tipoRegistro), 1, arquivo);
	printf ("\n%s\n%s\n%s\n%d\n\n\n", registroLidoPeloUsuario.nome, registroLidoPeloUsuario.sobreNome, registroLidoPeloUsuario.rua, registroLidoPeloUsuario.numeroCasa);
	
	system("pause");
	fclose(arquivo);
	return 0;
}
