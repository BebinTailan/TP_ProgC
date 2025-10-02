#include <stdio.h>

int main() {
    unsigned int d = 268439552; 
    unsigned int taille = sizeof(d) * 8;
    unsigned int bit4 = (d >> (taille - 4)) & 1;
    unsigned int bit20 = (d >> (taille - 20)) & 1;
    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
