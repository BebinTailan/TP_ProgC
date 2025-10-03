#include <stdio.h>

int main(void) {
    char c = 0x1A;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678;
    long long int lli = 0x123456789ABCDEF0;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s  : %p, Valeur de s  : %04hx\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i  : %p, Valeur de i  : %08x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %08lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur de lli: %016llx\n", (void*)plli, *plli);
    printf("Adresse de f  : %p, Valeur de f  : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur de d  : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for (int b = 0; b < sizeof(long double); b++) {
        printf("%02x", *((unsigned char*)pld + b));
    }
    printf("\n\n");

    *pc = *pc - 1;
    *ps = *ps - 1;
    *pi = *pi - 1;
    *pli = *pli - 1;
    *plli = *plli - 1;
    *pf = 1.0f;
    *pd = 1.0;
    *pld = 1.0L;

    printf("Apres manipulation :\n");
    printf("Adresse de c  : %p, Valeur de c  : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s  : %p, Valeur de s  : %04hx\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i  : %p, Valeur de i  : %08x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %08lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur de lli: %016llx\n", (void*)plli, *plli);
    printf("Adresse de f  : %p, Valeur de f  : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur de d  : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for (int b = 0; b < sizeof(long double); b++) {
        printf("%02x", *((unsigned char*)pld + b));
    }
    printf("\n");

    return 0;
}
