#include <stdio.h>
 

 
int main() {
 
   	int N, hrs, min, seg;
	
	scanf("%d", &N);
	
	hrs = N / 3600;
	min = (N % 3600) / 60;
	seg = (N % 3600) % 60;
	
	printf("%d:%d:%d", hrs, min, seg);
	
	printf("\n");
 
    return 0;
}