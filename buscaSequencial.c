//Autora: Patrícia Duarte da Silva - 201514322
 #include <stdio.h>
 #define TAMANHO  10

int main()
{
	int busca, achou = 0 , i;
	
	int vetor[TAMANHO];
	for (i = 0; i < TAMANHO; i++)
	{
		vetor[i] = (rand() % TAMANHO);
		printf("V[%d] = %d\n", (i + 1), vetor[i]);
	}
	
printf("\n Por favor, informe o numero que deseja buscar: ");
scanf("%i",&busca);

	for(i=0;i<10;i++)
	{
		if (vetor[i]==busca)
		{
			achou=1;
		}
	}

	if (achou==1)
	{
		printf("\n\t\tNumero encontrado!!");
	}
	else
	{
		printf("\n\t\tNumero nao encontrado!");
	}	
}

