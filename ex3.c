//Aluna:Patrícia Duarte da Silva
//Exercicio3
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int n(int n);

int n(int n)
{
	return (n-1); 
}

main()
{
	int numero;
	int i;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um numero inteiro:");
	scanf("%d",&numero);
	
	printf("\nImprimindo de 0 a N:\n");
	for(i=1;i<=numero;i++)
	{
		printf("%d\n",n(i));
	}
}
