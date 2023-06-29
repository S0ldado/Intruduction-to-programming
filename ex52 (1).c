#include <stdio.h>

int main(){
    int i,j,vet[10000],n,aux;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    
    for(i=0;i<n;i++){ //Comando de ordanação na ordem crescente
        for(j = i + 1;j<n;j++){
            if(vet[i]>vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    
    for(i = 0; i<n; i++){
        printf("%d\n",vet[i]);
    }

    return 0;
}
