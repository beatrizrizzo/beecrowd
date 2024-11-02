#include <stdio.h>
 

int main() {
 
    int i, cont = 0, n;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			cont++;
		}
	}
	
	printf("%d valores pares", cont);
	printf("\n");
 
    return 0;
}