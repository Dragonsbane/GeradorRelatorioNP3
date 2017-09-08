#include <stdio.h>

main()
{
	float reais, cotacao, dolar;
	printf("Reais: ");
	scanf("%f", &reais);
	printf("Cotacao: ");
	scanf("%f", &cotacao);

	dolar = reais * cotacao;
	
	printf("\nDolar: %f", dolar);
}
