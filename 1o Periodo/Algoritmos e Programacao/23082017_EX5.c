#include <stdio.h>

main()
{
	int potencia, dias; 
	float horas, consumo, consumo_mes;
	printf("Potencia: ");
	scanf("%i", &potencia);
	printf("Dias: ");
	scanf("%i", &dias);
	printf("Horas Dia: ");
	scanf("%f", &horas);

	consumo = potencia * horas;
	consumo_mes = consumo * dias;
	
	printf("\nConsumo Diario: %f", consumo);
	printf("\nConsumo Mes: %f", consumo_mes);
}
