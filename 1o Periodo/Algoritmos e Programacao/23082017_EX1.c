#include <stdio.h>

main()
{
	int nad, inss, salario; 
	float vha, desconto, salario_liquido;
	printf("VHA: ");
	scanf("%f", &vha);
	printf("NAD: ");
	scanf("%i", &nad);
	printf("INSS: ");
	scanf("%i", &inss);
	salario = vha * nad;
	desconto = salario * inss / 100;
	salario_liquido = salario - desconto;
	
	printf("\nSalario: %i", salario);
	printf("\nDesconto: %f", desconto);
	printf("\nSalario liquido: %f", salario_liquido);
}
