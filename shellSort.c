//Autora: Patrícia Duarte da Silva - 201514322

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

void shell_sort(int *a, int tamanho);
 
//função main
int main(int argc, char** argv)
	{
		 int i, vetor[TAMANHO];
 		for(i = 0; i < TAMANHO; i++)
 		{
 			vetor[i] = (rand() % TAMANHO);
			printf("V[%d] = %d\n", (i + 1), vetor[i]);
 		}
 		shell_sort(vetor, TAMANHO);
 
 		printf("\n\nValores ordenados\n");
 		for(i = 0; i < TAMANHO; i++)
 		{
  			printf("%d\n", vetor[i]);
	    }
 		system("pause");
 		return 0;
	}

void shell_sort(int *a, int tamanho)//função shell_sort
{
 int i , j , value;
 int gap = 1;
  
 do 
 {
  gap = 3*gap+1;
 } while(gap < tamanho);
  
 do 
 {
  gap /= 3;
  for(i = gap; i <tamanho; i++) 
	 {
   			value = a[i];
 		  	j = i - gap;
    
  	 while (j >= 0 && value < a[j]) 
   		{
    		a[j + gap] = a[j];
  		 	 j -= gap;
 		}
  	 a[j + gap] = value;
 	 }
 }while(gap > 1);
 
}
