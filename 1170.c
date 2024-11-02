#include <stdio.h>

int main(){

    int N, dias, i;
    float capac;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%f", &capac);
        dias = 0;
        while(capac > 1)
        {
            capac /= 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }

    return 0;
}