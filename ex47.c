#include <stdio.h>

int main(){
    int n,i,vet[100000],soma;
    scanf("%d",&n);
    
    
    if(n<5000){
        //Definindo valores para o vetor
        
        for(i = 0; i < n; i++){
            scanf("%d",&vet[i]);
        }
        
        //Defindo laço para soma dos vetores
        
        for(i = 0; i<n; i++){
            soma += vet[i];
        }
    }
        printf("%d\n",soma);
    return 0;
}
