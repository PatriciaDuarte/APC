//Autora: Patricia Duarte
//Exercicio1-funcao
#include <stdio.h>
#include <stdlib.h>

int numero1,numero2,numero3;


int dobro1 (int num1)
{

    return num1 *2;
    
}
int dobro2(int num2)
{
	return num2*2;
}
int dobro3(int num3)
{
	return num3*2;
}


int main()
{
    printf("Digite o primeiro numero:");
    scanf("%d",&numero1);
    printf("Digite o segundo numero:");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero:");
    scanf("%d", &numero3);

 	printf("\n\nDobro dos valores:\n\n");
    numero1 = dobro1(numero1);
    printf("Numero 1: %d\n",numero1 );
  
    numero2 = dobro2(numero2);
    printf("Numero 2: %d\n",numero2);
    
    
    numero3 = dobro3(numero3);
    printf("Numero 3: %d\n", numero3);
    
  
}

