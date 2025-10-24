#include <stdio.h>

int main(void) {
    signed char c1 = -100;
    unsigned char c2 = 200;
    signed short s1 = -15000;
    unsigned short s2 = 50000;
    signed int i1 = -100000;
    unsigned int i2 = 3000000000U;
    signed long int l1 = -2000000000L;
    unsigned long int l2 = 4000000000UL;
    signed long long int ll1 = -9000000000000000000LL;
    unsigned long long int ll2 = 18000000000000000000ULL;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887498948482L;

    printf("Valeurs des différentes variables :\n\n");

    printf("signed char       : %d\n", c1);
    printf("unsigned char     : %u\n\n", c2);
    printf("signed short      : %d\n", s1);
    printf("unsigned short    : %u\n\n", s2);
    printf("signed int        : %d\n", i1);
    printf("unsigned int      : %u\n\n", i2);
    printf("signed long int   : %ld\n", l1);
    printf("unsigned long int : %lu\n\n", l2);
    printf("signed long long int   : %lld\n", ll1);
    printf("unsigned long long int : %llu\n\n", ll2);
    printf("float             : %f\n", f);
    printf("double            : %lf\n", d);
    printf("long double       : %Lf\n", ld);

    return 0;
}
