/*
Exercicio 2
Alunos: Patr�cia e M�rio
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int x1=1, x2=2, *px;
	
	px=&x1;	//Coloca em px o endere�o da mem�ria que contem a variavel x1
	x1=5;	// x1 recebe valor 5
	x2=(*px)+10; //x2 recebe valor do endere�o de px que � 5 + 10
	x1=9; //x1 recebe 9
	
	//Valores sa�da: 9, 15 e 9
	printf("x1:%d x2:%d *px:%d",x1, x2, *px);
}
