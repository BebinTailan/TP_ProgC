#include <stdio.h>
#include <string.h>


struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;
    float note_sys;
};

int main(void) {

    struct Etudiant etudiants[5];


    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "12 rue A, Paris");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys = 13.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "34 avenue B, Lyon");
    etudiants[1].note_prog = 12.0;
    etudiants[1].note_sys = 14.5;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "56 boulevard C, Marseille");
    etudiants[2].note_prog = 17.0;
    etudiants[2].note_sys = 16.0;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "78 rue D, Toulouse");
    etudiants[3].note_prog = 10.5;
    etudiants[3].note_sys = 11.0;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "90 avenue E, Lille");
    etudiants[4].note_prog = 14.0;
    etudiants[4].note_sys = 15.0;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("Nom: %s\n", etudiants[i].nom);
        printf("Prenom: %s\n", etudiants[i].prenom);
        printf("Adresse: %s\n", etudiants[i].adresse);
        printf("Note 1: %.2f\n", etudiants[i].note_prog);
        printf("Note 2: %.2f\n", etudiants[i].note_sys);
        printf("-------------------------\n");
    }

    return 0;
}
