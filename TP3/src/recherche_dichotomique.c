#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = i * 2;

    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier a chercher : ");
    scanf("%d", &x);

    int debut = 0, fin = 99, found = 0;

    while (debut <= fin) {
        int mid = (debut + fin) / 2;
        if (t[mid] == x) {
            found = 1;
            break;
        } else if (x < t[mid])
            fin = mid - 1;
        else
            debut = mid + 1;
    }

    if (found)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
