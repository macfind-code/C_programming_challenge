//
//  main.c
//  monpremierprogramme.C
//
//  Created by Clément Asensio on 29/04/2022.
//

/*
 Ci-dessous ce sont les directives de préprocesseur.
 Ces lignes permettent d'ajouter des fichiers au projet,
 Fichiers que l'on appelle bibliothèques.
 Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
 par exemple un message à l'écran.
 */

#include <stdio.h>
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int choixMenu;
    
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Bacon Lovers\n");
    printf("3. Mc Deluxe\n");
    printf("4. Big Mac\n");
    printf("5. Coca\n");
    printf("\nVotre choix ?\n");
    
    scanf("%d", &choixMenu);
    
    switch (choixMenu)
    {
        case 1:
            printf("Vous avez choisi le Royal Cheese (miam le cheedar)\n");
            break;
        case 2:
            printf("vous avez choisi le Bacon lovers (Tout est bon dans le cochon!)\n");
            break;
        case 3:
            printf("Vous avez choisi le Mc Deluxe (Pour avoir le goût du luxe)\n");
            break;
        case 4:
            printf("Vous avez choisi Big Mac (Parce que vous n'avez pas de personnalité...)\n");
            break;
        case 5:
            printf("Vous avez choisi un Coca juste pour le gout des USA\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct.\n");
    }

    printf("\n");
    
    return 0;
}
