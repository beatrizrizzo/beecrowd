#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, ne, media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = (2 * n1 + 3 * n2 + 4 * n3 + n4)/10;
	printf("Media: %.1f\n", media);
	
	if (media > 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if (media >= 5.0 && media <= 6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &ne);
		printf("Nota do exame: %.1f\n",ne);
		media = (ne + media)/2;
		if (media >= 5.0)
		{
			printf("Aluno aprovado.\n");
		}
		else
		{
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1f\n", media);
	}
	else
	{
		printf("Aluno reprovado.\n");
	}
    return 0;
}