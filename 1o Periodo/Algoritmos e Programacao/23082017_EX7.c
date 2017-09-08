#include <stdio.h>

main()
{
	char nome[20];
	float nota1, nota2, nota3, media;
	printf("Nome: ");
	scanf("%s", &nome);
	printf("Nota 1: ");
	scanf("%f", &nota1);
	printf("Nota 2: ");
	scanf("%f", &nota2);
	printf("Nota 3: ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;
	
	printf("\nNome: %s - Media: %f", nome, media);
}
