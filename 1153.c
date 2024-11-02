#include <stdio.h>
 
 
int main() {
 
   	int n,i,res;
	scanf("%d", &n);
	res = n;
	for (i = 1; i < n - 1; i++)
	{	
		res = res * (n - i);	
	}
	
	printf("%d\n",res);
 
    return 0;
}