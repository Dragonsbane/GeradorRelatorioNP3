#include <stdio.h>

main()
{
	float salario, desconto, salario_liquido;
	printf("Salario: ");
	scanf("%f", &salario);
	
	desconto = salario * 20 / 100;
	salario_liquido = salario - desconto;
	
	printf("\nSalario Liquido: %f", salario_liquido);
}
