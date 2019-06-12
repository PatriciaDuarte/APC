//Autora: Patricia Duarte(201514322)
//Exercicio: 6,funçoes

#include<stdio.h>
#include<stdlib.h>

int indice;

void valor(int i)
{
	
	printf("F: %d\nG: %d  ",F(indice),G( indice));
	
}

int G(int i)
{
	if(i== 1)return 1;
	else
	if(i==2)return 2;
	else
	return G(i-1)+(3*F(i-2));
}

int F(int i)
{

	if(i==1)return 2;
	else 
	if(i==2)return 1;
	else
	return (2*F(i-1))+G(i - 2);
}

int main()
{
  while(indice<1)
  {
	printf("Entre com um índice maior que 1: ");
	scanf("%d",&indice);
	valor(indice);
  }
}
