#include <stdio.h>

 
int main() {
 
   int n, X[1001], menor, i, pos = 0;
	scanf("%d", &n);
	
	scanf("%d", &X[0]);
	menor = X[0];
	for (i = 1; i < n; i++)
	{
		scanf("%d", &X[i]);
		if (X[i] < menor)
		{
			menor = X[i];
			pos = i;
		}
			
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d", pos);
	
	
	printf("\n");
 
    return 0;
}