#ifndef LISTE_H
#define LISTE_H

struct couleur {
    unsigned char r, g, b, a;
    struct couleur *suivant;
};

struct liste_couleurs {
    struct couleur *tete;
};

void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *c, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);

#endif
