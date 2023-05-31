#include <stdio.h>
#define popular 1.00
#define geral 5.00
#define arquibancada 10.00
#define cadeiras 20.00



int main(){
    
    int n, i=1,ing;
    float renda,pop,ger,arq,cad,;
    scanf("%d",&n);
    
    while(i <=n){
        scanf("%d %f %f %f %f",&ing,&pop,&ger,&arq,&cad);
        renda = ing*(pop*popular + ger*geral + arq*arquibancada + cad*cadeiras)/100.0;
        printf("A RENDA DO JOGO N. %d E = %.2f\n",i,renda);
        i++;
    }

    return 0;
}
