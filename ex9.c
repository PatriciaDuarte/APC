//Patricia Duarte da Silva
//Numero 9
#include <stdio.h>
#include <conio.h>
#include<locale.h>

#define TAMANHO 20
void contrario(char s[]);

void contrario(char s[])
{
	if(s[0]!='\0')
	{
		contrario(&s[1]);
		printf("%c",s[0]);
	}
}

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
 	char caracteres[TAMANHO];

 	printf("\nDigite uma string qualquer: ");
	gets(caracteres);
	
	printf("\n\nContrário:");
 	contrario(caracteres);
 	printf("\n\n");
 	system("pause");
}

