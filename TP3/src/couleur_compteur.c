#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} Elem;

int same(Couleur a, Couleur b) {
    return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

int main() {
    Couleur t[100];
    Elem distinct[100];
    int nd = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        t[i].r = rand() % 256;
        t[i].g = rand() % 256;
        t[i].b = rand() % 256;
        t[i].a = rand() % 256;
    }

    for (int i = 0; i < 100; i++) {
        int found = 0;
        for (int j = 0; j < nd; j++) {
            if (same(t[i], distinct[j].c)) {
                distinct[j].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            distinct[nd].c = t[i];
            distinct[nd].count = 1;
            nd++;
        }
    }

    for (int i = 0; i < nd; i++)
        printf("%02x %02x %02x %02x : %d\n",
            distinct[i].c.r,
            distinct[i].c.g,
            distinct[i].c.b,
            distinct[i].c.a,
            distinct[i].count);

    return 0;
}
