//Aluna:Patrícia Duarte da Silva
//Exercicio1
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int somapares(int n);

int somapares(int n)
{
	if ((n>1)&&!(n%2))
		return n+somapares(n-1);
	else 
	if((n>1)&&(n%2))
		return somapares(n-1);
		
	return 0;	//Retorna soma dos pares até 0
}

main()
{
	int numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um numero inteiro:");
	scanf("%d",&numero);
	
	printf("Soma pares:%d",somapares(numero));
}
