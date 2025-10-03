#include <stdio.h>

int main() {
    int cours[] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 
                   2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int n = sizeof(cours) / sizeof(cours[0]);
    
    int maxPerte = 0;
    int achatIndex = -1;
    int venteIndex = -1;

    for (int i = 0; i < n; i++) {              // achat
        for (int j = i + 1; j < n; j++) {      // vente après achat
            int perte = cours[i] - cours[j];
            if (perte > maxPerte) {
                maxPerte = perte;
                achatIndex = i;
                venteIndex = j;
            }
        }
    }

    if (maxPerte > 0) {
        printf("La plus grande perte est de %d\n", cours[achatIndex]-cours[venteIndex]);
        printf("Achat au temps T1 = %d (indice %d)\n", cours[achatIndex], achatIndex);
        printf("Vente au temps T2 = %d (indice %d)\n", cours[venteIndex], venteIndex);
    } else {
        printf("Aucune perte possible, perte = 0\n");
    }

    return 0;
}
