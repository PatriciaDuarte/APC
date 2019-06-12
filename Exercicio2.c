//Autora: Patrícia Duarte
//Exercicio: Numero2, funcao
#include <stdio.h>
#include <stdlib.h>

int numero1, numero2;


int verifica(int num1)
{
  if(num1>0)
	{
		return 1;
	}else return 0;
}

int soma(int num1, int num2)
{
  return num1 + num2;
}

int main()
{
    printf("Digite o primeiro numero:");
    scanf("%d",&numero1);
    printf("Digite o segundo numero:");
    scanf("%d",&numero2);
    printf("Verificando se numero e negativo ou positivo..., o mesmo eh:  %d ", verifica(numero1));
    printf("\nSoma dos dois valores: %d",soma(numero1,numero2));
    return 0;
}
