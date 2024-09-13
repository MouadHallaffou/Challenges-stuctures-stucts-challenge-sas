#include <stdio.h>
#include <string.h>

#define NB_NOTES 5


struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[NB_NOTES];
};

int main() {

    struct Etudiant etudiant1;


    strcpy(etudiant1.nom, "Mouad");
    strcpy(etudiant1.prenom, "Hallaffou");

    etudiant1.notes[0] = 15;
    etudiant1.notes[1] = 18;
    etudiant1.notes[2] = 12;
    etudiant1.notes[3] = 16;
    etudiant1.notes[4] = 14;


    printf("Nom: %s\n", etudiant1.nom);
    printf("Prenom: %s\n", etudiant1.prenom);


    printf("Notes: ");
    for (int i = 0; i < NB_NOTES; i++) {
        printf("%d ", etudiant1.notes[i]);
    }
    printf("\n");

    return 0;
}
