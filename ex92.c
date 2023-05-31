#include <stdio.h>

int main(){
    int j,k;
    float n,i,s,res,it;
    scanf("%f",&n);
    scanf("%f",&i);
    scanf("%d",&k);
    scanf("%f",&s);
    
    it = i; //variavel que recebe valor de i
    
    printf("Tabuada de soma:\n");
    for(j=0;j<k;j++){
        res = n + it;
        printf("%.2f + %.2f = %.2f\n",n,it,res);
        it = it+s; //atualizando o valor de it
    }
    
    it = i;
    
    printf("Tabuada de subtracao:\n");
    for(j=0;j<k;j++){
        res = n - it;
        printf("%.2f - %.2f = %.2f\n",n,it,res);
        it = it + s;
    }
    
    it = i;
    
    printf("Tabuada de multiplicacao:\n");
    for(j=0;j<k;j++){
        res = n*it;
        printf("%.2f x %.2f = %.2f\n",n,it,res);
        it = it + s;
    }
    
    it = i;
    
    printf("Tabuada de divisao:\n");
    for(j=0;j<k;j++){
        res = n/it;
        printf("%.2f / %.2f = %.2f\n",n,it,res);
        it = it + s;
    }
    
    return 0;
}
