#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = rand() % 200 - 100;

    printf("Tableau :\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    int n;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &n);

    int present = 0;

    for (int i = 0; i < 100; i++)
        if (t[i] == n)
            present = 1;

    if (present)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
