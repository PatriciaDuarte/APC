/* Alunos: Mário  Victor de Jesus Santana Sousa e Patrícia Duarte da Silva.

Controle de Vôos - - Sistema 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

  int voo[30][15];
  int num_voo, i, j, cadeiranum, cadeiravaz[30][15];
  char ident[11];
  for (i=0;i<30;i++) // Numero de voos
  {
 	   for(j=0;j<15;j++)  // Numero de cadeiras
    {
        voo[i][j] = 0;
    }
  }
  do {//Fazer isso
       printf("Numero do voo[0-29] para comprar a passagem: "); 
       scanf("%d",&num_voo);
       printf("\nCadeiras disponiveis no voo %d\n\n",num_voo);
    for (i=0;i<15;i++)
    {
       if(voo[num_voo][i] == 0 ) 
       {
        cadeiravaz[num_voo][i] = i;
        printf("%d  ",cadeiravaz[num_voo][i]);
       }
    }
        printf("\n\nDigite o numero da poltrona: "); 
		scanf("%d",&cadeiranum);
        printf("Digite o numero da identidade: "); 
		scanf("%s",&ident);
        voo[num_voo][cadeiranum] = 1;
        printf("\n\nCadeira %d comprada com sucesso!!!",cadeiranum);
        printf("\nIdentidade comprador = %s",ident);
        printf("\nVoo: %d",num_voo);
        printf("\n\n\n");
        system("pause");
  } while(strcmp(ident, "9999")); //Enquanto identidade for diferente de 9999
  getchar();
}
