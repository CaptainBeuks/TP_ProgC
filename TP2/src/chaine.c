#include <stdio.h>

int main(void) {
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];
    int i, j;


    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de la première chaîne : %d\n", longueur);

 
    for (i = 0; chaine1[i] != '\0'; i++) {
        copie[i] = chaine1[i];
    }
    copie[i] = '\0'; 
    printf("Copie de la première chaîne : %s\n", copie);

 
    for (i = 0; chaine1[i] != '\0'; i++) {
        concat[i] = chaine1[i];
    }


    for (j = 0; chaine2[j] != '\0'; j++) {
        concat[i + j] = chaine2[j];
    }
    concat[i + j] = '\0'; 

    printf("Concaténation des deux chaînes : %s\n", concat);

    return 0;
}
