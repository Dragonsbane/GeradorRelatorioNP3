#include <stdio.h>

main()
{
	float peso, altura, IMC;
	printf("Peso: ");
	scanf("%f", &peso);
	printf("Altura: ");
	scanf("%f", &altura);

	IMC = peso / (altura * altura);
	
	printf("\nIMC: %f", IMC);
}
