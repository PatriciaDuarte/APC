/* Alunos: Mário  Victor de Jesus Santana Sousa e Patrícia Duarte da Silva.

Temperatura - - Sistema 1
*/
//Bibliotecas que serão usadas no programa
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>

#define DIAS 6 //Tamanho do vetor

//Função principal
int main()
{
	setlocale(LC_ALL, "Portuguese");//Função de acentuação
	int i;//contador
	int temperatura[DIAS];//Declaração do contador
	int maior,menor,soma=0,media=0, tempMenor=0,tempMaior=0;//declaração operações que irão ser efetuadas para a resolução dos problemas

	
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
	
	//  As variáveis, maior e menor, recebem inicialmente o valor do primeiro elemento do vetor, ou seja, temperatura[0].
    maior = temperatura[0]; 
    menor = temperatura[0];
    
    
    for(i=0;i<DIAS;++i)
    {
    	if (temperatura[i] < menor) //Comparação da menor temperatura
		menor = temperatura[i];
	}
    
	for (i=0; i < DIAS; ++i)
	{
        if (temperatura[i] > maior)//Comparação de qual é a maior temperatura
		 maior = temperatura[i];
    }
    
    for(i=0;i<DIAS;i++)
    {
    	soma = soma + temperatura[i];//Operação da soma das temperaturas para calcular a temperatura média, posteriormente.
	}
	
	for(i=0;i<DIAS;i++)
	{
		media = soma/DIAS;//Operação para fazer o cálculo da média das temperaturas
	}
	
	for(i=0;i<DIAS;i++)
	{
		if(temperatura[i]<media)
			tempMenor = tempMenor+1;     //Operações do número de dias em que a temperatura foi maior e menor do que a temperatura da média
		
		if(temperatura[i]>media)
			tempMaior = tempMaior+1;
	}
    
 
        
    //Saída    
    printf("\n\nMenor temperatura: %d° C \n", menor);    
    printf("\nMaior temperatura: %d° C \n", maior);
    printf("\nTemperatura média:%d° C\n",media);
    printf("\nNúmero de dias no qual a temperatura foi menor do que a temperatura média:%d\n",tempMenor);
	printf("\nNúmero de dias no qual a temperatura foi maior do que a temperatura média:%d\n",tempMaior);
  	printf("\n");
	system("pause");
	return 0;
}
