#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

int main(void) {
    int tab_int[N];
    float tab_float[N];

    srand(time(NULL));

    int *pi = tab_int;
    float *pf = tab_float;

    for (int i = 0; i < N; i++) {
        *(pi + i) = rand() % 200;          
        *(pf + i) = (rand() % 1000) / 100.0; 
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }
    printf("\n");

    printf("Tableau de flottants (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }
    printf("\n\n");

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            *(pi + i) *= 3;
            *(pf + i) *= 3.0f;
        }
    }

    printf("Tableau d'entiers (apres) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }
    printf("\n");

    printf("Tableau de flottants (apres) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }
    printf("\n");

    return 0;
}
