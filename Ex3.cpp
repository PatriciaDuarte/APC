/* Alunos:Mário  Victor de Jesus Santana Sousa e Patrícia Duarte da Silva.

 Correção de Provas - - Sistema 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define o número máximo de alunos
#define NUMSTUDENTS 5

// Cria uma estrutura que salva a mátricula e a nota de um aluno
struct _student {
	int grade, id;
};

// Escopo das funçoes utlizadas, mais detalhes abaixo
void setModel(int *model);
void correctTest(_student *students, int *model, int i);
void printResults(_student *students);

int main(void) {
	setlocale(LC_ALL, ""); // Permite o uso de caracteres brasileiros

	int model[10] = { }; // Declara um vetor que guarda as respostas do gabarito
	setModel(model); // Chama função que define respostas do gabarito

	_student students[NUMSTUDENTS] = { };

	int choice, i = 0;
	do {
		system("cls");
		printf("\tCORREÇÃO DE PROVAS\n\n1- Corrigir provas\n2- Imprimir relatório\n3- Sair\n\n");
		scanf("%d", &choice); // Lê a opção desejada pelo usuário
		
		switch (choice) { // Menu para se navegar entre as funções
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

void setModel(int *model) { // Função utilizada para gravar o gabarito da prova, usado para comparar com as provas dos alunos
	system("cls");
	printf("\tCORREÇÃO DE PROVAS\n\nDigite o número correspondente à resposta de cada questão:\n\n");
	
	for (int i = 0; i < 10; i++) { // Percorre o vetor de respostas e lê um número que vair de 1 a 5 para cada posição
		do {
			printf("Questão %d: ", i + 1);
			scanf("%d", &model[i]);
		} while (model[i] < 1 || model[i] > 5);
	}

	return;
}

void correctTest(_student *students, int *model, int i) { // Função utilizada para comparar as repostas dos alunos com o gabarito
	if (i > NUMSTUDENTS) { // Verifica se o número máximo de alunos foi alcançado
		printf("\n\nNúmero máximo de alunos atingido.");
		system("pause");
		return;
	}
	
	system("cls");
	printf("\tCORREÇÃO DE PROVAS\n\nDigite a matrícula do aluno: ");
	scanf("%d", &students[i].id); // Lê a mátricula do aluno
	printf("\nDigite o número correspondente à resposta de cada questão.\n");

	int answer, grade;
	for (int j = 0; j < 10; j++) { // Faz a comparação da opção do aluno com a opção do gabarito
		printf("Questão %d: ", j + 1);
		scanf("%d", &answer);
		if (answer == model[j]) {
			students[i].grade++; // Caso a opção escolhida pelo aluno seja igual ao gabarito sua nota sobe
		}
	}

	return;
}

void printResults(_student *students) { // Função que imprime todos os dados para o usuário
	system("cls");
	printf("\tCORREÇÃO DE PROVAS\n\n");

	float numOfStudents = 0, approved = 0; // Varáveis para calcular a porcentagem de alunos aprovados
	for (int i = 0; i < NUMSTUDENTS; i++) {
		if (students[i].id == 0)
			continue;
		else {
			numOfStudents++;
			printf("Matrícula: %d -> Nota: %2d\n", students[i].id, students[i].grade); // Imprime a matrícula e nota
			if (students[i].grade >= 7) // Caso a nota seja maior ou igual a 7, número de aprovados incrementa
				approved++;
		}
	}

	printf("\n\nPorcentagem de aprovados: %.2f", approved / numOfStudents * 100); // Imprime procentagem de aprovados

	int timesGradeRepeats[11] = { }; // Gera um vetor em que cada posição é uma nota e dentro de cada posição há o número de vezes que ela se repete
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < numOfStudents; j++) { // Percorre os alunos e verifica se a nota desse aluno é igual a posição do vetor, caso seja, o valor naquela posição é incrementado
			if (students[j].grade == i)
				timesGradeRepeats[i]++;
		}
	}

	int biggest = 0, position;
	for (int i = 0; i < 11; i++) // Descobre qual dos valores do vetor mais se repetiu
		if (timesGradeRepeats[i] > biggest) {
			biggest = timesGradeRepeats[i];
			position = i; // Guarda a posição do vetor (nota) que mais se repetiu
		}

	printf("\nNota com maior frequência absoluta: %d\nSe repetiu %d vezes.", position, biggest); // Imprime a nota com maior frequência absoluta e quantas vezes ela se repetiu

	printf("\n\n\n");
	system("pause");
	return;
}
