#include<stdio.h>

int main()
{

	long long int n;
	scanf("%lld", &n);
	
	printf("%lld\n", n);
	
	while(n > 9)
	{
		n = n/10 * 3 + n % 10;
		printf("%lld\n", n);
	}
}