#include <stdio.h>
#include <string.h>


int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long li = 0x11111111;
    long long ll = 0x1122334455667788;
    float f = 2.5f;
    double d = 3.14;
    long double ld = 1.2345;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("%p %x\n", pc, c);
    printf("%p %hx\n", ps, s);
    printf("%p %x\n", pi, i);
    printf("%p %lx\n", pli, li);
    printf("%p %llx\n", pll, ll);

    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pli = 0x22222222;
    *pll = 0x8877665544332211;

    printf("%p %x\n", pc, c);
    printf("%p %hx\n", ps, s);
    printf("%p %x\n", pi, i);
    printf("%p %lx\n", pli, li);
    printf("%p %llx\n", pll, ll);

    return 0;
}
