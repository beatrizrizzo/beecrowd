#include <stdio.h>

 
int main() {
 
 int inic, fim, qtd;
	scanf("%d %d", &inic, &fim);
	
	if (fim == inic)
	{
		qtd = 24;
	}
	else if (fim > inic)
	{
		qtd = fim - inic;
	}
	else
	{
		qtd = 24 - inic + fim;
	}
	
	printf("O JOGO DUROU %d HORA(S)", qtd);
	
	printf("\n");
 
    return 0;
}