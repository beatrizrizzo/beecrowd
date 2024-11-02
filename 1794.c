#include <stdio.h>
 
 
int main() {
 	
 	int N, LA, LB, SA, SB;
	scanf("%d", &N);
	scanf("%d %d",&LA, &LB);
	scanf("%d %d",&SA, &SB);
	
	if (N >= LA && N >= SA && N <= LB && N <=SB)
		printf("possivel");
	else
		printf("impossivel");
		
	printf("\n");
 
    return 0;
}