//Autora: Patricia Duarte da Silva-(201514322)
#include <stdio.h>
#include <stdlib.h>
char fileName[30] = { };

int main(void)
 {
	printf("Digite o nome do arquivo para ser lido: ");
	gets(fileName);
	FILE *file = fopen(fileName, "rb");
	if (file == NULL) 
	{
		printf("Erro: Nao foi possivel abrir o arquivo.");
	}
	else 
	{
		printf("\n\n O conteudo do arquivo e:\n\n");
		while (!feof(file))
		{
			printf("%c", fgetc(file));
		}
		printf("\n\n\n");		
	}
		
	system("pause");
	fclose(file);	
	return 0;
}



