#include <stdio.h>
#include <string.h>

int main() {
    char s1[100] = "Hello";
    char s2[100] = " World!";
    char copy[100];
    char concat[200];

    int len = 0;
    while (s1[len] != '\0') len++;

    int i = 0;
    while (s1[i] != '\0') {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';

    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    int j = 0;
    while (s2[j] != '\0') {
        concat[i + j] = s2[j];
        j++;
    }
    concat[i + j] = '\0';

    printf("%d\n%s\n%s\n", len, copy, concat);
    return 0;
}
