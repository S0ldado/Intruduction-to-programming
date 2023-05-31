#include <stdio.h>

int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    
    
    if(x%2!=0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }else{
        for(i=1; i<y; i++){printf("%d ",x);
        x = x+2;
        }
        printf("%d\n",x);
    }

    return 0;
}
