#include <stdio.h>
#include <string.h>


int main() {
    char noms[5][50] = {"Dupont","Martin","Durand","Moreau","Petit"};
    char prenoms[5][50] = {"Alice","Jean","Laura","Max","Lea"};
    char adresses[5][100] = {
        "1 rue A", "2 rue B", "3 rue C", "4 rue D", "5 rue E"
    };
    float noteC[5] = {12.5, 14.0, 9.5, 16.0, 11.0};
    float noteSys[5] = {10.0, 15.5, 12.0, 14.5, 13.0};

    for (int i = 0; i < 5; i++) {
        printf("%s %s\n%s\n%.1f %.1f\n\n",
               noms[i], prenoms[i], adresses[i], noteC[i], noteSys[i]);
    }

    return 0;
}
