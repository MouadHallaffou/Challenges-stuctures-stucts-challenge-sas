#include <stdio.h>
#include <string.h>


struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};


struct Livre creer_livre(char titre[], char auteur[], int annee) {
    struct Livre livre;


    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;

    return livre;
}

int main() {

    struct Livre livre1 = creer_livre("CodingChampions", "Mouad Hallaffou", 2023);

    printf("Titre: %s\n", livre1.titre);
    printf("Auteur: %s\n", livre1.auteur);
    printf("Annee: %d\n", livre1.annee);

    return 0;
}
