#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operator.c"

int main(int argc, char *argv[]) {
    if(argc != 4) {
        printf("Usage: %s <opérateur> <num1> <num2>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    int resultat = calculer(num1, num2, op);
    printf("Résultat : %d\n", resultat);

    return 0;
}
