//Alunos:Patrícia e Mário
//Exercicio 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen ("arquivo3.txt", "w");
	
	if (fp == NULL)
	{
		printf ("Erro! O arquivo nao pode ser aberto\n");
		exit (1);
	}

	do
	{
		ch = getchar ();
		if (EOF == putc(ch,fp))
		{
			printf("Erro no arquivo durante gravacao");
			break;
		}
	}while (ch!= '&');
	fclose (fp);
return 0;
}