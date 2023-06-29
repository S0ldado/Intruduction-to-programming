#include <stdio.h>

int main() {
    int n, i, vet[100000], maior = 0, qtd = 0;
    scanf("%d", &n);

    while (n > 0) {
        maior = 0; //Redefinindo valor da variavel de comparação
        qtd = 0; //Redefinindo o valor da variavel de posição
        
        for (i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
        
        for(i = 0; i<n;i++){
            if (vet[i] > maior) {
                maior = vet[i];
                qtd = i;  // Posição do vetor
            }
        }
        
        printf("%d %d\n\n", qtd, maior);
        
        scanf("%d", &n);
    }

    return 0;
}