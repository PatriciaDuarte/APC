#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAMANHO 100

main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	char vet[TAMANHO];
	int *p;
	
	p = &i;
	for( i=0;i<TAMANHO;i++)
	{
		if(!(i%7==0||(i%10==7)))
		{
			printf("%d\n",i);
		}	
	}
	system("pause");
}
