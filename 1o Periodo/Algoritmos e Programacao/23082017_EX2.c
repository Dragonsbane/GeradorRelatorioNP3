#include <stdio.h>

main()
{
	float C, F;
	printf("Informe Celsius: ");
	scanf("%f", &C);
	F = ((9*C+160) / 5);
	
	printf("\nFahrenheit: %f", F);
}
