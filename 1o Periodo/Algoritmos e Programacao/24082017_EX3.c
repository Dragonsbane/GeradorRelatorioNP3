#include <stdio.h>

main()
{
int num1, num2, num3;

printf("Num1: ");
scanf("%i",&num1);
printf("Num2: ");
scanf("%i",&num2);
printf("Num3: ");
scanf("%i",&num3);

if(num1 == num2 && num1 == num3)
	printf("Triangulo Equilatero");
else
	if(num1 != num2 && num1 != num3 && num3 != num2)
		printf("Triangulo Escaleno");
	else
		printf("Triangulo Isosceles");
}
