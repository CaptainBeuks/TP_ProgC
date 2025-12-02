#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    
    printf("a = %d, b = %d\n\n", a, b);
    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division entière (a / b) = %d\n", a / b);
    printf("Reste de la division (a %% b) = %d\n", a % b);

    
    printf("\n--- Comparaisons logiques ---\n");
    printf("a == b : %d\n", a == b); 
    printf("a > b : %d\n", a > b);   
    printf("a < b : %d\n", a < b);   
    printf("a != b : %d\n", a != b); 
    printf("a >= b : %d\n", a >= b); 
    printf("a <= b : %d\n", a <= b); 

    return 0;
}
