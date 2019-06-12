//Patrícia Duarte da Silva - 201514322
#include <stdio.h>
#include <stdlib.h>
char fileName[30] = { };

int main(void)
 {
	printf("Digite o nome do arquivo para ser lido: ");
	gets(fileName);
	FILE *file = fopen(fileName, "rb");
	int i = 0;
	if (file == NULL)
		printf("Erro: Nao foi possivel abrir o arquivo");
	else
		while (!feof(file)) 
		{
			fgetc(file);
			i++;
		}			
	printf("\nO arquivo lido possui %d caracteres!\n\n\n", i); 
	
	system("pause");
	fclose(file);	
	return 0;
}
