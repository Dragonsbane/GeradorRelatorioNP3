#include <stdio.h>
#include <string.h>

main()
{
    char nome[40];
    int tot;
    printf("Digite um nome: ");
    gets(nome);
    
    //strlen
    tot = strlen(nome);
    if(tot > 30)
       printf("\nErro");
    else
       printf("\nNome: %s\n", nome);
}