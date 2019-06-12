//Autora: Patrícia Duarte (201514322)
//Exercicio7, busca binária
#include <stdio.h>
#include <stdlib.h>
#define tamanho 50

int valor, vetor[tamanho],i,localizacao;

int busca(int valor, int abaixo, int acima, int *vetor) 
   {
   		int meio;
		if (abaixo > acima)	return -1;
	 		meio = (abaixo + acima) / 2;
		if (vetor[meio] < valor) 
			{
				printf("\nValor do meio,continuando busca...\n");
				return busca(valor, meio + 1, acima, vetor);
		}else
		 if (vetor[meio] > valor) 
		{
			printf("\nValor menor,continuando busca..");
			return busca(valor,abaixo,meio - 1,vetor);
		}
	else return meio;	
	}

main()
 {
	for (i = 0; i < tamanho; i++)
   	{
		vetor[i] = i;
   	}
   	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	if ((localizacao = busca(valor,0,tamanho, vetor)) != -1)
		printf ("\nO numero esta em: %d\n", localizacao);
	else
		printf ("Numero nao encontrado.");
	return 0;
}

