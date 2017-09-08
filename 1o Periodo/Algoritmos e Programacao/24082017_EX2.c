#include <stdio.h>

main()
{
int idade;
char sexo;
float salario, salario_liquido;

printf("Sexo: ");
scanf("%c", &sexo);
printf("Idade: ");
scanf("%i", &idade);
printf("salario: ");
scanf("%f", &salario);

if (sexo == 'm')
	if (idade == 23)
		salario_liquido = salario + (salario * 6/100);
	else
		salario_liquido = salario + (salario * 10/100);
else
	if (idade == 21)
		salario_liquido = salario + (salario * 8/100);
	else
		if (idade == 36)
			salario_liquido = salario + (salario * 12/100);
		else
			salario_liquido = salario + (salario * 18/100);

printf("Salario Liquido: %f", salario_liquido);
}
