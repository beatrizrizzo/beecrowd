#include <stdio.h>

 
int main() {
 
	int N[10], v,i;
	scanf("%d", &v);
	
	N[0] = v;
	printf("N[0] = %d\n", v);
	for(i = 1; i < 10; i++)
	{
		N[i] = N[i-1] * 2;
		printf("N[%d] = %d\n",i, N[i]);
	}
 
    return 0;
}