//Patrícia Duarte da Silva
//Ex. 6
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 10

void calcula(float *raio, float *altura);
void calcula(float *raio, float *altura)
{
	float areaDoCilindro, litroDeTinta, lataDeTinta,resultado;
	
	areaDoCilindro =  (2*3.14)*(*raio)*(*altura + *raio);
	litroDeTinta = areaDoCilindro/3;
	lataDeTinta = litroDeTinta/5;
	resultado = lataDeTinta*20;
	printf("\n\nQuantidade de latas de tintas necessárias:%f",litroDeTinta);
	printf("\nCusto para pintar tanques cilíndricos de combustível:%f\n",resultado);
	
	
}
main()
{
	setlocale(LC_ALL,"Portuguese");
	float r,h;
	
	printf("\nRaio:");
	scanf("%f",&r);
	printf("\nAltura:");
	scanf("%f",&h);
	calcula(&r,&h);
	system("pause");
}
