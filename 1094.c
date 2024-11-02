#include <stdio.h>

int main() {
 int n, i, qtd = 0, qtdS = 0, qtdC = 0, qtdR = 0, qtdT = 0;
	char tipo;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %c", &qtd, &tipo);
		if (tipo == 'C')
		{
			qtdC += qtd;
		}
		else if (tipo == 'R')
		{
			qtdR += qtd;
		}
		else
		{
			qtdS += qtd;
		}	
	}
	qtdT = qtdC + qtdR + qtdS;


	printf("Total: %d cobaias\n", qtdT);
	printf("Total de coelhos: %d\n", qtdC);
	printf("Total de ratos: %d\n", qtdR);
	printf("Total de sapos: %d\n", qtdS);
	printf("Percentual de coelhos: %.2f %\n", 100.0  * qtdC/qtdT );
	printf("Percentual de ratos: %.2f %\n", 100.0 * qtdR/qtdT);
	printf("Percentual de sapos: %.2f %\n", 100.0 * qtdS/qtdT);
 
    return 0;
}