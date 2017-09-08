#include <stdio.h>

main()
{
int num1, num2, num3, maior;

printf("NUM1: ");
scanf("%i",&num1);
printf("NUM2: ");
scanf("%i",&num2);
printf("NUM3: ");
scanf("%i",&num3);

if(num1 > num2 && num1 > num3)
	maior = num1;
else
	if(num2 > num1 && num2 > num3)
		maior = num2;
	else
		maior = num3;

printf("Maior: %i", maior);

}
