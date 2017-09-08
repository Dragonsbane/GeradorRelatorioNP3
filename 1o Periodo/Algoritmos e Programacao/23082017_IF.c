#include <stdio.h>

main()
{
	char sexo;
	
	printf("Sexo: ");
	scanf("%c", &sexo);
	
	if(sexo == 'm' || sexo == 'M')
		printf("\nMasculino");
	else
		if(sexo == 'f' || sexo == 'F')
			printf("\nFeminino");
		else
			printf("\nOutro");
}
