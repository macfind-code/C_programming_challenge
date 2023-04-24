#include <stdio.h>
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int vaccin = 1; // Ici tu met 1 pour oui et 0 pour non
    int majeur = 1; // Pareil que la ligne au dessus
      
    /*
     Petit rappel :
     Symbole : && --> ET
     Symbole : || --> OU
     Symbole : !  --> NON
     Symbole : == --> est égal à
     */
    
    if (majeur == 1 && vaccin == 1)
    {
        
        printf ("Vous êtes majeur et vacciné \n");
        
    }
else if (vaccin == 0 && majeur == 1)
             {
                 printf("Il faut vous faire piquer pour passer \n");
             }
else if (majeur == 0 && vaccin == 1)
{
    printf("T'es pas majeur mais t'es piqué \n");
}
else
{
    printf("Vous ne passerez pas la dounane \n");
}
    
    return 0;
}
