//Autora: Patrícia Duarte da Silva(201514322)
#include <stdio.h>   
int main(void)
{
   int mat[10][10], maior,i,j; 
   
   
   for (i=0; i<10; i++)
    {
		for (j=0; j<10; j++)
		{
		   	printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",i+1,j+1);
 			scanf("%d", &mat[i][j]);
		 }
	}
    		 	   
	   maior=mat[0][0];
	   for(i=0;i<=9;i++)
	   {
	 	  for(j=0;j<=9;j++)
		   {
	   			if(maior<mat[i][j])
				{
	  	   	 		maior=mat[i][j];
				 }
 			}
		}
   printf("\nMaior elemento da matriz: %.1d\n", maior);	
   printf("\n\n")	 ;
   system("pause");
   return 0;
}
