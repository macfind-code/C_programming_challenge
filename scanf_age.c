#include <stdio.h>
#include "stdlib.h"

/*
 Ci-dessous, vous avez la fonction principale du programme appelé main.
 C'est par cette fonction que tout les programmes commencent.
 Ici ma fonction ce contente d'afficher Hello word, bonjour... à l'écran.
 */

int main(int argc, char *argv[])

{
    int age = 0;
    
    printf("Quel age avez vous?");
    scanf("%d", &age);
    printf("Ah ! vous avez donc %d ans ! \n\n", age);
    
    return 0;
}
