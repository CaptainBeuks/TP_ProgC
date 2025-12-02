#include <stdio.h>

int main() {

    char c = 0x12;
    short s = 0x1234;
    int i = 0x89abcdef;
    long l = 0x11112222;
    long long ll = 0x1122334455667788;
    float f = 0x1.2p+3;
    double d = 0x1.4p+5;
    long double ld = 0x1.6p+4;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur : %hx\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void*)pl, l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void*)pll, ll);
    printf("Adresse de f : %p, Valeur : %a\n", (void*)pf, f);
    printf("Adresse de d : %p, Valeur : %a\n", (void*)pd, d);
    printf("Adresse de ld : %p, Valeur : %La\n\n", (void*)pld, ld);

    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x12345678;
    *pl = 0x33334444;
    *pll = 0xaabbccddeeff0011;
    *pf = 0x1.8p+2;
    *pd = 0x1.1p+4;
    *pld = 0x1.9p+3;

    printf("Apres la manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur : %hx\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, i);
    printf("Adresse de l : %p, Valeur : %lx\n", (void*)pl, l);
    printf("Adresse de ll : %p, Valeur : %llx\n", (void*)pll, ll);
    printf("Adresse de f : %p, Valeur : %a\n", (void*)pf, f);
    printf("Adresse de d : %p, Valeur : %a\n", (void*)pd, d);
    printf("Adresse de ld : %p, Valeur : %La\n", (void*)pld, ld);

    return 0;
}
