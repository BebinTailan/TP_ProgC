#include <stdio.h>

int main(void) {
    int a = 2;
    int b = 10;
    int resultat = 1;
    int i = 0;

    while (i < b) {
        resultat = resultat * a;
        i++;
    }

    printf("%d\n", resultat);
   
}
