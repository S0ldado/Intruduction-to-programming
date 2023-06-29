#include <stdio.h>

int main(){
    
    int n, i, vet[100000];
    scanf("%d",&n);
    
    //Definindo itens do vetor 
    
    for(i = 0; i < n; i++){
        scanf("%d",&vet[i]);
    }
    
    //Escrevendo os valores de trás para frente
    
    for(i = n - 1; i >= 0;i--){
        printf("%d ",vet[i]);
    }
    return 0;
}
