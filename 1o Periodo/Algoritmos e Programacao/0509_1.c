#include <stdio.h>
#include <string.h>

main()
{
    char nome[9];
    int tot;
    printf("Digite um nome: ");
    gets(nome);
    
    //strlen
    tot = strlen(nome);
    printf("strlen: %i\n", tot);
}