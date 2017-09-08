#include <stdio.h>
#include <string.h>

main()
{
	char palavra[50];
	int numpalavras=0, tamanho=0, totalpar=0, divisor=0;
	float media;
	
	inicio:
	printf("\nDigite uma palavra: ");
	gets(palavra);
	
	tamanho = strlen(palavra);
	
	if(tamanho > 30)
	{
		printf("\nPalavra excede limite de 30 caracteres.");
		goto inicio;
	}
	else
	{
		if((tamanho %2) == 0)
		{
			totalpar = totalpar + tamanho;
			divisor++;
			numpalavras++;
		}
		else
			numpalavras++;
	}
	
	if(numpalavras == 3)
	{
		media = totalpar / divisor;
		printf("\nMedia aritmetica (%d palavras): %f", divisor, media);
	}
	else
		goto inicio;
}
