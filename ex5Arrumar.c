//Alunos:Mário e Patrícia
//Exercicio5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//estrutura para armazenar o cabeçalho.
typedef struct
{
	char id[5];
	char nome[11];
	int notaFinal;
	char situacao; //A-Aprovado R-Reprovado
}dados_aluno;

void id(dados_aluno *Aluno)
{
	
	for(int i=0; i<2; i++)
	{
		if((Aluno[i].id) == (Aluno[i].id-1))
		{
			printf("->Id:\n");
			scanf("s=%s",Aluno[i].id);
		}
	}
		
}


void leTeclado(dados_aluno *Aluno)
{
	for(int i=0; i<2; i++)
	{
		printf("\n\nDigite os dados do aluno %d\n", i+1);
		printf("->Id: ");
		scanf("%s", Aluno[i].id);
		id(Aluno);

		printf("Id=%s ", Aluno[i].id);
		printf("->Nome: ");
		scanf("%s", Aluno[i].nome);
		printf("->Nota Final: ");
		scanf("%d", &Aluno[i].notaFinal);
		fflush(stdin);	}
}

void escreveArquivo(FILE *fp, dados_aluno Aluno[2])
{
		fp=fopen("arquivo5.txt", "wt");
		if(fp==NULL)
		{
			printf("Erro ao gravar o arquivo!");
			getchar();
			exit(1);
		}else
		{
			printf("\n\nDado gravado no arq c sucesso!\n");
			fwrite(&Aluno, sizeof(dados_aluno), 1, fp);
			fclose(fp);
		}
}

void leArquivo(FILE *fp, dados_aluno Aluno2[2])
{
	fp=fopen("arquivo5.txt", "rt");
	if(fp==NULL)
	{
		printf("Erro ao gravar o arquivo!");
		getchar();
		exit(1);
	}else
	{
		fread(&Aluno2, sizeof(dados_aluno), 1, fp);
		printf("\n\nDado lido do arq c sucesso!\n");
		for(int i=0; i<2; i++)
		{
			printf("Id=%s\n", Aluno2[i].id);
			printf("Nome=%s\n", Aluno2[i].nome);
			printf("Nota Final=%d\n", Aluno2[i].notaFinal);
			if(Aluno2[i].notaFinal>=60)
			{
				Aluno2[i].situacao = 'A';
			}else
				Aluno2[i].situacao = 'R';
			printf("Situação=%c\n\n", Aluno2[i].situacao);
		}
		fclose(fp);
	}
}

main()
{
	FILE *fp;
	dados_aluno Aluno[2], Aluno2[2];
	leTeclado(Aluno);
	escreveArquivo(fp, Aluno);
	leArquivo(fp, Aluno2);
}
