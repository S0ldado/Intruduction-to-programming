#include <stdio.h>
#include <math.h>

// Função para calcular a distância entre dois pontos
float calcular_distancia(float x1, float y1, float z1, float x2, float y2, float z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main() {
    int n, i;
    scanf("%d", &n);

    float pontos[n][3]; // Matriz com n linhas e 3 colunas

    for (i = 0; i < n; i++) { // Leitura dos pontos
        scanf("%f %f %f", &pontos[i][0], &pontos[i][1], &pontos[i][2]);
    }

    float distancia;

    for (i = 1; i < n; i++) { // Calcular e imprimir as distâncias
        distancia = calcular_distancia(pontos[i-1][0], pontos[i-1][1], pontos[i-1][2], pontos[i][0], pontos[i][1], pontos[i][2]);
        printf("%.2f\n", distancia);
    }

    return 0;
}
