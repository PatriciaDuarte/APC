//Aluna:Patrícia Duarte da Silva
//Exercicio4
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int n);

int soma(int n)
{
	if(n==1)return 1;
	else
	return n+soma(n-1); 
}

main()
{
	int numero;
	int i;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um numero inteiro:");
	scanf("%d",&numero);
	
	printf("\nImprimindo a soma:\n");
	printf("%d\n",soma(numero));
	
}
