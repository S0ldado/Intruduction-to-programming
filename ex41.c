#include <stdio.h>

int main() {
    int N, M, i, j, busca, encontrado;
    scanf("%d", &N);

    int vetor[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &M);
    for (i = 0; i < M; i++) {
         scanf("%d", &busca);
        
        for (j = 0; j < N; j++) {
            if (vetor[j] == busca) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}
