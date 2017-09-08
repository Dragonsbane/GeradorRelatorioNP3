#include <stdio.h>

main()
{
	int inteiro, total = 0;
	char resposta;
	
	inicio:
	printf("\nDigite um valor inteiro: ");
	scanf("%d", &inteiro);
	
	if((inteiro %2) == 0)
		total = total + inteiro;
	else
	{
		printf("Erro: Numero digitado é impar\n\n");
		goto inicio;
	}
		
	printf("\nRepetir (S/n)? ");
	scanf("%s", &resposta);
	if(resposta != 'N')
		goto inicio;
	else
		printf("\nTotal: %d", total);
}
