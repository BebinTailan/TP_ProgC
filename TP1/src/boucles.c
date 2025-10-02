#include <stdio.h>

int main(void){
    int compteur ;
    do {
        printf("Entrez la taille du triangle (strictement inferieure a 10) : ");
        scanf("%d", &compteur);
    } while (compteur >= 10 || compteur <= 0);


}
