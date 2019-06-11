//Nome:Patrícia Duarte da Silva
//Exercicio 10

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 5

int maximoR(int *m)
{
	int i, max;
 	max = m[0];
 	
 	for (i = 1; i < TAMANHO; i++)
		 if (m[i] > max) max = m[i];
 		 return max;

}

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	int valor[TAMANHO];
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite com o %d° valor inteiro:",i+1);
		scanf("%d",&valor[i]);
	}
	printf("\nMáximo do vetor: %d\n\n",maximoR(valor));
	system("pause");
}
