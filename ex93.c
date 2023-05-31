#include <stdio.h>


int main(){
    double a,r,x,renda,tx; //a = investimento inicial; r = taxa de juros; n = meses
    int n,i; //renda = investimento e rendimento juntos: tx = taxa de juros atualizadas
    scanf("%lf %lf %d",&a,&r,&n);
    
    tx = (1+r);
    
    for(i=1;i<=n;i++){
        renda = a*tx;
        x = renda-a;
        printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n",i,renda,x);
        tx = tx*(1+r);
        
    }
    

    return 0;
}