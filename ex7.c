//Aluna:Patrícia Duarte da Silva
//Exercicio7
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>        
#include<string.h>

#define TAMANHO 25

int tamString(char s[]);

int tamString(char s[])
{
	if(s[0]=='\0') return 0;
	else 
	return 1+tamString(&s[1]);
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	char caractere[TAMANHO];
	
	
	printf("Digite alguns caracteres sem dar espaço:");
	scanf("%s",caractere);
	
	printf("\nQuantidade de caracteres:%d\n\n",tamString(caractere));
	
	system("pause");
}
