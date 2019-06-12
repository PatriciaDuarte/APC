//Autora: Patrícia Duarte da Silva(201514322)

#include <stdio.h>
#include <stdlib.h>
int i;
char nomeDoArquivo[100];
unsigned char impressaoChar[16]; 
FILE *arquivo , *arquivoDuping;

main() 
{
	printf("Por favor, digite o nome do arquivo: ");
	gets(nomeDoArquivo);
	
	if (arquivo = fopen(nomeDoArquivo, "rb"))
		{
			printf("  \t\t\t  _______________________________  ");
			printf("\n\t\t\t |Arquivo aberto com sucesso!!!! |");
			printf("\n\t\t\t |_______________________________| \n\n\n\n");
		}else
		 {
			printf("  \t\t\t  _______________________________ ");
			printf("\n\t\t\t |  Erro ao abrir o arquivo!!!!  |");
			printf("\n\t\t\t |_______________________________| \n\n\n\n");
			system("pause");
			return 0;
		}
		while (!feof(arquivo))
		{
			fread(impressaoChar, sizeof(impressaoChar), 1, arquivo); 
			
				for (i = 0; i < 16; i++) 
				{
					printf("%02X ", impressaoChar[i]);
					fprintf(arquivoDuping, "%02X ", impressaoChar[i]);
				}
					printf("    ");
					fprintf(arquivoDuping, "    ");
					
				for ( i = 0; i < 16; i++) 
				{
					if (isprint(impressaoChar[i]) && impressaoChar[i] != 0x09)
					 { 
						printf("%c ", impressaoChar[i]);					
						fprintf(arquivoDuping, "%c ", impressaoChar[i]);
					}
				}	
					printf("\n");
					fprintf(arquivoDuping, "\n");
		}
	fclose(arquivo);
	fclose(arquivoDuping);
	system("pause");
}
