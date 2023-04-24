#include <stdio.h>
#include "stdlib.h"

/*
 Ci-dessous, vous avez la fonction principale du programme appelé main.
 C'est par cette fonction que tout les programmes commencent.
 Ici ma fonction ce contente d'afficher Hello word, bonjour... à l'écran.
 */

int main(int argc, char *argv[])

{
    int nombreDeVies, niveau;
    nombreDeVies = 5, niveau = 1;
    
    printf("vous avez %d vies et vous etes au niveau %d \n", nombreDeVies, niveau);
    printf("***B A M***\n");
    nombreDeVies = 4;
    printf("Ah desole il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
        
    printf("***B O U M***\n", nombreDeVies);
    nombreDeVies = 3;
    printf("Attention plus que %d vies !\n\n", nombreDeVies);
    
    printf("***B I M***\n", nombreDeVies);
    nombreDeVies = 2;
    printf("Ouch plus que %d vies, seuil critique !\n\n", nombreDeVies);
    
    printf("***V L A N***\n", nombreDeVies);
    nombreDeVies = 1;
    printf("Plus que %d vie, un coup et t'es mort!\n\n", nombreDeVies);
    
    printf("*** C H O C A P I K***\n", nombreDeVies);
    nombreDeVies = 0;
    printf("%d vie, te voila au paradis :) \n\n", nombreDeVies);
    
    return 0;
}


