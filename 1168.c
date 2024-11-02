#include <stdio.h>
#include <string.h>

int main(){

    int n, j, i, count, tam;
    char num[110];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &num);
        tam = strlen(num);
        count = 0;
        for (j = 0; j < tam; j++)
        {
            switch (num[j])
            {
                case '1':
                    count += 2;
                    break;
                case '2':
                    count+= 5;
                    break;
                case '3':
                    count+= 5;
                    break;
                case '4':
                    count+= 4;
                    break;
                case '5':
                    count += 5;
                    break;
                case '6':
                    count+= 6;
                    break;
                case '7':
                    count += 3;
                    break;
                case '8':
                    count+= 7;
                    break;
                case '9':
                    count += 6;
                    break;
                case '0':
                    count+= 6;
                    break;
            }

        }
        printf("%d leds\n", count);
    }


}