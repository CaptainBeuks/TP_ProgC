#include <stdio.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {

    struct Couleur c[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xaa, 0x11, 0x44, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xf1, 0xf2, 0xf3, 0xff},
        {0x99, 0x55, 0x33, 0xff},
        {0x42, 0x24, 0x18, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", c[i].r);
        printf("Vert : %d\n", c[i].g);
        printf("Bleu : %d\n", c[i].b);
        printf("Alpha : %d\n\n", c[i].a);
    }

    return 0;
}
