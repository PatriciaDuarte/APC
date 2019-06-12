//Autora: Patricia Duarte
//Exercicio: 5, funçoes

#include<stdio.h>
#include<stdlib.h>

float a,b;

float perimetro(float a1,float b1)
{
	float hipotenusa;
	hipotenusa=(a1*2)+(b1*2);
	return hipotenusa*2;
}
float area(float a2,float b2)
{
	return  0.5*(a2*b2);
}
int main()
{
  printf("Digite o cateto a: ");
  scanf("%f",&a);
  printf("Digite o cateto b: ");
  scanf("%f",&b);
  printf("\nPerimetro calculado: %.0f ",perimetro(a,b));
  printf("\nArea calculada: %.0f", area(a,b));
  return 0;
}
