#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    // On envoie l'adresse de heures et minutes
    decoupeMinutes(&heures, &minutes);

    // Cette fois, les valeurs ont été modifiées !
    printf("%d heures et %d minutes\n", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    /* Attention à ne pas oublier de mettre une étoile devant le nom
    des pointeurs ! Comme ça, vous pouvez modifier la valeur des variables,
    et non leur adresse ! Vous ne voudriez pas diviser des adresses,
    n'est-ce pas ? ;o) */
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}

/*
 1. Les variables heures et minutes sont créées dans le main  .
 2. On envoie à la fonction decoupeMinutes l'adresse de heures et minutes  .
 3. La fonction decoupeMinutes récupère ces adresses dans des pointeurs appeléspointeurHeures et pointeurMinutes  . Notez que, là encore, le nom importe peu. J'aurais pu les appeler h et m, ou même heures et minutes  . Je ne l'ai pas fait car je ne veux pas que vous risquiez de confondre avec les variables heures et minutes du main  , qui ne sont pas les mêmes.
 4. La fonction decoupeMinutes modifie directement les valeurs des variables heures etminutes en mémoire, car elle possède leurs adresses dans des pointeurs. La seule contrainte, un peu gênante je dois le reconnaître, c'est qu'il faut impérativement mettre une étoile devant le nom des pointeurs si on veut modifier la valeur de heures et de minutes  . Si on n'avait pas fait ça, on aurait modifié l'adresse contenue dans les pointeurs, ce qui n'aurait servi… à rien.
 */
 
