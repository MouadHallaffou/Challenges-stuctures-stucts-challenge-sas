#include <stdio.h>

struct Pointter {
    int x;
    int y;
};

int main() {

    struct Pointter pointt;
    struct Pointter *ptrPoint = &pointt;

    printf("Entrez la valeur de x : ");
    scanf("%d", &ptrPoint->x);
    printf("Entrez la valeur de y : ");
    scanf("%d", &ptrPoint->y);

    printf("Le point a pour coordonnées : (%d, %d)\n", ptrPoint->x, ptrPoint->y);

    return 0;
}
