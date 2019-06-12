//Patricia Duarte da Silva - 201514322

#include <stdio.h>
#include <stdlib.h>

char fileName[30] = { };

int main(void) 
{
	printf("Digite o nome do arquivo a ser lido: ");
	gets(fileName);
	FILE *file = fopen(fileName, "rb"), *fileCopy = fopen("Copia do Arquivo.txt", "wb");
	if (file == NULL)
	{
		printf("Erro: Nao foi possivel abrir o arquivo\n");	
	}
	else
	{
		while (!feof(file))
		{
			fputc(fgetc(file), fileCopy);			
				printf("O arquivo foi copiado com sucesso!\n\n\n");
		}
		
}

	system("pause");
	fclose(file);	
	return 0;
}

