#include <stdio.h>

int main(){
    int n,i,j,k=1;
    scanf("%d",&n);
    
    if(n>1){
        for(i=1;i<n;i++)
           for(j=i + 1;j<=n;j++){
                printf("Final %d: Time%d X Time%d\n",k,i,j);
                k++;
           }    
    }else{
        printf("Campeonato invalido!\n");
    }
    
    return 0;
}
