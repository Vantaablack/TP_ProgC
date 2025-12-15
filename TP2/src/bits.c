#include <stdio.h>
#include <string.h>

int main() {
    int d = 0xF00F0000;

    int bit4  = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
