#include <stdio.h>
#include <string.h>

void chercher_phrase(const char *nom_fichier, const char *phrase) {
    FILE *f = fopen(nom_fichier, "r");
    if (!f) {
        printf("Impossible d'ouvrir le fichier %s\n", nom_fichier);
        return;
    }

    char ligne[1024];
    int num_ligne = 1;

    while (fgets(ligne, sizeof(ligne), f)) {
        int count = 0;
        char *ptr = ligne;

        // Compte le nombre d'occurrences de la phrase dans la ligne
        while ((ptr = strstr(ptr, phrase)) != NULL) {
            count++;
            ptr += strlen(phrase); // avancer pour ne pas boucler
        }

        if (count > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, count);
        }

        num_ligne++;
    }

    fclose(f);
}
