//Autora: Patr�cia Duarte da Silva(201514322)
#include <stdio.h> 

int main()
{
	converter();//aqui est� chamando a fun��o
	return(0);
}

	//Fun��o converte para bin�rio
	int converter()
{
	int decimal,contador,quociente[80],resto[80]; 
	contador=0;               
	printf("Digite o numero decimal que serah passado para binario:\n");
	scanf("%d", &decimal);
	printf("%d em binarios: ",decimal);
 	 while (decimal != 1)
  		{    
  	 		quociente[contador]= decimal / 2;  
  			 resto[contador] = decimal % 2; 
  			 decimal=quociente[contador];      
  	 		contador++;
  	    }
    
 	 while (contador>=0)
  		{  
   		  if (quociente[contador] == 1) printf("1%d",resto[contador]);
          else printf("%d",resto[contador]);  
   			contador--;
 		 }
printf("\n");
return(0);
}
