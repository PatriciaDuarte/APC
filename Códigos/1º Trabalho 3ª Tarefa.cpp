// Universidade Federal de Goi�s - Catal�o
// Marcos Misael da Silva - 201403039
// Patr�cia Duarte da Silva - 201514322
// Ana Paula Soengas Rabelo de Moraes - 201601499
// Laborat�rio de Programa��o 2, 25/10/2016 1� Trabalho 2� Tarefa

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// Tamanho fixo de registros
#define NUMREG 10

struct _tipoRegistro {
	char nome[15],
		sobreNome[15],
		rua[25],
		numeroCasa[5];
};

_tipoRegistro lerRegistro(int posicaoRegistro, FILE *arquivo);

int main (void) {
	// Permite o uso de acentos no terminal
	setlocale(LC_ALL, "");

	FILE *arquivo;
	_tipoRegistro buffer[NUMREG];
	
	// Verifica se o arquivo foi aberto com sucesso
	if (arquivo = fopen("campo_var_reg_var.dad", "rb"))
		printf("Arquivo aberto com sucesso!");
	else {
		printf("Erro ao tentar abrir o arquivo.\n\n\n");
		system("pause");
		return 0;
	}
	
	// L� os dados do arquivo e os 'salva' em um vetor
	int tamanhoReg = 0;
	for (int i = 0; i < NUMREG; i++) {
		buffer[i] = lerRegistro(tamanhoReg + 1, arquivo); // Passa como argumento a posi��o "registro + 1" para n�o imprimir o byte que informa o tamanho do registro
		printf("\n%s\n%s\n%s\n%s\n\n", buffer[i].nome, buffer[i].sobreNome, buffer[i].rua, buffer[i].numeroCasa);
		fseek(arquivo, tamanhoReg, SEEK_SET); // Posiciona o ponteiro no byte que informa o tamanho do registro a ser lido
		tamanhoReg += fgetc(arquivo) + 1; // Calcula a posi��o do pr�ximo registro, somando o tamanho dos registros j� lidos
	}
	
	// Pede um n�mero de registro ao usu�rio e o imprime na tela
	int i;
	printf ("\n\nDigite um n�mero de 1 a 10: ");
	scanf("%d", &i);
	i--;
	
	int posicaoReg = 0;
	for (int j = 1; j <= i; j++) { // Busca a posi��o do i-�simo registro somando os tamnhos lidos "i - 1" vezes
		fseek(arquivo, posicaoReg, SEEK_SET);
		posicaoReg += fgetc(arquivo) + 1; // Calcula a posi��o do pr�ximo registro, somando o tamanho dos registros j� lidos
	}
	
	_tipoRegistro registroLidoPeloUsuario = lerRegistro(++posicaoReg, arquivo);	
	printf ("\n%s\n%s\n%s\n%s\n\n\n", registroLidoPeloUsuario.nome, registroLidoPeloUsuario.sobreNome, registroLidoPeloUsuario.rua, registroLidoPeloUsuario.numeroCasa);
	
	system("pause");
	fclose(arquivo);
	return 0;
}

_tipoRegistro lerRegistro(int posicaoRegistro, FILE *arquivo) {
	fseek(arquivo, posicaoRegistro, SEEK_SET);
	_tipoRegistro registro;
	
	int i = 0;
	while ((registro.nome[i] = fgetc(arquivo)) != '|')
		i++;
	registro.nome[i] = '\0';

	// L� �ltimo nome do registro
	i = 0;
	while ((registro.sobreNome[i] = fgetc(arquivo)) != '|')
		i++;
	registro.sobreNome[i] = '\0';

	// L� rua do registro
	i = 0;
	while ((registro.rua[i] = fgetc(arquivo)) != '|')
		i++;
	registro.rua[i] = '\0';

	// L� o n�mero do registro
	i = 0;
	while ((registro.numeroCasa[i] = fgetc(arquivo)) != '|')
		i++;
	registro.numeroCasa[i] = '\0';
	
	return registro;
}

