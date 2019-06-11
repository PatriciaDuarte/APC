/*
Exercicio 1
Alunos:Patrícia e Mário Victor
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int var1 = 100, *p1;
	float var2 = 10.3, *p2;

	p1 = &var1;
	p2 = &var2;
	
	//Valores iguais na proxima linha de codigo
	//Valores iguais: var1 e *p1, pois *p1 é o valor da variável ponteiro que foi inicializada cm 100 e var1 foi inicializado cm 100
	//Valores iguais: var2 e *p2, pois *p2 é o valor da variável ponteiro que foi inicializada cm 10.3 e var2 foi inicializado cm 10.3
	printf("\nValor e o endereço de memória das variáveis: var1 = %d  var2 = %f  *p1 = %d  *p2 = %f ",var1,var2,*p1,*p2);
	
	printf("\nValor dos ponteiros: *p1 = %p  *p2 = %p ",*p1,*p2);
	printf("\nEndereço dos ponteiros: &p1 = %d  &p2 = %f", &p1, &p2);
	printf("\nValores apontados pelos ponteiros: &var1 = %d   &var2= %d\n",&var1,&var2);
	
 }

