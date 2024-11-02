#include <stdio.h>
 
 
int main() {
 
    int hrs, vel, dist;
	float totalLtrs;
	
	scanf("%d", &hrs);
	scanf("%d", &vel);
	
	dist = hrs * vel;
	totalLtrs = dist / 12.0;
	
	printf("%.3f", totalLtrs);
	
	printf("\n");
	
	return 0;
}