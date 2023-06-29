#include <stdio.h>

int main() {
    
    int n,vet[32],i = 0 ,j;
    scanf("%d", &n);
    
    if(n == 0){ //Quando o decimal for igual a 0
        printf("0\n");
    }
    
    while(n>0){ // Quando o decimal for maior que 0
        vet[i] = n%2; //Definindo valores binarios para cada posicão do vetor.
        n /= 2; //Divindo o decimal por 2
        i++; //Aumentando o valor da posição do vetor iniciado em 0
    }
    
    for(j = i - 1; j >=0; j--){
        printf("%d",vet[j]);
    }
    
    
    return 0;
}