#include <stdio.h>
 
 
int main() {
 
    int n, aux = 0;
	
	do
	{
		scanf("%d", &n);
		if (n == 2002)
		{
			printf("Acesso Permitido\n");
			aux = 1;
		}
		else
		{
			printf("Senha Invalida\n");
		}
			
	}while (aux == 0);
 
    return 0;
}