#include <stdio.h>

int main() {
    int compteur = 5; 
    int i = 1;

    if (compteur >= 10) {
        printf("Erreur : la valeur du compteur doit être inférieure à 10.\n");
        return 1;
    }

    printf("Triangle rectangle avec une boucle while :\n\n");

    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i > 2 && j > 1 && j < i) {
                printf("# ");
            } else {
                printf("* ");
            }

            j++;

            
            if (j > i) {
                continue;
            }
        }

        printf("\n");
        i++;

        
        if (i > compteur)
            break;
    }

    return 0;
}
