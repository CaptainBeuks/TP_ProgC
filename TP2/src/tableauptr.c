#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int ti[11];
    float tf[11];

    srand(time(NULL));

    for (int *p = ti; p < ti + 11; p++)
        *p = rand() % 200;

    for (float *p = tf; p < tf + 11; p++)
        *p = (float)(rand() % 1000) / 100.0f;

    printf("Entiers avant :\n");
    for (int *p = ti; p < ti + 11; p++)
        printf("%d ", *p);
    printf("\n");

    printf("Floats avant :\n");
    for (float *p = tf; p < tf + 11; p++)
        printf("%.2f ", *p);
    printf("\n");

    int index = 0;
    for (int *p = ti; p < ti + 11; p++, index++)
        if (index % 2 == 0)
            *p = (*p) * 3;

    index = 0;
    for (float *p = tf; p < tf + 11; p++, index++)
        if (index % 2 == 0)
            *p = (*p) * 3;

    printf("Entiers apres :\n");
    for (int *p = ti; p < ti + 11; p++)
        printf("%d ", *p);
    printf("\n");

    printf("Floats apres :\n");
    for (float *p = tf; p < tf + 11; p++)
        printf("%.2f ", *p);
    printf("\n");

    return 0;
}
