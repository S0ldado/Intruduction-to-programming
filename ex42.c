#include <stdio.h>

int main(){
    int n,i,k,j,qtd;
    scanf("%d",&n);
    
    //Validando a entrada de N
    while(n<1)
        scanf("%d",&n);
    
    //Definindo vetor 
    int vet[n];
    
    for(i = 0; i<n; i++)
        scanf("%d",&vet[i]);
        
    //Definindo elemento K para a comparação
    scanf("%d",&k);
    
    qtd = 0;
    for(j = 0; j<n; j++){
        if(vet[j] >= k)
           qtd ++;
    }
    printf("%d\n",qtd);

    return 0;
}
