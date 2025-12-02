#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {

    struct Etudiant etu[5];

    strcpy(etu[0].nom, "Dupont");
    strcpy(etu[0].prenom, "Marie");
    strcpy(etu[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etu[0].note1 = 16.5;
    etu[0].note2 = 12.1;

    strcpy(etu[1].nom, "Martin");
    strcpy(etu[1].prenom, "Pierre");
    strcpy(etu[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etu[1].note1 = 14.0;
    etu[1].note2 = 14.1;

    strcpy(etu[2].nom, "Bernard");
    strcpy(etu[2].prenom, "Leila");
    strcpy(etu[2].adresse, "10 Rue Centrale, Lyon");
    etu[2].note1 = 15.2;
    etu[2].note2 = 13.7;

    strcpy(etu[3].nom, "Sow");
    strcpy(etu[3].prenom, "Idrissa");
    strcpy(etu[3].adresse, "5 Rue des Lilas, Lyon");
    etu[3].note1 = 13.0;
    etu[3].note2 = 12.9;

    strcpy(etu[4].nom, "Nguyen");
    strcpy(etu[4].prenom, "Clara");
    strcpy(etu[4].adresse, "90 Rue Nationale, Lyon");
    etu[4].note1 = 15.8;
    etu[4].note2 = 16.2;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etu[i].nom);
        printf("Prenom : %s\n", etu[i].prenom);
        printf("Adresse : %s\n", etu[i].adresse);
        printf("Note 1 : %.1f\n", etu[i].note1);
        printf("Note 2 : %.1f\n\n", etu[i].note2);
    }

    return 0;
}
