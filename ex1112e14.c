/*
11. Cr�tica: Algoritmo bem mais complexo e menos eficiente por usar recursividade e tantas
compara��es dos IFs. Para resolver esse problema, o custo � menor usar a vers�o iterativa.

12. Cr�tica: N�o precisa resolver esse problema usando recursvidade. � s� usar o for.

14.  
int XX(int n)
{
	if(n==0) return 0;//Erro est� aqui... � return 1
	else return XX(n/3+1)+n;
}
*/
