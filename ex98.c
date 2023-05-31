#include <stdio.h>

int main(){
    int n,i,x=0;
    scanf("%d",&n);
    
    if(n<0)
      printf("Numero invalido!\n");
      else{
          if((n==1)||(n==0))
             x = 1;
            for(i=2;i<=(n/2)+1;i++){
               if(n%i==0)
                  x=1;
            }       if(x==0)
                    printf("PRIMO\n");
                      else{
                        printf("NAO PRIMO\n");
                      }
            }    
    return 0;
}