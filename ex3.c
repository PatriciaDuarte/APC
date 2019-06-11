//Nome:Patrícia Duarte da Silva
//Exercício 3
#include<stdio.h>
#include<stdlib.h>

void troca(int *a1, int *b1);
void troca(int *a1, int *b1)
{
	int temp = 5;
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
	
	printf("\ntemp = %d, *x = %d, *y = %d.",temp,*a1,*b1);
}
main()
{
	int a,b;
	printf("Entre cm o primeiro valor:");
	scanf("%d",&a);
	printf("Entre cm o segundo valor:");
	scanf("%d",&b);
	troca(&a,&b);
}
