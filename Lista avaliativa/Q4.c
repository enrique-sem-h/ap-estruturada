#include <stdio.h>

int main() {
    float x, y;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    else if (x == 0) {
        printf("Eixo Y\n");
    }
    else if (y == 0) {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else {
        printf("Q4\n");
    }
}
