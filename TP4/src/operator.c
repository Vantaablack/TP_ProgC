#include "operator.h"
#include <stdio.h>
#include <string.h>

int calculer(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b != 0) return a / b;
            else {
                printf("Erreur: division par zéro\n");
                return 0;
            }
        case '%': 
            if (b != 0) return a % b;
            else {
                printf("Erreur: modulo par zéro\n");
                return 0;
            }
        case '&': return a & b;
        case '|': return a | b;
        case '~': return ~a; // Ignore b pour la négation
        default: 
            printf("Opérateur inconnu.\n");
            return 0;
    }
}

