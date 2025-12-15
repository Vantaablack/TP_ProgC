#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = rand() % 1000 + 1;

    int min = t[0];
    int max = t[0];

    for (int i = 1; i < 100; i++) {
        if (t[i] < min) min = t[i];
        if (t[i] > max) max = t[i];
    }

    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}
