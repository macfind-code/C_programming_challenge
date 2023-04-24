/*
 Ci-dessous ce sont les directives de préprocesseur.
 Ces lignes permettent d'ajouter des fichiers au projet,
 Fichiers que l'on appelle bibliothèques.
 Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
 par exemple un message à l'écran.
 */

#include <stdio.h>
#include "stdlib.h"

/*
 Ci-dessous, vous avez la fonction principale du programme appelé main.
 C'est par cette fonction que tout les programmes commencent.
 Ici ma fonction ce contente d'afficher Hello word, bonjour... à l'écran.
 */

int main(int argc, const char * argv[]) {
    // juste un commentaire...
    printf("Hello, World!\n"); // Cette instruction affiche un message à l'écran
    printf("Bonjour\nAu revoir\n");
    return 0; // le programme renvoi le nombre 0 puis s'arrête
}

int nombreDeVies;
int nombreDeVies = 5;

