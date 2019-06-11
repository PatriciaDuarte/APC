/*
11. Crítica: Algoritmo bem mais complexo e menos eficiente por usar recursividade e tantas
comparações dos IFs. Para resolver esse problema, o custo é menor usar a versão iterativa.

12. Crítica: Não precisa resolver esse problema usando recursvidade. É só usar o for.

14.  
int XX(int n)
{
	if(n==0) return 0;//Erro está aqui... É return 1
	else return XX(n/3+1)+n;
}
*/
