//Autora: Patrícia Duarte da Silva(201514322)
#include <stdio.h>
main()
{
	int opcao;
	
	printf("Digite de 1 a 4:");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
				printf("\nDar desconto de 10%%");
				break;
		case 2:
				printf("\nDar desconto de 15%%");
				break;
		case 3:
				printf("\nDar desconto de 10%%");
				break;
		case 4:
				printf("\nDar desconto de 5%%");
				break;
		default:
				printf("\nNao dar desconto.");
			
		
	}
  getch();
  return 0;
	
}

