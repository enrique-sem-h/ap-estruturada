/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas x e y do primeiro ponto (separadas por espaço): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas x e y do segundo ponto (separadas por espaço): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.4f\n", x1, y1, x2, y2, distancia);
}
