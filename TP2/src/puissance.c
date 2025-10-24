#include <stdio.h>

int main(void) {
    int a = 2;  
    int b = 3;  
    int resultat = 1; 

    printf("Calcul de %d^%d\n\n", a, b);

    for (int i = 1; i <= b; i++) {
        resultat *= a; 
    }

    printf("Résultat : %d^%d = %d\n", a, b, resultat);

    return 0;
}
