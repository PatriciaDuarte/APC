	//Exercicio1
	
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

FILE *fp;
char buffer[20];
char c;

void escreveArquivo()
{
	if((fp = fopen("arquivo2.txt","w")) == NULL)
	{
		printf("Erro ao abrir arquivo para escrita.\n");
		exit(1);
	}else
	printf("Arquivo 2 aberto com sucesso!\n");
	while(!feof(fp))
	{
		fseek(fp,0,SEEK_SET);
		fwrite(buffer , 1 , strlen(c)+1 , fp );
		fprintf(fp, "%s\n", buffer );
	}
	


	fclose(fp);

}


void leArquivo()
{
	if((fp = fopen("arquivo1.txt","r")) == NULL)
	{
		printf("Erro ao ler arquivo.\n");
		exit(1);
	}else
	printf("Arquivo 1 aberto com sucesso!\n");
	//Comparando um caractere por vez

	//char c;
	//c = getc(fp); //Le o primeiro caracter
	while (!feof(fp))
	{ //Enquanto não se chegar no final do arquivo
		fseek(fp,0,SEEK_SET);
		c = getc(fp); // Le um novo caracter no arquivo
		if(c == 'A')
			c = 'Z';

		else if(c == 'E')
			c = 'Y';

		else if(c == 'I')
			c = 'X';

		else if(c == 'O')
			c = 'W';

		else if(c == 'U')
			c = '*';

	}

	fclose(fp);
}


int main(void)
{
	leArquivo();
	escreveArquivo();
	system("pause");
}