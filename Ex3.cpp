/* Alunos:M�rio  Victor de Jesus Santana Sousa e Patr�cia Duarte da Silva.

 Corre��o de Provas - - Sistema 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define o n�mero m�ximo de alunos
#define NUMSTUDENTS 5

// Cria uma estrutura que salva a m�tricula e a nota de um aluno
struct _student {
	int grade, id;
};

// Escopo das fun�oes utlizadas, mais detalhes abaixo
void setModel(int *model);
void correctTest(_student *students, int *model, int i);
void printResults(_student *students);

int main(void) {
	setlocale(LC_ALL, ""); // Permite o uso de caracteres brasileiros

	int model[10] = { }; // Declara um vetor que guarda as respostas do gabarito
	setModel(model); // Chama fun��o que define respostas do gabarito

	_student students[NUMSTUDENTS] = { };

	int choice, i = 0;
	do {
		system("cls");
		printf("\tCORRE��O DE PROVAS\n\n1- Corrigir provas\n2- Imprimir relat�rio\n3- Sair\n\n");
		scanf("%d", &choice); // L� a op��o desejada pelo usu�rio
		
		switch (choice) { // Menu para se navegar entre as fun��es
		case 1:
			correctTest(students, model, i);
			i++;
			break;
		case 2:
			printResults(students);
			break;
		default:
			break;
		}
	} while (choice != 3);

    return 0;
}

void setModel(int *model) { // Fun��o utilizada para gravar o gabarito da prova, usado para comparar com as provas dos alunos
	system("cls");
	printf("\tCORRE��O DE PROVAS\n\nDigite o n�mero correspondente � resposta de cada quest�o:\n\n");
	
	for (int i = 0; i < 10; i++) { // Percorre o vetor de respostas e l� um n�mero que vair de 1 a 5 para cada posi��o
		do {
			printf("Quest�o %d: ", i + 1);
			scanf("%d", &model[i]);
		} while (model[i] < 1 || model[i] > 5);
	}

	return;
}

void correctTest(_student *students, int *model, int i) { // Fun��o utilizada para comparar as repostas dos alunos com o gabarito
	if (i > NUMSTUDENTS) { // Verifica se o n�mero m�ximo de alunos foi alcan�ado
		printf("\n\nN�mero m�ximo de alunos atingido.");
		system("pause");
		return;
	}
	
	system("cls");
	printf("\tCORRE��O DE PROVAS\n\nDigite a matr�cula do aluno: ");
	scanf("%d", &students[i].id); // L� a m�tricula do aluno
	printf("\nDigite o n�mero correspondente � resposta de cada quest�o.\n");

	int answer, grade;
	for (int j = 0; j < 10; j++) { // Faz a compara��o da op��o do aluno com a op��o do gabarito
		printf("Quest�o %d: ", j + 1);
		scanf("%d", &answer);
		if (answer == model[j]) {
			students[i].grade++; // Caso a op��o escolhida pelo aluno seja igual ao gabarito sua nota sobe
		}
	}

	return;
}

void printResults(_student *students) { // Fun��o que imprime todos os dados para o usu�rio
	system("cls");
	printf("\tCORRE��O DE PROVAS\n\n");

	float numOfStudents = 0, approved = 0; // Var�veis para calcular a porcentagem de alunos aprovados
	for (int i = 0; i < NUMSTUDENTS; i++) {
		if (students[i].id == 0)
			continue;
		else {
			numOfStudents++;
			printf("Matr�cula: %d -> Nota: %2d\n", students[i].id, students[i].grade); // Imprime a matr�cula e nota
			if (students[i].grade >= 7) // Caso a nota seja maior ou igual a 7, n�mero de aprovados incrementa
				approved++;
		}
	}

	printf("\n\nPorcentagem de aprovados: %.2f", approved / numOfStudents * 100); // Imprime procentagem de aprovados

	int timesGradeRepeats[11] = { }; // Gera um vetor em que cada posi��o � uma nota e dentro de cada posi��o h� o n�mero de vezes que ela se repete
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < numOfStudents; j++) { // Percorre os alunos e verifica se a nota desse aluno � igual a posi��o do vetor, caso seja, o valor naquela posi��o � incrementado
			if (students[j].grade == i)
				timesGradeRepeats[i]++;
		}
	}

	int biggest = 0, position;
	for (int i = 0; i < 11; i++) // Descobre qual dos valores do vetor mais se repetiu
		if (timesGradeRepeats[i] > biggest) {
			biggest = timesGradeRepeats[i];
			position = i; // Guarda a posi��o do vetor (nota) que mais se repetiu
		}

	printf("\nNota com maior frequ�ncia absoluta: %d\nSe repetiu %d vezes.", position, biggest); // Imprime a nota com maior frequ�ncia absoluta e quantas vezes ela se repetiu

	printf("\n\n\n");
	system("pause");
	return;
}
