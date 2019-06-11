//Aluna:Patrícia Duarte da Silva
//Exercicio6
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>        

int potencia(int b,int e);

int potencia(int b,int e)
{
	if(e==0)
		 return 1;
	else
		return b*potencia(b,e-1);
}

main()
{
	int base, expoente;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("**Entre com numeros INTEIROS(Maior que 0)**");
	printf("\n\nBase:");
	scanf("%d",&base);

	printf("Expoente:");
	scanf("%d",&expoente);
	
	printf("\nResultado da potência:%d \n\n",potencia(base,expoente));
	system("pause");
	
}

