#include <stdio.h>

int main() {


    char noms[5][50] = {
        "Dupont Alice",
        "Martin Karim",
        "Bernard Leila",
        "Sow Idrissa",
        "Nguyen Clara"
    };

    char adresses[5][100] = {
        "12 rue de Paris",
        "4 avenue Victor Hugo",
        "58 boulevard Centrale",
        "23 rue des Lilas",
        "90 rue Nationale"
    };

  
    float notesProg[5] = {14.5, 12.0, 16.5, 13.0, 15.0};
    float notesSys[5]  = {13.0, 11.5, 17.0, 14.0, 16.5};

 
    printf("===== Informations des etudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("  Nom complet : %s\n", noms[i]);
        printf("  Adresse     : %s\n", adresses[i]);
        printf("  Note Prog C : %.2f\n", notesProg[i]);
        printf("  Note Sys    : %.2f\n", notesSys[i]);
        printf("-------------------------------------------\n");
    }

    return 0;
}
