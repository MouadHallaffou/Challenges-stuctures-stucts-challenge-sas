#include <stdio.h>


struct Rectangle
{
    float longueur;
    float largeur;
};

float calculer_aire(struct Rectangle Rectangle1)
{
    return Rectangle1.longueur * Rectangle1.largeur;
}

int main()
{
    struct Rectangle Rectangle1;


    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &Rectangle1.longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &Rectangle1.largeur);

    float aire = calculer_aire(Rectangle1);
    printf("L'aire du rectangle est : %.2f\n", aire);

    return 0;
}
