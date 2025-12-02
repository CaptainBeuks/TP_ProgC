#include <stdio.h>

int main(void) {
    int n = 7; // Nombre de termes à afficher (modifiable)
    int u0 = 0, u1 = 1, un;

    printf("Suite de Fibonacci jusqu’à U%d :\n", n);
    printf("%d, %d", u0, u1);

    for (int i = 2; i <= n; i++) {
        un = u0 + u1;   // Formule : Un = Un-1 + Un-2
        printf(", %d", un);
        u0 = u1;        // Décalage des valeurs
        u1 = un;
    }

    printf(".\n");

    return 0;
}
