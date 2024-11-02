#include<stdio.h>
 
 
    int main(){
    int h, m, hm;
	while (scanf("%d", &h) != EOF)
	{
		scanf("%d", &m);
	    //hm = h%30;
	    h = h / 30;
	    m = m / 6;
	    printf("%02d:%02d\n", h, m);
	}
	return 0;
}