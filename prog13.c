#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 5

void primo(int *vetor,int i);

void primo(int *vetor,int i)
{	
	int j=0;
	for(i=0;i<TAMANHO;i++)
	{
		for (i=2;i<TAMANHO;i++)
	 {
        if (vetor[i]%i!=0)
		{
            j++;
        }
    }
    if (j==vetor[i]-2 || vetor[i]==0 || vetor[i]==1)
	 {
        printf("\nNumero:%d Posição:%d",vetor[i],i);
    } else {
        printf("");
    }	
	}
	
		
				
}



main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor[TAMANHO],i;
	
	for(i=0;i<TAMANHO;i++)
	{
		printf("Digite o %d° valor inteiro:",i+1);
		scanf("%d",&valor[i]);
	}
	
	primo(valor,i);
	
	system("pause");
}
