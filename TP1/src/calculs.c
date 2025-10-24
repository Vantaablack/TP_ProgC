#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 3;
    char op = '*';  
    int resultat;   
    printf("num1 = %d, num2 = %d, op = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro interdite.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro interdit.\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}


