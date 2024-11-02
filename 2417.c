#include <stdio.h>

int main() {
 
   	int vc, ec, gc, vf, ef, gf, ptsc, ptsf;
	scanf ("%d %d %d %d %d %d", &vc, &ec, &gc, &vf, &ef, &gf);
	
	ptsc = 3 * vc + ec;
	ptsf = 3 * vf + ef;
	
	if (ptsc > ptsf)
	{
		printf("C\n");
	}	
	else if (ptsf > ptsc)
	{
		printf("F\n");
	}
	else 
	{
		if (gc > gf)
		{
			printf("C\n");
		}
		else if (gf > gc)
		{
			printf("F\n");
		}
		else printf("=\n");
	}
 
    return 0;
}