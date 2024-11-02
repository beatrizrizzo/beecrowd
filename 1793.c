#include <stdio.h>
 
int main() {
    int N, t, diferenca;
    while(1)
    {
    	t = 10;
    	scanf("%d", &N);
    	if(N == 0)
    		break;
    	int tempo[N+1];
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &tempo[i]);
        }
        for(int j = 0; j < N-1; j++)
        {
            if (tempo[j+1] - tempo[j] >= 10)
	        {
	            t = t + 10;
	        }
	        else
	        {
	        	diferenca = tempo[j+1] - tempo[j];
	        	t += diferenca;
			}
        }
    printf("%d\n", t);
    }
    
    return 0;
}