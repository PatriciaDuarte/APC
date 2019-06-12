//Autora: Patrícia Duarte da Silva - 201514322
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 20
 
void quickSort(int *a, int left, int right);//Declaração da funçãos

void quickSort(int *a, int esquerda, int direita) 
{
    int i, j, x, y;
     
    i = esquerda;
    j = direita;
    x = a[(esquerda + direita) / 2];
     
    while(i <= j) 
	{
        while(a[i] < x && i < direita)
		 {
            i++;
         }
        while(a[j] > x && j > esquerda)
		 {
            j--;
         }
        if(i <= j)
		 {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda) 
	{
        quickSort(a, esquerda, j);
    }
    if(i < direita) 
	{
        quickSort(a, i, direita);
    }
}

int main()
{
 	int i, vet[TAMANHO];
	 for(i = 0; i < TAMANHO; i++)
 	{
 		vet[i] = (rand() % TAMANHO);
		printf("Vetor[%d]: %d\n", (i + 1), vet[i]);
 	}
 	quickSort(vet, 0,TAMANHO - 1);
 
	 printf("\n\nValores ordenados:\n");
	 for(i = 0; i < TAMANHO; i++)
 	{
 		 printf("%d", vet[i]);
  		printf("\n");
 	}
 return 0;
}

