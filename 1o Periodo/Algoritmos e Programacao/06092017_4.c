#include <stdio.h>

main()
{
	int numero, contagem=0;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	repeticao:
	if(numero >= contagem)
	{
		printf("%d\n", contagem);
		contagem++;
		goto repeticao;
	}
}
