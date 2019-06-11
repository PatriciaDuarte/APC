/*Alunos:Mário e Patrícia
Exercicio 7*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Declaração struct funcionario
struct funcionario
{
	char nome[20];
	char cpf[20];
	int numpecas;
	float salario;
};

//Declaração variaveis globais
struct funcionario vetfunc[50] ;
int nfunc;
int i;//contador que manipula todos os vetores do programa
float totalSalario;
int totalPecas=0;

void op_maior_sal()
{
	float maior = 0.0;
	int IDFuncionario = 0;
	for(i=0; i<nfunc; i++)
	{
		if(vetfunc[i].salario > maior)
		{
			 maior= vetfunc[i].salario;
			 IDFuncionario = i;
		}
				
	}
	printf("\n\nDados do operário com maior salário:\n"); 
	printf("\nNome:%s \n",vetfunc[IDFuncionario].nome);
	printf("\nCPF:%s \n",vetfunc[IDFuncionario].cpf);
	printf("\nNumero de peças:%d \n",vetfunc[IDFuncionario].numpecas);
	printf("\nSalário:%f \n",vetfunc[IDFuncionario].salario);
}

int tot_pecas()
{
	 return totalPecas;
}

int tot_folha()
{
	return totalSalario;
	
}

void calc_salario() 
{
	float aux;
	for(i=0;i<nfunc;i++)
	{
		if(vetfunc[i].numpecas<=30)
		{
			vetfunc[i].salario = 230.00;
		}else
		if((vetfunc[i].numpecas>30)||(vetfunc[i].numpecas<46))
		{
			aux = 3*(230.00/100);			
			vetfunc[i].salario = 230.00+aux;
		}else
		if(vetfunc[i].numpecas>46)	
		{
			aux = 5*(230.00/100);			
			vetfunc[i].salario = 230.00+aux;			
		}
		totalSalario += vetfunc[i].salario;
	}
}

void le_outros_dados(int i)
{
		printf("Nome:");
		scanf("%s",vetfunc[i].nome);
		printf("Numero de peças:");
		scanf("%d",&vetfunc[i].numpecas);
		totalPecas +=vetfunc[i].numpecas; 
		printf("\n\n");
}

bool ver_CPF(char *cpf)
{

    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; ///se o CPF tiver todos os números iguais ele é inválido.
    else
    {
        ///digito 1---------------------------------------------------
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if(digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if((cpf[9]-48) != digito1)
            return 0; ///se o digito 1 não for o mesmo que o da validação CPF é inválido
        else
        ///digito 2--------------------------------------------------
        {
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                    digito2 += (cpf[i]-48) * j;
        digito2 %= 11;
        if(digito2 < 2)
            digito2 = 0;
        else
            digito2 = 11 - digito2;
        if((cpf[10]-48) != digito2)
            return 0; ///se o digito 2 não for o mesmo que o da validação CPF é inválido
        }
    }
    return 1;
}

void le_CPF(int id)
{
		printf("CPF:");
		scanf("%s",vetfunc[id].cpf);
}
void leitura()
{ // definição da função leitura:
	int i,j;
	
	printf("Digite número de funcionários (<= 50):");
	scanf("%d", &nfunc);
	for (i = 0; i < nfunc; i++)
	{
		le_CPF(i);
		while (ver_CPF(vetfunc[i].cpf) == 0)
		{
			printf(" \n Erro na digitação do CPF. \n");
			le_CPF(i);
		}
		le_outros_dados(i);
	}
}



int main()
{	
	leitura ();
	calc_salario();
	tot_folha();
	printf(" Total de peças fabricadas no mês = %d \n", tot_pecas());
	op_maior_sal();

	setlocale(LC_ALL,"Portuguese");
	return 0;
}
