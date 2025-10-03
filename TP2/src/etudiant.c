#include <stdio.h>

int main(void) {
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Bernard", "Petit"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "12 rue A, Paris",
        "34 avenue B, Lyon",
        "56 boulevard C, Marseille",
        "78 rue D, Toulouse",
        "90 avenue E, Lille"
    };
    float notes_prog[5] = {15.5, 12.0, 17.0, 10.5, 14.0};
    float notes_sys[5] = {13.0, 14.5, 16.0, 11.0, 15.0};

    for(int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prenom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note 1: %.2f\n", notes_prog[i]);
        printf("Note 2: %.2f\n", notes_sys[i]);
        printf("-------------------------\n");
    }

    return 0;
}
