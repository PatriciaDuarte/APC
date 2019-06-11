//Aluna:Patrícia Duarte da Silva
//Exercicio5
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>          

int buscaR(int x, int v[], int n);

int buscaR(int x, int v[], int n)
{
	if(n==0) return -1;
	else
	if(x==v[n-1]) return n-1;
	else
	return buscaR(x,v,n-1);
	
	
}

main()
{
	int busca,i, TAMANHO;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o tamanho do vetor:");
	scanf("%d",&TAMANHO);
	
	int valor[TAMANHO];
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor do vetor:",i+1);
		scanf("%d",&valor[i]);
	}
	
	printf("Digite o valor para busca:");
	scanf("%d",busca);
	
	printf("\n\n\n BUSCA OK: %d",buscaR(busca,valor,TAMANHO));
	
	system("pause");
	
}

