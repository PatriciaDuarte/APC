//PATRICIA DUARTE DA SILVA
//Exercício 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InverteS(char *s);
void InverteS(char *s)
{
	register int t;
		
	printf("\nNome de tras para frente:");
	for(t=strlen(s)-1;t>-1;t--)
	{
		printf("%c",s[t]);
	}
}
main()
{
	char *p="patricia"; //ENTRADA

	
	//imprime o conteudo de tras p frente
	printf("Nome normal de entrada:");
	printf(p);
	InverteS(p);

}
