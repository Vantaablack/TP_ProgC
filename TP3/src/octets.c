#include <stdio.h>
#include <string.h>




void print_bytes(void *p, int size) {
    unsigned char *c = p;
    for (int i = 0; i < size; i++)
        printf("%02x ", c[i]);
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long l = 0x0807060504030201;
    float f = 5.25;
    double d = 3.5;
    long double ld = 1.23456789;

    print_bytes(&s, sizeof(s));
    print_bytes(&i, sizeof(i));
    print_bytes(&l, sizeof(l));
    print_bytes(&f, sizeof(f));
    print_bytes(&d, sizeof(d));
    print_bytes(&ld, sizeof(ld));

    return 0;
}
