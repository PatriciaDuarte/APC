//Autora: Patricia Duarte(201514322)
//Exercicio: Numero4- funcao


#include <stdio.h>
#include <stdlib.h>

int contador1,contador2,contador3,contador4;//contadores
float nota1[10],nota2[10],nota3[10],nota4[10];//vetores

void mediaAritmetica(float *n1,float *n2,float *n3,float *n4)
{
	float auxiliar;
	int cont;
	
	for(cont=0;cont<10;cont++)
	{
		auxiliar= (n1[cont]+n2[cont]+n3[cont]+n4[cont])/4;
		printf("\nMedia do aluno %d: %.1f  ",cont,auxiliar);
		if(auxiliar < 60)
		 printf(" -Esta de recuperacao.");
	}
    
}


int main()
{
	
   printf(" Digite a nota1 dos 10 alunos:\n\n");
   for(contador1=0;contador1<10;contador1++)
   {
   	    printf("[%d] : ", contador1);
   	    scanf("%f",&nota1[contador1]);
   }
   
   printf(" \nDigite a nota2 dos 10 alunos:\n\n");
   for(contador2=0;contador2<10;contador2++)
   {
   	    printf("[%d] : ", contador2);
   	    scanf("%f",&nota2[contador2]);
   }
   printf(" \n Digite a nota3 dos 10 alunos:\n\n");
   for(contador3=0;contador3<10;contador3++)
   {
   	    printf("[%d] : ", contador3);
   	    scanf("%f",&nota3[contador3]);
   }
   printf(" \n Digite a nota4 dos 10 alunos:\n\n");
   for(contador4=0;contador4<10;contador4++)
   {
   	    printf("[%d] : ", contador4);
   	    scanf("%f",&nota4[contador4]);
   }
   printf("\n\nVerificando media e se esta de recuperacao....\n\n");
   mediaAritmetica(nota1,nota2,nota3,nota4);
   
    return 0;
}
