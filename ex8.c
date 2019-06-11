//Patricia Duarte da Silva
//Numero 8
#include <stdio.h>
#include <conio.h>
#define TAMANHO 20
int caract(char c, char s[]);

int caract(char c,char s[])
{
 	if (s[0] == '\0')
		return 0;
 	if (s[0]==c)
 		return (1+caract(c,++s));
 		return caract(c,++s);
}

int main(void)
{
 	char caracteres[TAMANHO],caracter;
 	int aux;

 	printf("\nDigite uma string qualquer: ");
	gets(caracteres);
 	printf("\nDigite um caractere da string: ");
 	caracter=getchar();
 	aux=caract(caracter,caracteres);
 	printf("\n\nEncontrado %d vezes!\n\n\n\n", aux);
 	system("pause");
}

