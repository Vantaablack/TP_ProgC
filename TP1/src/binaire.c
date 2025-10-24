#include <stdio.h>


void afficherBinaire(unsigned int n) {
    int i;
        if (n & (1u << i))
            printf("1");
        else
            printf("0");
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main(void) {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("Affichage des nombres en binaire (32 bits) :\n\n");

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %u\nBinaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
