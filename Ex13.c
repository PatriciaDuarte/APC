#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int X(int n)
{
	if(n==1 || n==2) return n;
	else return X(n-1)+n* X(n-2);
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	int v;
	
	printf("Entre com um valor:");
	scanf("%d",&v); /*ENTRE COM O VALOR 4, LOGO TERÁ O RESULTADO 13.*/
	printf("\nResultado:%d\n\n",X(v));
	system("pause");
}
