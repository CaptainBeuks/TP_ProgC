#include <stdio.h>

int main(void) {
    int a = 2;     // Base
    int b = 3;     // Exposant
    int resultat = 1;

    printf("Calcul de la puissance : %d^%d\n\n", a, b);

    // Boucle pour calculer a^b
    for (int i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    printf("Résultat : %d^%d = %d\n", a, b, resultat);

    return 0;
}
