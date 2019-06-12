//Autora: Patricia Duarte da Silva - 201514322
#include<stdio.h>
#define TAMANHO 10
void mergesort(int vetor[],int i,int j);
void merge(int vetor[],int i1,int j1,int i2,int j2);

void mergesort(int vetor[],int i,int j)
{
    int meio;

    if(i<j)
    {
        meio=(i+j)/2;
        mergesort(vetor,i,meio);
        mergesort(vetor,meio+1,j);
        merge(vetor,i,meio,meio+1,j);
    }
}

void merge(int vetor[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(vetor[i]<vetor[j])
            temp[k++]=vetor[i++];
        else
            temp[k++]=vetor[j++];
    }

    while(i<=j1)
        temp[k++]=vetor[i++];

    while(j<=j2)
        temp[k++]=vetor[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
        vetor[i]=temp[j];
}
 main()
{
    int vetor[TAMANHO],n,i;

    printf("Valores dos elementos do vetor:\n");
    for (i = 0; i < TAMANHO; i++)
	{
		vetor[i] = (rand() % TAMANHO);
		printf("V[%d] = %d\n", (i + 1), vetor[i]);
	}

    mergesort(vetor,0,TAMANHO-1);

    printf("\nVetor ordenado:\n");
    for(i=0;i<TAMANHO;i++)
    {
        printf("%d ",vetor[i]);
    }


    return 0;
}
