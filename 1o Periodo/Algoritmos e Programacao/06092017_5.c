#include <stdio.h>

main()
{
	int n1=0, n2=0, n3=0;
	
	n1:
	printf("\nDigite um numero positivo, não nulo e multiplo de 3: ");
	scanf("%d", &n1);
	
	if(!(n1 > 0 && (n1 %3) ==0))
	{
		printf("\nErro: condição nao atendida");
		goto n1;
	}
	
	n2:
	printf("\nDigite um numero positivo e não nulo: ");
	scanf("%d", &n2);
	
	if(!(n2 > 0))
	{
		printf("\nErro: condição nao atendida");
		goto n2;
	}
	
	n3:
	printf("\nDigite um numero positivo, não nulo e par: ");
	scanf("%d", &n3);
	
	if(n3 > 0)
	{
		if(n3 %2 != 0)
			n3++;
	}
	else
	{
		printf("\nErro: condição nao atendida");
		goto n3;
	}
	
	if(n1 == n2 || n1 == n3 || n3 == n2)
	{
		printf("\nErro: há numeros iguais.  Reiniciando.\n\n\n");
		goto n1;
	}
	printf("\nFim (%d, %d, %d)", n1, n2, n3);
}
