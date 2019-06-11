#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>   /*VOLTAR NESSA QUESTÃO, NÃO ESTÁ RETORNANDO O RESULTADO CORRETO*/

void distancia(int *X1, int *Y1, int *X2, int *Y2, int *resultado);

void distancia(int *X1, int *Y1, int *X2, int *Y2, int *resultado)
{
	float aux;
	*resultado = pow(*X2-*X1,2)+ pow(*Y2-*Y1,2);
	aux = (float)sqrt(*resultado);
	printf("\nResultado: %f .\n",aux);
}

main()
{
	int x1,x2,y1,y2,res;
	
	printf("\n PLANO P\n");
	printf("X1:");
	scanf("%d",&x1);
	printf("Y1:");
	scanf("%d",&y1);
	printf("\n PLANO Q\n");
	printf("X2:");
	scanf("%d",&x2);
	printf("Y2:");
	scanf("%d",&y2);
	
	distancia(&x1,&y1,&x2,&y2,&res);
	system("pause");
}
