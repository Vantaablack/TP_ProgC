
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void exercice_4_1() {
    int num1, num2;
    char op;
    printf("Entrez num1: "); scanf("%d", &num1);
    printf("Entrez num2: "); scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~): "); scanf(" %c", &op);

    int resultat = calculer(num1, num2, op);
    printf("Résultat: %d\n", resultat);
}

void exercice_4_2() {
    int choix;
    char nom[100], message[256];
    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix: ");
    scanf("%d", &choix);
    if (choix == 1) {
        printf("Entrez le nom du fichier à lire: "); scanf("%s", nom);
        lire_fichier(nom);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire: "); scanf("%s", nom);
        printf("Entrez le message à écrire: "); scanf(" %[^\n]", message);
        ecrire_dans_fichier(nom, message);
    } else {
        printf("Choix invalide.\n");
    }
}

void exercice_4_7() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    for (int i = 0; i < 2; i++) { // Exemple avec 2 couleurs, peut faire 10 si besoin
        struct couleur c;
        printf("Entrez R G B A de la couleur %d: ", i+1);
        scanf("%hhu %hhu %hhu %hhu", &c.r, &c.g, &c.b, &c.a);
        insertion(&c, &ma_liste);
    }

    printf("Liste des couleurs:\n");
    parcours(&ma_liste);
}

int main() {
    int exo;
    printf("Choisissez l'exercice à exécuter (4.1, 4.2, 4.7): ");
    scanf("%d", &exo);

    switch(exo) {
        case 41: exercice_4_1(); break;
        case 42: exercice_4_2(); break;
        case 47: exercice_4_7(); break;
        default: printf("Exercice non disponible.\n"); break;
    }

    return 0;
}
