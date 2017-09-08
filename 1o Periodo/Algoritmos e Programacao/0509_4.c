#include <stdio.h>
#include <string.h>

main()
{
    char p1[20];
    char p2[20];
    printf("Digite P1: ");
    gets(p1);
    printf("Digite P2: ");
    gets(p2);
    
    if (strcmp(p1, p2) == 0)
       printf("\nP1 = P2");
    else
       printf("\nP1 <> P2");
    
    if(strcmp(p1, "papagaio") == 0)
       printf("\nP1 = papagaio");
    
    if(strcmp(p2, "papagaio") == 0)
       printf("\nP2 = papagaio");
    
}