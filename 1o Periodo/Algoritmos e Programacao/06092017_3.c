#include <stdio.h>
#include <string.h>

main()
{
	char palavra[15]="", concat[25]="";
	int numpalavras=0;

	inicio:
	printf("\nDigite uma palavra: ");
	gets(palavra);
	
	if(strlen(palavra) > 12)
	{
		printf("\nPalavra excede limite de 12 caracteres.");
		goto inicio;
	}
	else
	{
		strcat(concat, palavra);
		numpalavras++;
		if(numpalavras == 2)
			printf("\nConcatenacao: %s", concat);
		else
			goto inicio;
	}
}
