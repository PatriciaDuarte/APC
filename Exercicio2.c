//Autora: Patrícia Duarte da Silva(201514322)
#include <stdio.h>
main()
{
 int lin,col,soma= 0;
 int mat[4][4];
 
 	//Entrada de valores
 	for (lin=0; lin<=3; lin++)
 	{
 		for (col=0; col<=3;col++)
		{
 			printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
 			scanf("%d", &mat[lin][col]);
		}
	 }
	 //Impressão dos valores
 	printf("\n\n*****Matriz*****\n\n");
 	for (lin=0;lin<=3;lin++)
	 {
		 for (col=0;col<=3;col++)
			 printf("%d\t",mat[lin][col]);
			 printf("\n\n"); 
 }
 
  printf("\n\nDiagonal principal\n\n");
 for (lin=0; lin<=3;lin++)
 		for (col = lin; col < 4; col++)
	   {
			soma += mat[lin][col];
		}
 	
 printf("Soma da diagonal principal:%d\n\n",soma);
 system("pause");
 return 0;
} 
