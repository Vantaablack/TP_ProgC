#include <stdio.h>
#include <string.h>

int factorielle(int n) {
    if(n == 0) return 1;
    return n * factorielle(n - 1);
}

int main() {
    int n;
    printf("Entrez un entier naturel : ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, factorielle(n));

    return 0;
}
