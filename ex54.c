#include <stdio.h>

int main(){
    int n,vet[1000000],j,aux,i;
    float mediana;
    scanf("%d",&n);
    
    for(i = 0;i < n;i++){
        scanf("%d",&vet[i]);
    }
    
    //Ordenando em ordem crescente
    for(i=0;i<n;i++){
        for(j = i + 1;j<n;j++){
            if(vet[i]>vet[j]){
                aux = vet[i];
                vet[i]=vet[j];
                 vet[j]=aux;
            }
        }
    }
    
    //Calculando a mediana
    
    if(n%2 == 0){
        mediana =(float)(vet[n/2 - 1] + vet[n/2])/2.0;
    }else{
        mediana = vet[n/2];
    }
    
    printf("%.2f\n",mediana);
    
    
    return 0;
}
