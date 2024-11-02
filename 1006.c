#include <stdio.h>
 
 
int main() {
 
    double A, B, C, media;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	media = (2 * A + 3 * B + 5 * C)/10;	
	
	printf("MEDIA = %.1lf", media);
	
	printf("\n");
 
    return 0;
}