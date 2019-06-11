/* Alunos: M�rio  Victor de Jesus Santana Sousa e Patr�cia Duarte da Silva.

Temperatura - - Sistema 1
*/
//Bibliotecas que ser�o usadas no programa
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>

#define DIAS 6 //Tamanho do vetor

//Fun��o principal
int main()
{
	setlocale(LC_ALL, "Portuguese");//Fun��o de acentua��o
	int i;//contador
	int temperatura[DIAS];//Declara��o do contador
	int maior,menor,soma=0,media=0, tempMenor=0,tempMaior=0;//declara��o opera��es que ir�o ser efetuadas para a resolu��o dos problemas

	
	for(i=0;i<DIAS;i++)
	{
		
		temperatura[i] = 15 + ( rand() % 15 );//Joga todos os valores aleatoriamente
			
	}
	
	printf("\tTemperaturas:\n");
	for(i=0;i<DIAS;i++)
	{
		printf("%d",temperatura[i]); //Imprime todos os valores que foram jogados aleatoriamente
		printf("  ");
	}
	
	//  As vari�veis, maior e menor, recebem inicialmente o valor do primeiro elemento do vetor, ou seja, temperatura[0].
    maior = temperatura[0]; 
    menor = temperatura[0];
    
    
    for(i=0;i<DIAS;++i)
    {
    	if (temperatura[i] < menor) //Compara��o da menor temperatura
		menor = temperatura[i];
	}
    
	for (i=0; i < DIAS; ++i)
	{
        if (temperatura[i] > maior)//Compara��o de qual � a maior temperatura
		 maior = temperatura[i];
    }
    
    for(i=0;i<DIAS;i++)
    {
    	soma = soma + temperatura[i];//Opera��o da soma das temperaturas para calcular a temperatura m�dia, posteriormente.
	}
	
	for(i=0;i<DIAS;i++)
	{
		media = soma/DIAS;//Opera��o para fazer o c�lculo da m�dia das temperaturas
	}
	
	for(i=0;i<DIAS;i++)
	{
		if(temperatura[i]<media)
			tempMenor = tempMenor+1;     //Opera��es do n�mero de dias em que a temperatura foi maior e menor do que a temperatura da m�dia
		
		if(temperatura[i]>media)
			tempMaior = tempMaior+1;
	}
    
 
        
    //Sa�da    
    printf("\n\nMenor temperatura: %d� C \n", menor);    
    printf("\nMaior temperatura: %d� C \n", maior);
    printf("\nTemperatura m�dia:%d� C\n",media);
    printf("\nN�mero de dias no qual a temperatura foi menor do que a temperatura m�dia:%d\n",tempMenor);
	printf("\nN�mero de dias no qual a temperatura foi maior do que a temperatura m�dia:%d\n",tempMaior);
  	printf("\n");
	system("pause");
	return 0;
}
