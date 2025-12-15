#include <stdio.h>
#include <string.h>



struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant e[5];

    strcpy(e[0].nom,"Dupont"); strcpy(e[0].prenom,"Marie");
    strcpy(e[0].adresse,"20 Niels Bohr, Lyon"); e[0].note1 = 16.5; e[0].note2 = 12.1;

    strcpy(e[1].nom,"Martin"); strcpy(e[1].prenom,"Pierre");
    strcpy(e[1].adresse,"22 Niels Bohr, Lyon"); e[1].note1 = 14.0; e[1].note2 = 14.1;

    strcpy(e[2].nom,"Durand"); strcpy(e[2].prenom,"Julie");
    strcpy(e[2].adresse,"10 Avenue X"); e[2].note1 = 11.0; e[2].note2 = 13.5;

    strcpy(e[3].nom,"Moreau"); strcpy(e[3].prenom,"Paul");
    strcpy(e[3].adresse,"5 Rue Y"); e[3].note1 = 15.0; e[3].note2 = 9.5;

    strcpy(e[4].nom,"Petit"); strcpy(e[4].prenom,"Laura");
    strcpy(e[4].adresse,"8 Rue Z"); e[4].note1 = 12.0; e[4].note2 = 16.0;

    for (int i = 0; i < 5; i++) {
        printf("%s %s\n%s\n%.1f %.1f\n\n",
               e[i].nom, e[i].prenom, e[i].adresse, e[i].note1, e[i].note2);
    }

    return 0;
}
