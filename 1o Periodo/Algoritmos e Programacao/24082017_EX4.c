#include <stdio.h>

main()
{
int num1, num2, num3, menor, meio, maior;

printf("NUM1: ");
scanf("%i", &num1);
printf("NUM2: ");
scanf("%i", &num2);
printf("NUM3: ");
scanf("%i", &num3);

if (!(num1 == num2 && num1 == num3))
{
	if(num1 > num2 && num1 > num3)
		maior = num1;
	else
		if(num1 < num2 && num1 < num3)
			menor = num1;
		else
			meio = num1;
	
	if(num2 > num1 && num2 > num3)
		maior = num2;
	else
		if(num2 < num1 && num2 < num3)
			menor = num2;
		else
			meio = num2;
	
	if(num3 > num1 && num3 > num2)
		maior = num3;
	else
		if(num3 < num1 && num3 < num2)
			menor = num3;
		else
			meio = num3;
}
else
	printf("Erro: Numeros Iguais");

printf("\nMenor : %i\n", menor);
printf("Meio  : %i\n", meio);
printf("Maior : %i\n", maior);
}
