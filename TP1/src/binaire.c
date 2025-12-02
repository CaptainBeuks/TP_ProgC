#include <stdio.h>

int main(void) {
    unsigned int nombre = 1024; 
    int i;

    printf("Représentation binaire de %u : ", nombre);


    for (i = 31; i >= 0; i--) {
        unsigned int bit = (nombre >> i) & 1; 
        printf("%u", bit);

 
        if (i % 8 == 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
