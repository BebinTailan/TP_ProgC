#include <stdio.h>

int main(void){
    int compteur ;
    do {
        printf("Entrez la taille du triangle (strictement inferieure a 10) : ");
        scanf("%d", &compteur);
    } while (compteur >= 10 || compteur <= 0);

    for (int i = 0; i <= compteur; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i==compteur)
            {
                printf("*");
            }
            else{
                printf("#");
            };
            
        }
        printf("\n");
        
    }
    int i=0;
    while (i<=compteur)
    {
        int j=0;
        while (j<=i)
        {
            if (j == 0 || j == i || i==compteur)
            {
                printf("*");
            }
            else{
                printf("#");
            };
            j++;
        }
        printf("\n");
        i++;
        
    }
    
    

}
