#include <stdio.h>
#include <string.h>

main()
{
    char uf[2];
    printf("Digite a UF: ");
    gets(uf);
   
    if(strcmp(uf, "rj") == 0)
       printf("Rio de Janeiro");
    else
       if (strcmp(uf, "sp") == 0)
          printf("Sao Paulo");
       else
          if(strcmp(uf, "mt") == 0)
             printf("Mato Grosso");
          else
             printf("UF invalida");
}