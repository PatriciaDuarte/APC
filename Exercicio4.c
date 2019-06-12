//Autora: Patrícia Duarte da Silva(201514322)
#include <stdio.h>
main()
{
 int lin,col;
 int mat[3][3];
 
 

 for (lin=0; lin<3;lin++)
 {
	 for (col=0;col<3;col++)
 	{
 		printf("Preencha os demais elementos com 0: ");
	 	scanf("%d", &mat[lin][col]);
 		if((mat[lin][col])!= 0)
 			{
			 	printf("\n\n _________ --- >Digite 0__________\n\n");
			 }
	 }
	 printf("\n");
}
	 if(lin == col)
	 {
	 	Printf("Preencha os elementos da diagonal com 1");
	 	 scanf("%d", &mat[lin][col]);
 		if((mat[lin][col])!= 0)
 			{
			 	printf("\n\n _________ --- >Digite 1__________\n\n");
			 }
	 }
 
 //Imprimindo a matriz
 	printf("Matriz\n");
	 for (lin=0;lin<=2;lin++)
 	{
 		for (col=0;col<3;col++)
 			printf("%d\t",mat[lin][col]);
			 printf("\n\n");
	 }

 	printf("\n\n");

 system("pause");
 return 0;
} 
