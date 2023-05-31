#include <stdio.h>

int main(){
    int n,i,x;
    scanf("%d",&n);
    
    for(i=2;i<=n;i++){
        if((n>5)&&(n<2000)){
            x = i*i;
        printf("%dˆ2 = %d\n",i,x);
        i++;
        }
    }
    return 0;
}
