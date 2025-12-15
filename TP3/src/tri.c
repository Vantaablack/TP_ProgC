#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = rand() % 2001 - 1000;

    printf("Tableau non trie :\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 99 - i; j++)
            if (t[j] > t[j + 1]) {
                int tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }

    printf("Tableau trie :\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    return 0;
}
