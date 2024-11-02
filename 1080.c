#include <stdio.h>
 
int main() {
 
   int c, n, i, maior;
	scanf("%d", &n);
	maior = n;
	c = 1;
	for (i = 2; i <= 100 ; i++)
	{
		scanf("%d", &n);
		if (n > maior)
		{
			maior = n;
			c = i;
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", c);
 
    return 0;
}