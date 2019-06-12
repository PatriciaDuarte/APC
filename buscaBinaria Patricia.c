//Autora: Patrícia Duarte da Silva - 201514322
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 50
int busca(int valor, int abaixo, int acima, int *array);

main() 
{
	int vetor[TAMANHO],i;
	for ( i = 0; i < TAMANHO; i++)
	{
		vetor[i] = i;
	}
	
	int valor;
	printf("Digite um numero para fazer a busca: ");
	scanf("%d", &valor);
	
	int a;
	if ((a = busca(valor, 0, TAMANHO, vetor)) != -1)
		printf ("\nO valor digitado esta em: %d\n\n\n", a);
	else
		printf ("\nO valor nao foi encontrado!!\n\n\n ");
	system("pause");
	return 0;
}

int busca(int valor, int abaixo, int acima, int *vetor)
 {
	if (abaixo > acima)
		return -1;
	
	int meio = (abaixo + acima) / 2;
	if (vetor[meio] < valor) 
	{
		printf("Valor maior.... Buscas continuam de %d ate %d\n", meio + 1, acima);
		return busca(valor, meio + 1, acima, vetor);
	}
	else if (vetor[meio] > valor) 
	{
		printf("Valor menor.... Buscas continuam de %d ate %d\n", abaixo, meio - 1);
		return busca(valor, abaixo, meio - 1,vetor);
	}
	else
		return meio;	
}
