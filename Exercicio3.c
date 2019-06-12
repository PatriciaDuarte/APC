//Autora: Patricia Duarte(201514322)
//Exercicio 3,funcao

#include<stdio.h>
#include<stdlib.h>

int base,expoente;

void calculaPotencia(int b,int e)
{
	int i,auxiliar=1;
	for(i=0;i<e;i++)
	{
    	auxiliar = auxiliar* b;
	}
	printf("\nPotencia: %d",auxiliar);
}

main()
{
	printf("De a base: ");
	scanf("%d",&base);
	printf("\nDe o expoente:");
	scanf("%d",&expoente);
    calculaPotencia(base,expoente);
	return 0;
}
