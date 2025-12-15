#include "liste.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct couleur *nouveau = malloc(sizeof(struct couleur));
    if (!nouveau) return;
    *nouveau = *c;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(struct liste_couleurs *liste) {
    struct couleur *courant = liste->tete;
    while (courant) {
        printf("R:%d G:%d B:%d A:%d\n", courant->r, courant->g, courant->b, courant->a);
        courant = courant->suivant;
    }
}
