//Autora: Patricia Duarte da Silva - 201514322

#include <stdio.h>
#include <stdlib.h>
char fileName[30] = { };
void tail(int i, FILE *file);

void tail(int i, FILE *file)
 {
	char buffer[1000];
	fseek(file, -i, SEEK_END); 
	while (!feof(file))
	{
		fgets(buffer, sizeof(buffer), file);
		printf("%s", buffer); 
	}
	return ;
}

int main(void) 
{
	printf("Digite o nome do arquivo a ser lido: ");
	gets(fileName);
	FILE *file = fopen(fileName, "rb");
	if (file == NULL)
	{
	 
		printf("Erro: Nao foi possivel abrir o arquivo");
	}
	else
	{
		printf("tail -");
		int i = 0;
		scanf("%d", &i);
		tail(i, file);
	}
	
	system("pause");
	fclose(file);	
	return 0;
}


