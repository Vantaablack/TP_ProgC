#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;        
    int modulo = a % b;

    int egal = (a == b);         
    int superieur = (a > b);     


    printf("Valeurs initiales : a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b)        = %d\n", addition);
    printf("Soustraction (a - b)    = %d\n", soustraction);
    printf("Multiplication (a * b)  = %d\n", multiplication);
    printf("Division (a / b)        = %d\n", division);
    printf("Modulo (a %% b)          = %d\n\n", modulo);
    printf("Comparaison (a == b)    = %d\n", egal);
    printf("Comparaison (a > b)     = %d\n", superieur);

    return 0;
}
