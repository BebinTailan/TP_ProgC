#include <stdio.h>

int main() {
    char c = 65;
    short s = -10;
    int i = -100;
    long int li = -1000L;
    long long int lli = -10000LL;
    unsigned char uc = 100;
    unsigned short us = 500;
    unsigned int ui = 1000U;
    unsigned long int uli = 10000UL;
    unsigned long long int ulli = 100000ULL;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 9.42L;

    printf("char: %c (%d)\n", c, c);
    printf("short: %hd\n", s);
    printf("int: %d\n", i);
    printf("long int: %ld\n", li);
    printf("long long int: %lld\n", lli);
    printf("unsigned char: %u\n", uc);
    printf("unsigned short: %hu\n", us);
    printf("unsigned int: %u\n", ui);
    printf("unsigned long int: %lu\n", uli);
    printf("unsigned long long int: %llu\n", ulli);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);
    
    return 0;
}