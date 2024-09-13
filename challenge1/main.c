#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {

    struct Personne personne1;

    strcpy(personne1.nom, "Dupont");
    strcpy(personne1.prenom, "Jean");
    personne1.age = 30

    printf("Nom: %s\n", personne1.nom);
    printf("Prenom: %s\n", personne1.prenom);
    printf("Age: %d\n", personne1.age);

    return 0;
}
