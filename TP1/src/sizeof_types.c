#include <stdio.h>

int main(void){
    printf("la longueur de char : %zu octets\n", sizeof(char));
    printf("la longueur de signed char : %zu octets\n", sizeof(signed char));
    printf("la longueur de unsigned char : %zu octets\n", sizeof(unsigned char));

    printf("la longueur de short : %zu octets\n", sizeof(short));
    printf("la longueur de signed short : %zu octets\n", sizeof(signed short));
    printf("la longueur de unsigned short : %zu octets\n", sizeof(unsigned short));

    printf("la longueur de int : %zu octets\n", sizeof(int));
    printf("la longueur de signed int : %zu octets\n", sizeof(signed int));
    printf("la longueur de unsigned int : %zu octets\n", sizeof(unsigned int));

    printf("la longueur de long int : %zu octets\n", sizeof(long int));
    printf("la longueur de signed long int : %zu octets\n", sizeof(signed long int));
    printf("la longueur de unsigned long int : %zu octets\n", sizeof(unsigned long int));

    printf("la longueur de long long int : %zu octets\n", sizeof(long long int));
    printf("la longueur de signed long long int : %zu octets\n", sizeof(signed long long int));
    printf("la longueur de unsigned long long int : %zu octets\n", sizeof(unsigned long long int));

    printf("la longueur de float : %zu octets\n", sizeof(float));
    printf("la longueur de double : %zu octets\n", sizeof(double));
    printf("la longueur de long double : %zu octets\n", sizeof(long double));

    return 0;
}
