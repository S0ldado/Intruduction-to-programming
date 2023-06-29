#include <stdio.h>

int main(){
    
    int n, i, vet[100000];
    scanf("%d",&n);
    
    //Definindo itens do vetor 
    
    for(i = 0; i < n; i++){
        scanf("%d",&vet[i]);
    }
    
    //Imprimindo os valores do veto
    
    for(i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
    return 0;
}
