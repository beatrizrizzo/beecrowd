#include <stdio.h>
 
 
int main() {
 
   int n, x, y, i, sum = 0, k, res[100];
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x % 2 == 1)
		{
			sum = x;
		}
		else
		{
			x++;
			sum = x;
		}
	
		for (k = 1; k < y; k++)
		{
			x = x + 2;
			sum+= x;
		}
		res[i] = sum;
		sum = 0;
	}
	
	for (i = 0;i < n; i++)
	{
		printf("%d\n", res[i]);
	}
 
    return 0;
}