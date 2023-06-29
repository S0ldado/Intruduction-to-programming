#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int notas[10000];
    int ultima_nota, frequencia_ultima_nota = 0;
    int maior_nota = 0, indice_primeira_ocorrencia = -1;
    int i;
    // Leitura das notas e contagem
    for (i = 0; i < N; i++) {
        scanf("%d", &notas[i]);

        // Atualizar maior nota e índice da primeira ocorrência
        if (notas[i] > maior_nota) {
            maior_nota = notas[i];
            indice_primeira_ocorrencia = i;
        }

        // Atualizar última nota e sua frequência
        if (i == N - 1) {
            ultima_nota = notas[i];
        }
    }

    for (i = 0; i < N; i++) {
        if (notas[i] == ultima_nota) {
            frequencia_ultima_nota++;
        }
    }

    // Saída
    printf("Nota %d, %d vezes\n", ultima_nota, frequencia_ultima_nota);
    printf("Nota %d, indice %d\n", maior_nota, indice_primeira_ocorrencia);

    return 0;
}
