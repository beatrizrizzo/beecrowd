#include <stdio.h>
 
int main() {
 
   float n;
	scanf("%f", &n);
	
	if (n > 100. || n < 0.)
	{
		printf("Fora de intervalo\n");
	}
	else
	{
		if (n > 25 && n <= 50)
		{
			printf("Intervalo (25,50]\n");
		}
		else if (n >= 0 && n <= 25 )
		{
			printf("Intervalo [0,25]\n");
		}
		else
		{
			printf("Intervalo (75,100]\n");
		}
	}
    return 0;
}