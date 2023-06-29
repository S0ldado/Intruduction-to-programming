#include <stdio.h>

int main(){
    
    int n, i, vet[100000];
    scanf("%d",&n);
    
    //Definindo itens do vetor 
    
    for(i = 0; i < n; i++){
        scanf("%d",&vet[i]);
    }
    
    //Conferindo se os valores são pares
    
    int j,qtd = 0;
    
    for(j = 0; j < n; j++){
        if(vet[j]%2 == 0){
           printf("%d ",vet[j]);
           qtd ++;
        }
    }
    printf("%d\n",qtd);
    return 0;
}
