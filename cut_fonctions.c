#include <stdio.h>
#include <stdlib.h>

int triple(int nombre) // 6 On saute à la fonction triple et on récupère un paramètre (nombre).
{
    return 3 * nombre; // 7 On fait des calculs sur le nombre et on termine la fonction :return signifie la fin de la fonction, et permet d'indiquer le résultat à renvoyer.
}

int main(int argc, char *argv[]) // 1 Le programme commence par la fonction main.
{
    int nombreEntre = 0, nombreTriple = 0; // 2 Il lit les instructions dans la fonction, une par une, dans l'ordre.
    
    printf("Entrez un nombre... "); // 3 Il lit l'instruction suivante et fait ce qui est demandé (printf).
    scanf("%d", &nombreEntre); // 4 De même, il lit l'instruction et fait ce qui est demandé (scanf).
    
    nombreTriple = triple(nombreEntre); // 5 Il lit l'instruction… Ah ! On appelle la fonction triple, on doit donc sauter à la ligne de la fonction triple plus haut.
    printf("Le triple de ce nombre est %d\n", nombreTriple); // 8 On retourne dans main pour prendre l'instruction suivante.
    
    return 0; // 9 Un return : la fonction  main  se termine, et donc le programme est terminé.
}
